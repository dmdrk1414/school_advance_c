#include <stdio.h>
#include <string.h>
// ## 문제 설명
// 공백을 포함하는 문자열을 입력받아 짝수 번째에 있는 문자를 삭제하는 코드를
// 작성하시오. 문자열의 길이는 최대 100개로 제한한다.

// ## 입력 예시 1
// SuPpEr55

// ## 출력 예시 1
// SPE5

// ## 입력 예시 2
// How are you Doing

// ## 출력 예시 2
// HwaeyuDig

// ## 입력 예시 3
// sQuID GaMe

// ## 출력 예시 3
// suDGM

int main(void)
{
    // 공백을 포함하는 문자열을 입력받아 짝수 번째에 있는 문자를 삭제하는 코드를
    // 작성하시오. 문자열의 길이는 최대 100개로 제한한다.

    // ## 입력 예시 1
    // SuPpEr55

    // ## 출력 예시 1
    // SPE5

    char input[101];
    char tempInput[101];
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        char temp = input[i];

        if ((i % 2) == 0)
        {
            if (temp != ' ')
            {
                tempInput[count++] = temp;
            }
        }
    }

    tempInput[count] = '\0';

    printf("%s", tempInput);

    return 0;
}
