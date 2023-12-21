#include <stdio.h>
#include <string.h>

// ##문제 설명
// 학번, 이름, 전화번호로 구성된 구조체를 정의하고, 값을 입력받아 출력한다.
// phone_number() 함수는 문자열 배열(예: 문자열 "01012341234")로 입력받은 전화번호를
// xxx-xxxx-xxxx 형식(예: "010-1234-1234")으로 출력한다.

// void phone_number(char m[], int n)

// ##입력 예시 1
// 20164242 조무역 01037129845

// ##출력 예시 1
// 20164242
// 조무역
// 010-3712-9845

// ##입력 예시 2
// 202199033 조미술 01104480201

// ##출력 예시 2
// 202199033
// 조미술
// 011-0448-0201

#define NUMBER 11
struct person
{
    int no;
    char name[20];
    char tel[11];
};

void phone_number(char m[], int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("%c", m[i]);
        if (i == 2 || i == 6)
            printf("-");
    }
}

int main(void)
{ // int length;
    struct person per;
    scanf("%d", &per.no);
    scanf("%s", per.name);
    scanf("%s", per.tel);
    printf("%d\n", per.no);
    printf("%s\n", per.name);
    phone_number(per.tel, NUMBER);

    return 0;
}
