#include <stdio.h>

// ## 문제 설명
// 매달 입금하는 금액과 저축하는 년수를 정수를 입력하여, 저축되는 총액을 출력하는 프로그램을 작성해
// 보자. 단, 이자는 무시하며, 한달에 입금할 수 있는 금액은 최대 500만원, 년수는 30년으로 합니다.

// ## 입력 예시
// 100000 10

// ## 출력 예시
// 12000000

int main()
{
    // 매달 입금하는 금액과 저축하는 년수를 정수를 입력하여,
    int inputMoney = 0;
    int yearInput = 0;
    int totalSaveMoney = 0;

    scanf("%d", &inputMoney);
    scanf("%d", &yearInput);
    int monthInputDay = yearInput * 12;

    // 저축되는 총액을 출력하는
    for (int i = 0; i < monthInputDay; i++)
    {
        totalSaveMoney = totalSaveMoney + inputMoney;
    }

    //  이자는 무시하며, 한달에 입금할 수 있는 금액은 최대 500만원, 년수는 30년으로 합니다.
    printf("%d", totalSaveMoney);

    return 0;
}
