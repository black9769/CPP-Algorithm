#!/bin/bash

# 시작과 끝 숫자를 사용자로부터 입력 받습니다.
echo "파일 이름의 시작 숫자를 입력하세요:"
read startNumber

echo "파일 이름의 끝 숫자를 입력하세요:"
read endNumber

# .cpp 파일을 생성할 디렉토리를 지정합니다.
directory="/c/Users/black/source/repos/black9769/cpp-codingtest-study/inflearn_ps"

# 시작과 끝 숫자 사이의 범위에서 반복하며 .cpp 파일을 생성합니다.
for ((i=startNumber; i<=endNumber; i++))
do
    # 파일 이름 설정
    fileName="PS${i}.cpp"

    # .cpp 파일을 생성할 경로로 이동합니다.
    cd "$directory" || exit

    # .cpp 파일 생성
    touch "$fileName"
    echo "$fileName 생성 완료"
done
