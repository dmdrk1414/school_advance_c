#include <stdio.h>

/*
 ## 문제 설명
 [문제 3-7] 변형
 세 개의 정수를 입력으로 받아 이 수들을 가장 큰 수부터 순서대로 출력하는
 프로그램을 작성하라.

 ## 입력 예시
 4
 9
 3

 ## 출력 예시
 9 4 3
 */

int main()
{
    //	 ## 문제 설명
    //	 [문제 3-7] 변형
    //	 세 개의 정수를 입력으로 받아
    int arr[3] = {
        0,
    };

    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &arr[i]);
    }
    //	이 수들을 가장 큰 수부터 순서대로 출력하는
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //	 프로그램을 작성하라.
    printf("%d %d %d", arr[0], arr[1], arr[2]);

    return 0;
}
