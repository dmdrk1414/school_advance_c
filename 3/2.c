#include <stdio.h>

/*
 ## 문제 설명
 [문제 3-9] 변형
 3개의 정수를 입력으로 받은 후, 이 수들 중 크기 순서로 중간에 있는 값에서
 가장 멀리 떨어진 수를 출력하라. 단, 떨어진 거리가 같은 경우에는 작은 값을
 출력한다.

 아래 “입력 예시 1”의 3개 숫자 중 크기 순서로 중간에 있는 값은 4이다.
 4에서 9까지는 5만큼 떨어져 있고, 4에서 3까지는 1만큼 떨어져 있다.
 따라서, 4에서 가장 멀리 떨어져 있는 수는 9이다.

 ## 입력 예시 1
 3
 9
 4

 ## 출력 예시 1
 9
 */

int main()
{
    //	## 문제 설명
    //	[문제 3-9] 변형
    //	3개의 정수를 입력으로 받은 후,
    int x, y, z;
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    //	이 수들 중 크기 순서로 중간에 있는 값에서
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int middle = arr[1];

    //	가장 멀리 떨어진 수를 출력하라.
    int result_one = middle - arr[0];
    int result_two = arr[2] - middle;

    if (result_one > result_two)
    {
        printf("%d", arr[0]);
    }
    else if (result_one < result_two)
    {
        printf("%d", arr[2]);
    }
    else
    //	단, 떨어진 거리가 같은 경우에는 작은 값을 출력한다.
    {
        if (arr[0] > arr[2])
        {
            printf("%d", arr[2]);
        }
        else
        {
            printf("%d", arr[0]);
        }
    }

    //
    //	아래 “입력 예시 1”의 3개 숫자 중 크기 순서로 중간에 있는 값은 4이다.
    //	4에서 9까지는 5만큼 떨어져 있고, 4에서 3까지는 1만큼 떨어져 있다.
    //	따라서, 4에서 가장 멀리 떨어져 있는 수는 9이다.

    return 0;
}
