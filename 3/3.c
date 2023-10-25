#include <stdio.h>

/*
 ## 문제 설명
 [문제 3-15] 변형
 1개의 문자와 2개의 정수로 이루어진 한 줄을 입력으로 받아 해당 문자의
 연산(+, -, *, /, %)을 2개의 정수에 적용한 결과를 출력하라.
 단, 나눗셈의 경우는 정수 부분만 출력한다.

 ## 입력 예시 1
 + 100 200

 ## 출력 예시 1
 300

 ## 입력 예시 2
 - 100 200

 ## 출력 예시 2
 -100

 ## 입력 예시 3
 % 100 200

 ## 출력 예시 3
 100
 */

int main()
{
    //	## 문제 설명
    //	[문제 3-15] 변형
    //	1개의 문자와 2개의 정수로 이루어진 한 줄을 입력
    char c;
    int num1, num2 = 0;
    scanf("%c %d %d", &c, &num1, &num2);

    //	연산(+, -, *, /, %)을 2개의 정수에 적용한 결과를 출력하라.
    //	단, 나눗셈의 경우는 정수 부분만 출력한다.

    if (c == '+')
    {
        int result = num1 + num2;
        printf("%d", result);
    }
    else if (c == '-')
    {
        int result = num1 - num2;
        printf("%d", result);
    }
    else if (c == '*')
    {
        int result = num1 * num2;
        printf("%d", result);
    }
    else if (c == '/')
    {
        int result = num1 / num2;
        printf("%d", result);
    }
    else if (c == '%')
    {
        int result = num1 % num2;
        printf("%d", result);
    }

    return 0;
}
