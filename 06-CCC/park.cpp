#include "all.h"

void park_intro() {

    system("cls");
    printf("  ---------보유금액: %d원---------\n", money);
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │          /\\___/\\                │\n");
    printf(" │         (  > _ < )              │\n");
    printf(" │         (  b   b )              │\n");
    printf(" │      공원이다아아!!!!!!         │\n");
    printf(" └─────────────────────────────────┘\n");
}

void park_choice() {

    park_intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │        1. 집에가기              │\n");
    printf(" │        2. 카페가기              │\n");
    printf(" │        3. 휴식하기              │\n");
    printf(" │        4. 운동하기              │\n");
    printf(" │        6. 은행가기              │\n");
    printf(" │        0. 가방열기              │\n");
    printf(" └─────────────────────────────────┘\n\n");
}

void running() {
    printf("흣차흣차!(열심히 달리는중!\n");
        Sleep(3000);
        loot_money();
}

void park_main() {
    int number;
    park_choice();

    while (1) {
        park_choice();
        printf("  번호를 선택해주세요 ");
        scanf("%d", &number);
        switch (number) {

        case 1:
            home_main();
            break;
        case 2:
            cafe_main();
            break;
        case 3:
            rest();
            break;
        case 4:
            running();
            break;
        case 6:
            bank_main();
            break;
        case 0:
            backpack_main();
            break;
        default:
            printf("그건 아직 할 수 없어!\n");
            Sleep(2000);
            break;

        }

    }

}