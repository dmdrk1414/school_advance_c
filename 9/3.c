#include <stdio.h>
#include <string.h>

// ## 문제 설명
// 입력 받은 1개의 문자열 내의 공백을 삭제하는 프로그램을 작성하라.
// - 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
// - (주의) 공백을 포함하는 문자열이 입력으로 주어짐
// - 입력으로 주어지는 문자열의 시작과 끝에 공백 문자가 주어질 수 있음.

// ## 입력 예시 1
// A B C

// ## 출력 예시 1
// ABC

// ## 입력 예시 2 (==> 주의 해야 할 예시)
// Hello World!

// ## 출력 예시 2
// HelloWorld!

// ## 입력 예시 3 (==> 주의 해야 할 예시)
//     1 2 3

// ## 출력 예시 3
// 123

#include <stdio.h>
#include <string.h>

int main()
{
    char input[128]; // 입력 문자열을 저장할 배열
    int count = 0;   // 공백이 아닌 문자의 개수를 세는 변수

    // 사용자로부터 문자열 입력 받기
    fgets(input, sizeof(input), stdin);

    // 문자열을 순회하며 공백이 아닌 문자를 앞으로 이동
    for (int i = 0; input[i]; i++)
    {
        if (input[i] != ' ')
        {
            input[count++] = input[i];
        }
    }

    // 문자열의 나머지 부분을 널 문자로 채움
    input[count] = '\0';

    // 수정된 문자열 출력
    printf("%s", input);

    return 0;
}