#!/bin/zsh

# 引数がない場合のエラーチェック
if [ -z "$1" ]; then
  echo "エラー: コピーするディレクトリ名を指定してください。"
  exit 1
fi

#指定されたディレクトリがない場合のエラーチェック
if [ ! -d "$1" ]; then
    echo "エラー: 指定されたディレクトリが存在しません。"
    exit 1
fi

# 第2引数が空なら、archive_contestに移動
if [ -z "$2" ]; then
  mv "./$1" "./archive/archive_contest"
  exit 0
fi

# 第2引数が "p" の場合、archive_practiceに移動
if [ "$2" = "p" ]; then
  mv "./$1" "./archive/archive_practice"
  exit 0
fi

# 第2引数が "i" の場合、archive_icpcに移動
if [ "$2" = "p" ]; then
  mv "./$1" "./archive/archive_icpc"
  exit 0
fi

# 第2引数が "cf" の場合、archive_cfに移動
if [ "$2" = "cf" ]; then
  mv "./$1" "./archive/archive_cf"
  exit 0
fi

# どの条件にも当てはまらない場合
echo "エラー: 無効な第2引数です。'p' または 'cf' を指定してください。"
exit 1