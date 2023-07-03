CREATE OR REPLACE VIEW v_schedule (
    index,
    hiduke,
    youbi
) AS
WITH cal AS (SELECT DATE_TRUNC('day', NOW()) AS n),
     idx AS (SELECT GENERATE_SERIES(0, 30) AS i)
SELECT idx.i
     , cal.n + CAST(idx.i || 'days' AS INTERVAL)
     , EXTRACT(DOW FROM cal.n + CAST(idx.i || 'days' AS INTERVAL))
  FROM cal
     , idx
     ;

SELECT * FROM v_schedule;