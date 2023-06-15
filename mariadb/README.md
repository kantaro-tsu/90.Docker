| 環境変数              | 内容                       | 
| --------------------- | -------------------------- | 
| MARIADB_ROOT_PASSWORD | ルートユーザーのパスワード | 
| MARIADB_DATABASE      | データベース名             | 
| MARIADE_USER          | データベースのユーザー名   | 
| MARIADB_PASSWORD      | データベースのパスワード   | 
[DockerHub:mariadb](https://hub.docker.com/_/mariadb)

### コンテナに入る方法
```
docker compose /bin/bash
```
### データベースへログイン
```
mariadb -u testuser -D testdb -p
```