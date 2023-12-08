#include <stdio.h>

// # 문제 설명
// 정수 값 n을 입력 받은 후 각 줄마다 'A'를 n, n-1, n-2, ..., 2, 1개 출력하는 재귀 함수를 구현하라.

// # 입출력 예시 1: 입력 3에 따른 출력
// 3
// AAA
// AA
// A

// # 입출력 예시 2: 입력 4에 따른 출력
// 4
// AAAA
// AAA
// AA
// A

void print_re(int n)
{
    if (n == 0)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("A");
    }
    printf("\n");

    print_re(n - 1);
}

int main(void)
{
    // # 문제 설명
    // 정수 값 n을 입력 받은 후 각 줄마다 'A'를 n, n-1, n-2, ..., 2, 1개 출력하는 재귀 함수를 구현하라.

    int input = 0;
    scanf("%d", &input);
    print_re(input);

    return 0;
}