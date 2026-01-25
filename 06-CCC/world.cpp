#include "all.h"
#include <time.h>

int money = 5000;
int item[30];
int lotto_count = 0;
int bank_money = 0;

void world_intro() {
    system("cls");
    printf("  ---------보유금액: %d원---------\n", money);
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │          /\\___/\\                │\n");
    printf(" │         (  ㅇ-ㅇ )              │\n");
    printf(" │         (  u   u )              │\n");
    printf(" │       어디를 가볼까아...        │\n");
    printf(" └─────────────────────────────────┘\n");
}

void world_choice() {

    world_intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │        1. 집에가기              │\n");
    printf(" │        2. 카페가기              │\n");
    printf(" │        3. 산책하기              │\n");
    printf(" │        4. 공원가기              │\n");
    printf(" │        5. 마트가기              │\n");
    printf(" │        6. 은행가기              │\n");
    printf(" │        7. 일나가기              │\n");
    printf(" │        0. 가방열기              │\n");
    printf(" └─────────────────────────────────┘\n\n");
}


void walk() { // 연출예정
    printf("산책중...\n");
    Sleep(3000);
    loot_money();
}

void world_main (){
    int w_number;

    while (1) {
        world_choice();

        printf("   번호를 입력하세요 ");
        scanf("%d", &w_number);

        switch (w_number) {
        case 1:
            home_main();
            break;
        case 2:
            cafe_main();
            break;
        case 3:
            walk();
            break;
        case 4:
            park_main();
            break;
        case 5:
            mart_main();
            break;
        case 6:
            bank_main();
            break;
        case 7:
            work_main();
            break;
        case 0:
            backpack_main();
            break;
        default:
            printf("거기는 어디지..?\n");
            Sleep(2000);
        }
    }
}



int main() {
    srand((unsigned)time(NULL));

    world_main();

    return 0;
}