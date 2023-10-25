#include <stdio.h>

/*
 ## 문제 설명
 세 자리 자연수를 입력받아 각 자리 수를 출력하는 프로그램을 작성해보자.

 ## 입력 예시 1
 345

 ## 출력 예시 1
 3, 4, 5

 ## 입력 예시 2
 129

 ## 출력 예시 2
 1, 2, 9
 */

int main()
{
    //	 세 자리 자연수를 입력받아
    int num = 0;

    scanf("%d", &num);

    int hun = num / 100;
    int ten = (num % 100) / 10;
    int one = (num % 10);

    //	각 자리 수를 출력하는
    printf("%d, %d, %d", hun, ten, one);

    return 0;
}
