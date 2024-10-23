#!/bin/zsh

# 引数が指定されているか確認
if [ -z "$1" ]; then
    echo "エラー: フォルダ名を指定してください。"
    exit 1
fi

# 入力ファイルの存在確認
if [ ! -f "inputs/$1.txt" ]; then
    echo "エラー: ファイル $1.txt が存在しません。"
    exit 1
fi

# a.out 実行とファイルリダイレクト
./a.out < "inputs/$1.txt" > "outputs/${1}_output.txt"

# 正常終了
echo "処理が完了しました。出力は outputs/${1}_output.txt に保存されました。"
exit 0