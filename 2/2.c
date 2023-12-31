#include <stdio.h>

/*
 ## 문제 설명
 세 개의 수를 입력받아서 합계는 int 형, 평균값은 float 형으로 출력하는
 프로그램을 작성해보자.

 ## 입력 예시 1
 10
 20
 30

 ## 출력 예시 1
 sum is 60
 average is 20.000000

 ## 입력 예시 2
 119
 19
 9

 ## 출력 예시 2
 sum is 147
 average is 49.000000
 */

int main()
{
    // 세 개의 수를 입력받아서
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    // 합계는 int 형,
    int sum = x + y + z;
    // 평균값은 float 형으로 출력하는
    float one = sum / 3;
    float two = sum % 3;
    float avg = one + two;
    // 프로그램을 작성해보자.
    printf("sum is %d\n", sum);
    printf("average is %f", avg);

    return 0;
}
