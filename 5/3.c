/*
 # 문제 설명

 ## 문제 설명
 정수형 숫자 N(1~100)을 입력하면 Nx4 배열이 만들어 지고 배열 안의 값을 지그재그로
 그리며 정수형으로 출력하는 프로그램을 만들어보자.
 배열에 채워지는 숫자는 0부터 시작한다.

 ##입력 예시 1
 3

 ##출력 예시 1
 0123
 7654
 891011

 ##입력 예시 2
 5

 ##출력 예시 2
 0123
 7654
 891011
 15141312
 16171819
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    //	## 문제 설명
    //	정수형 숫자 N(1~100)을 입력하면
    int num = 0;
    scanf("%d", &num);
    int inputNum2Arr = 0;

    //	Nx4 배열이 만들어 지고
    int arr[4][num];
    for (int i = 0; i < num; ++i)
    {

        if ((i % 2) == 0)
        {
            for (int j = 0; j < 4; ++j)
            {
                arr[j][i] = inputNum2Arr++;
            }
        }

        else
        {
            for (int j = 4 - 1; j >= 0; --j)
            {
                arr[j][i] = inputNum2Arr++;
            }
        }
    }

    //	배열 안의 값을 지그재그로
    //	그리며 정수형으로 출력하는 프로그램을 만들어보자.
    //	배열에 채워지는 숫자는 0부터 시작한다.
    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%d", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
