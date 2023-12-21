#include <stdio.h>
#include <string.h>

// ## 문제 설명
// 공백을 포함하는 문자열을 입력받아 대문자는 소문자로, 소문자는 대문자로 출력하는 코드를 작성하시오.
// 문자열의 길이는 최대 100개로 제한한다.

// ## 입력 예시 1
// SuPpEr55

// ## 출력 예시 1
// sUpPeR55

// ## 입력 예시 2
// How are you Doing

// ## 출력 예시 2
// hOW ARE YOU dOING

// ## 입력 예시 3
// sQuID GaMe

// ## 출력 예시 3
// SqUid gAmE

int main(void)
{
    // ## 문제 설명
    // 공백을 포함하는 문자열을 입력받아 대문자는 소문자로, 소문자는 대문자로 출력하는 코드를 작성하시오.
    // 문자열의 길이는 최대 100개로 제한한다.

    // ## 입력 예시 1
    // SuPpEr55

    // ## 출력 예시 1
    // sUpPeR55

    char input[101];
    char temp[101];
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);
    int count = 0;

    int sub = 'a' - 'A'; // a 가크고, A가 작다

    for (int i = 0; i < len; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            temp[count++] = input[i] - sub;
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            temp[count++] = input[i] + sub;
        }
        else
        {
            temp[count++] = input[i];
        }
    }
    temp[count] = '\0';
    printf("%s", temp);

    return 0;
}
