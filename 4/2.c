#include <stdio.h>

/*
 # 문제 설명

 읽어 들인 두 양의 정수의 모든 공약수를 순서대로 출력한 후
 공약수의 개수도 출력하는 프로그램을 작성한다.

 # 입력 예시 1
 12 18

 # 출력 예시 1
 1 2 3 6
 공약수는 4개

 # 입력 예시 2
 10 1

 # 출력 예시 2
 1
 공약수는 1개
 */

int main()
{
    // 읽어 들인 두 양의 정수의
    int x, y;
    int cnt = 0;
    scanf("%d %d", &x, &y);
    int arr[999] = {
        0,
    };
    int qwe = 0;

    int min;
    if (x > y)
    {
        min = y;
    }
    else
    {
        min = x;
    }

    //	모든 공약수를 순서대로 출력한 후
    for (int i = 1; i <= min; ++i)
    {

        if ((x % i) == 0)
        {
            if ((y % i) == 0)
            {
                cnt = cnt + 1;
                arr[qwe] = i;
                qwe = qwe + 1;
            }
        }
    }

    for (int i = 0; i < cnt; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("공약수는 %d개", cnt);

    //	 공약수의 개수도 출력하는 프로그램을 작성한다.

    return 0;
}
