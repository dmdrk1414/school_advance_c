#include <stdio.h>

/*
 ## 문제 설명
 길이를 인치(inch)로 입력받아 센티미터(cm)로 변환하여 인치와 센티미터를 출력하는
 프로그램을 작성해보자.  1 인치(inch)는 2.54 센티미터(cm)에 해당한다.

 ## 입력 예시 1
 10

 ## 출력 예시 1
 10.000000 inch = 25.400000 cm

 ## 입력 예시 2
 32

 ## 출력 예시 2
 32.000000 inch = 81.280000 cm
 */

int main()
{
    //	 길이를 인치(inch)로 입력받아
    double inch = 0;
    double cm = 0;

    scanf("%lf", &inch);

    //	센티미터(cm)로 변환하여
    //	 1 인치(inch)는 2.54 센티미터(cm)에 해당한다.
    cm = inch * 2.54;

    //	인치와 센티미터를 출력하는
    printf("%f inch = %f cm", inch, cm);

    return 0;
}
