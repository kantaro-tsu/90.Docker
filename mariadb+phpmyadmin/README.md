### 起動のやり方
```
docker compose up -d
```
<font color="red">※compose.yamlのディレクトリで実行すること！</font>
| 環境変数              | 意味                       | 
| :-------------------- | -------------------------- | 
| MARIADB_ROOT_PASSWORD | ルートユーザーのパスワード | 
| MARIADB_DATABASE      | データベース名             | 
| MARIADB_USER          | データベースのユーザー名   | 
| MARIADB_PASSWORD      | データベースのパスワード   |

| 環境変数     | 意味                                                                | 
| ------------ | ------------------------------------------------------------------- | 
| PMA_HOST     | データベースのホスト名。ここではMariaDBコンテナ名を設定する。 | 
| PMA_USER     | データベースのユーザー名。ここではMariaDBのユーザー名を設定する。   | 
| PMA_PASSWORD | データベースのパスワード。ここではMariaDBのパスワードを設定する。   | 

[DockerHub:phpmyadmin](https://hub.docker.com/_/phpmyadmin)

### コンテナの中に入る方法
```
# コンテナの中に入る
docker compose exec /bin/bash
# データベースへログインする
mariadb -u testuser -D testdb -p
```

### phpMyAdminへのアクセス
http://localhost:8080