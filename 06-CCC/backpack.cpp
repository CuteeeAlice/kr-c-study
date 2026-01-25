#include "all.h"
#include <stdlib.h>
#include <time.h>

// 가방 화면 출력
void backpack_intro() {
    system("cls");
    printf("  ---------보유금액: %d원---------\n", money);
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │            가방 안              │\n");
    printf(" └─────────────────────────────────┘\n");
}

// 가방 슬롯 표시
void backpack_choice() {
    backpack_intro();

    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");

    for (int i = 0; i < 30; i++) {
        if (item[i] != 0) {
            printf(" │  %2d번 슬롯 : %-12s │\n", i + 1, item_name[item[i]]);
        }
    }

    printf(" └─────────────────────────────────┘\n\n");
}

// 아이템 효과만 담당 (슬롯 관리 x)
void use_item(int id) {
    switch (id) {

    case 1: // 구름과자
        printf("구름과자를 먹었다!\n");
        printf("기분이 조금 좋아진다!\n");
        Sleep(1500);
        break;

    case 2: { // 즉석복권
        if (lotto_count != 0) {
            printf("이미 당첨된 복권이 있다!\n");
            printf("은행에 먼저 가야 할 것 같다.\n");
            Sleep(2000);
            break;
        }

        printf("즉석복권을 긁는다...\n");
        Sleep(1500);

        int r = rand() % 100;

        if (r == 0) {
            printf("1등 당첨!!!\n");
            lotto_count = 1;
        }
        else if (r < 3) {
            printf("2등 당첨!!\n");
            lotto_count = 2;
        }
        else if (r < 8) {
            printf("3등 당첨!\n");
            lotto_count = 3;
        }
        else if (r < 13) {
            printf("4등 당첨!\n");
            lotto_count = 4;
        }
        else if (r < 30) {
            printf("5등 당첨!\n");
            lotto_count = 5;
        }
        else {
            printf("꽝이다...\n");
        }

        Sleep(2000);
        break;
    }
    case 3: // 케이크
        printf("달콤한 케이크를 먹었다!\n");
        printf("배가 든든해졌다.\n");
        Sleep(1500);
        break;

    default:
        printf("이 아이템은 아직 사용할 수 없다.\n");
        Sleep(1500);
        break;
    }
}

// 가방 메인
void backpack_main() {
    int select;

    while (1) {
        backpack_choice();
        printf("사용할 슬롯 번호 (0은 나가기): ");
        scanf("%d", &select);

        if (select == 0) return;

        if (select < 1 || select > 30) {
            printf("잘못된 슬롯이다!\n");
            Sleep(1500);
            continue;
        }

        int index = select - 1;

        if (item[index] == 0) {
            printf("이 슬롯은 비어 있다!\n");
            Sleep(1500);
            continue;
        }

        // 아이템 사용
        use_item(item[index]);

        // 사용 후 슬롯 비우기
        item[index] = 0;
    }
}
