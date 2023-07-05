**1. コンテナ作成の準備**
<font color="red">Djangoを起動するにはDjangoプロジェクトの作成が必要！</font>

```shell

docker compose run --rm web django-admin startproject 【プロジェクト名】.

```

**2. settings.pyの修正**
```

DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.postgresql', 
        'NAME': 'testdb',
        'USER': 'testuser',
        'PASSWORD': 'testpass',
        'HOST': 'db',
        'PORT': 5432 ,
    }
}

```

**3. コンテナの作成**
```
docker compose up -d

```
http://localhost:8000へアクセス