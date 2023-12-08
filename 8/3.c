#include <stdio.h>

// # 문제 설명
// 문자를 입력 받은 후 알파벳 문자의 대문자와 소문자의 등장 횟수를 ‘*’로
// 나열하는 그래프를 출력하라. 교재 p. 308 문제와 다르게 '\n'이 입력되었을 때
// while loop에서 나오게 작성하자.

// 입력 코딩 예시:
// char ch;
// while( (ch = getchar()) != '\n') {
//   ...
// }

// # 입출력 예시 1: 입력 "Alphabet Only!"
// Alphabet Only!
// 대문자**
// 소문자**********

// # 입출력 예시 2: 입력 "Java VS C++"
// Java VS C++
// 대문자****
// 소문자***

int main(void)
{
    int countUpper = 0;
    int countDown = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            countUpper += 1;
        }
        if (ch >= 'a' && ch <= 'z')
        {
            countDown += 1;
        }
    }
    printf("\n");

    printf("대문자");
    for (int i = 0; i < countUpper; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("소문자");
    for (int i = 0; i < countDown; i++)
    {
        printf("*");
    }
    return 0;
}