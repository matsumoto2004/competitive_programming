#!/bin/bash

# 引数をチェック
if [ "$#" -ne 4 ]; then
    echo "Usage: $0 <your_program> <correct_program> <input_generator> <num_tests>"
    exit 1
fi

# 引数の設定
PROGRAM=$1              # チェックするプログラムの実行ファイル
CORRECT_PROGRAM=$2      # 正しいプログラムの実行ファイル
INPUT_GENERATOR=$3      # 入力を生成するプログラムの実行ファイル
NUM_TESTS=$4            # テストケースの数

# ファイル名の設定
INPUT_FILE="input.txt"  # 入力ファイル名
OUTPUT_FILE="output.txt" # 出力ファイル名
CORRECT_OUTPUT_FILE="correct_output.txt" # 基準となる出力ファイル名

# テストケースの実行と比較
for ((i=1; i<=NUM_TESTS; i++))
do
  echo "テストケース $i"

  # ランダムな入力を生成
  $INPUT_GENERATOR > $INPUT_FILE

  # プログラムの出力を生成
  $PROGRAM < $INPUT_FILE > $OUTPUT_FILE

  # 正しいプログラムの出力を生成
  $CORRECT_PROGRAM < $INPUT_FILE > $CORRECT_OUTPUT_FILE

  # 出力を比較
  if diff -q $OUTPUT_FILE $CORRECT_OUTPUT_FILE > /dev/null; then
    echo "テストケース $i: 正しい出力"
  else
    echo "テストケース $i: 出力が不正"
    echo "出力:"
    cat $OUTPUT_FILE
    echo "正しい出力:"
    cat $CORRECT_OUTPUT_FILE
  fi
done