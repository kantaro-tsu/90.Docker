### 起動のやり方
```
docker compose up -d
```
<font color="red">※compose.yamlのディレクトリで実行すること！</font>
| 環境変数              | 意味                       | 
| :-------------------- | -------------------------- |  
| POSTGRES_DATABASE      | データベース名             | 
| POSTGRES_USER          | データベースのユーザー名   | 
| POSTGRES_PASSWORD      | データベースのパスワード。設定が必須  | 

[DockerHub:postgres](https://hub.docker.com/_/postgres)

### コンテナの中に入る方法
```
# コンテナの中に入る
docker compose exec db /bin/

# データベースへログインする
psql -U testuser -d testdb

```