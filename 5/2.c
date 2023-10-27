/*
 ##문제 설명
 정수 N(1~10)을 입력하면 Nx5 크기가 만들어지는 정수형 배열 a를 선언한다.
 이후 배열 a에 Nx5개 정수를 입력한 후, 1차원 배열 b에 배열 a의 모든 값이 큰 수부터
 정렬되도록 만드는 프로그램을 작성해 보자.

 ##입력 예시 (2x5 배열 생성)
 2
 1 3 5 7 9 2 4 6 8 10

 ## 출력 예시
 10 9 8 7 6 5 4 3 2 1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //	##문제 설명
    //	정수 N(1~10)을 입력하면
    int n = 0;
    scanf("%d", &n);

    //	Nx5 크기가 만들어지는 정수형 배열 a를 선언한다.
    int arr[n][5];
    int result[n * 5];
    int input = 0;
    int oneArrNum = 0;

    //	이후 배열 a에 Nx5개 정수를 입력한 후,
    for (int y = 0; y < 5; ++y)
    {
        for (int x = 0; x < n; ++x)
        {

            scanf("%d", &input);
            arr[x][y] = input;
            result[oneArrNum++] = input;
        }
    }
    //	1차원 배열 b에 배열 a의 모든 값이 큰 수부터
    //	정렬되도록 만드는 프로그램을 작성해 보자.
    for (int y = 0; y < 5 * n; ++y)
    {
        for (int x = 0; x < 5 * n; ++x)
        {
            if (result[y] > result[x])
            {
                int temp = result[y];
                result[y] = result[x];
                result[x] = temp;
            }
        }
    }

    for (int i = 0; i < n * 5; ++i)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
