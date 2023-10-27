/*

 ##문제 설명
 3x3 크기의 정수형 배열 mx와 my를 선언한다.
 배열 mx와 my에 사용자로부터 정수를 입력 받은 후, 각 위치 요소의 mx 값에서 my 값을
 뺀다. 뺄셈 결과 값을 다시 mx에 저장하고, 저장된 값을 읽어 출력하는 프로그램을 만든다.

 ##입력 예시
 1 2 3 4 5 6 7 8 9
 10 11 12 13 14 15 16 17 18

 #출력 예시
 -9-9-9
 -9-9-9
 -9-9-9
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    //	##문제 설명
    //	3x3 크기의 정수형 배열 mx와 my를 선언한다.
    int mx[3][3];
    int my[3][3];
    int input_one = 0;
    int input_two = 0;

    //	배열 mx와 my에 사용자로부터 정수를 입력 받은 후,
    //	mx을 입력
    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 3; ++x)
        {
            scanf("%d", &input_one);
            mx[x][y] = input_one;
        }
    }

    int result = 0;
    //	my을 입력
    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 3; ++x)
        {
            scanf("%d", &input_two);
            //	각 위치 요소의 mx 값에서 my 값을뺀다.
            result = mx[x][y] - input_two;
            //	뺄셈 결과 값을 다시 mx에 저장하고,
            my[x][y] = result;
        }
    }

    //	저장된 값을 읽어 출력하는 프로그램을 만든다.
    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 3; ++x)
        {
            printf("%d", my[x][y]);
        }
        printf("\n");
    }

    return 0;
}
