#include <stdio.h>

// ## 문제 설명

// - "$END$" 를 읽어 들인 시점에서 문자열 읽기를 중단할 것
// - "$END$" 보다 앞서 입력한 모든 문자열을 출력할 것
// - 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
// - 입력으로 주어지는 문자열의 개수는 최대 10개

// ## 입력 예시 1
// ABC
// Book
// Test
// $END$

// ## 출력 예시 1
// ABC
// Book
// Test

#include <stdio.h>
#include <string.h>

// Maximum length of the input strings
#define MAX_LENGTH 127

int main(void)
{
    char inputString[MAX_LENGTH + 1]; // +1 for null terminator

    // Read input until "$END$" is encountered
    while (scanf("%s", inputString) == 1 && strcmp(inputString, "$END$") != 0)
    {
        // Print the input string
        printf("%s\n", inputString);
    }

    return 0;
}
