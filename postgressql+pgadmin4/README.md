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

| 環境変数              | 意味                       | 
| :-------------------- | -------------------------- |  
| PGADMIN_DEFAULT_EMAIL     | 初期管理者アカウント用のメールアドレス。pgAdmin4へログインする際に使用する値であり、設定が必須。各自で使用可能なメールアドレスを設定すること。             | 
| PGADMIN_DEFAULT_PASSWORD  | 初期管理者アカウント用のパスワード。pgAdmin4へログインする際に使用する値であり、設定が必須。  | 

[DockerHub:postgres](https://hub.docker.com/_/postgres)
[DockerHub:pgadmin4](https://hub.docker.com/r/dpage/pgadmin4)

### コンテナの中に入る方法
```
# コンテナの中に入る
docker compose exec db /bin/bash
# データベースへログインする
psql -U testuser -d testdb

```