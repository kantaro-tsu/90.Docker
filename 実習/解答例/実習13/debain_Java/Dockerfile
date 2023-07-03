# イメージ
FROM debian:11.3
# コピー
COPY hello.java /usr/local/src
# apt-getのアップデート
RUN apt-get update && \ 
    # OpenJDK11をインストール
    apt-get -y install openjdk-11-jdk && \
    # vimをインストール
    apt-get -y install vim