# イメージ
FROM debian:11.3
# コピー
COPY ./src/BenchC.c /usr/local/src
COPY ./src/BenchJava.java /usr/local/src
# apt-getのアップデート
RUN apt update && \ 
    # OpenJDK11をインストール
    apt-get -y install openjdk-11-jdk && \
    # vimをインストール
    apt-get -y install vim && \
    # gccをインストール
    apt -y install gcc