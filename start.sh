#!/bin/zsh

if [ -z "$1" ]; then
    echo "エラー: コピー先のディレクトリ名を指定してください。"
    exit 1
fi

cp -R template_for_contest/contest ./$1
cd ./$1