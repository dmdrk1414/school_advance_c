// 컴퓨터 90000 9900000
// 마우스 10000 2200000
// 모니터 70000 8000000
// 프린트 50000 7500000
// 키보드 30000 5500000
// 1
// 모니터

// ##출력 예시 1
// 모니터 70000 8000000

// ##입력 예시 2(5개의 상품명, 가격, 매출액 입력; 2 상품판매 내역 출력 선택)
// 가방 10000 2500000
// 의자 30000 4500000
// 책상 50000 9500000
// 탁자 40000 5500000
// 신발 20000 3500000
// 2

// ##출력 예시 2
// 가방 10000 2500000
// 의자 30000 4500000
// 책상 50000 9500000
// 탁자 40000 5500000
// 신발 20000 3500000
// 매출액 총계:25500000

#include <stdio.h>
#include <string.h>
#define NUMBER 5
struct product
{
    char brand[20];
    int cost;
    int selling;
};
void search_brand(struct product a[], int n)
{
    char s_name[20];
    scanf("%s", s_name);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s_name, a[i].brand) == 0)
            printf("%s %d %d\n", a[i].brand, a[i].cost, a[i].selling);
    }
}
void print_arr(struct product arr[], int arr_len)
{
    int t_selling = 0;
    for (int i = 0; i < arr_len; i++)
    {
        t_selling = t_selling + arr[i].selling;
        printf("%s %d %d\n", arr[i].brand, arr[i].cost, arr[i].selling);
    }
    printf("매출액 총계: %d\n", t_selling);
    // printf("\n");
}
int main(void)
{ //
    int i, s_type;
    struct product pro[5];

    for (i = 0; i < NUMBER; i++)
    {
        scanf("%s", pro[i].brand);
        scanf("%d", &pro[i].cost);
        scanf("%d", &pro[i].selling);
    }
    scanf("%d", &s_type);

    if (s_type == 1)
        search_brand(pro, NUMBER);
    else if (s_type == 2)
        print_arr(pro, NUMBER);
    else
        printf("번호를 잘못 선택했습니다.\n");

    return 0;
}