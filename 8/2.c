#include <stdio.h>

// # 문제 설명
// 월과 일을 입력 받은 후, 입력한 날을 포함하여 올해 남아있는 일수를 출력하라.
// (단, 2월은 28일로 계산한다.)
// 월 일 입력은 다음과 같이 한다.
// int m, d;
// scanf("%d월 %d일", &m, &d);

// # 입출력 예시 1: "12월 31일" 입력 "1일 남음" 출력
// 12월 31일
// 1일 남음

// # 입출력 예시 2: "1월 1일" 입력 "365일 남음" 출력
// 1월 1일
// 365일 남음

// # 입출력 예시 3: "7월 4일" 입력 "181일 남음" 출력
// 7월 4일
// 181일 남음

#include <stdio.h>

int main()
{
    int m, d;

    // 월과 일 입력
    scanf("%d월 %d일", &m, &d);

    // 각 월의 일수를 배열에 저장
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 입력받은 날짜로부터 올해 마지막까지 남은 일수 계산
    int remainingDays = 0;
    for (int i = m; i <= 12; i++)
    {
        if (i == m)
        {
            remainingDays = daysInMonth[i] - d;
        }
        else
        {
            remainingDays = remainingDays + daysInMonth[i];
        }
    }

    // 결과 출력
    printf("%d일 남음\n", remainingDays + 1);

    return 0;
}
