#include "all.h"

void work_intro() {
    system("cls");
    printf("  ---------보유금액: %d원---------\n", money);
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │        /\\___/\\                  │\n");
    printf(" │       (  - _ - )                │\n");
    printf(" │       (   u   u )               │\n");
    printf(" │   오늘은 어떤 일을 해볼까...    │\n");
    printf(" └─────────────────────────────────┘\n");
}

void work_choice() {
	work_intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │        1. 편의점알바            │\n"); // 걸리는시간 10초 버는돈 1만원
    printf(" │        2. 카페알바              │\n"); // 걸리는 시간 10초 버는돈 1만2천원
    printf(" │        3. 공사장알바            │\n"); // 걸리는 시간 15초 버는돈 2만원, 나중에 상태도 전역으로 추가해서 부상 디버프도 만들거야. 디버프상태일땐 일 못함!
    printf(" │        4. 위험한알바            │\n"); // 걸리는 시간 20초 버는돈 5만원, 이제 부상확률이 늘어나는 방식
    printf(" │        9. 가방열기              │\n");
    printf(" │        0. 집에가기              │\n");
    printf(" └─────────────────────────────────┘\n\n");
}

void work_main() {
    int select;

    while (1) {
        work_choice();
        scanf("%d", &select);

        switch (select) {

        case 1: { // 편의점 알바
            system("cls");
            printf("편의점 알바를 시작했다...\n");
            Sleep(1000);

            for (int i = 0; i < 10; i++) {
                printf("삑! (바코드 찍는 소리)\n");
                printf("감사합니다! 안녕히 가세요!\n");

                // if (rand() % 20 == 0) {
                //     injury+= 1;
                //     printf("부상당하셨습니다!!\n");
                //     Sleep(2000);
                //     break;
                // }

                Sleep(1000);
            }

            loot_money();
            money += 10000;
            printf("1만원을 벌었습니다!\n");
            Sleep(2000);
            break;
        }

        case 2: { // 카페 알바
            system("cls");
            printf("카페 알바를 시작했다...\n");
            Sleep(1000);

            for (int i = 0; i < 10; i++) {
                printf("주문 들어왔어요!\n");
                printf("커피를 만들고 있습니다...\n");

                // if (rand() % 25 == 0) {
                //     injury+= 1;
                //     printf("뜨거운 물에 데였습니다!!\n");
                //     Sleep(2000);
                //     break;
                // }

                Sleep(1000);
            }

            loot_money();
            money += 12000;
            printf("1만 2천원을 벌었습니다!\n");
            Sleep(2000);
            break;
        }

        case 3: { // 공사장 알바
            system("cls");
            printf("공사장 알바를 시작했다...\n");
            Sleep(1000);

            for (int i = 0; i < 15; i++) {
                printf("자재를 나르고 있습니다...\n");

                // if (rand() % 12 == 0) {
                //     injury+= 3;
                //     printf("무거운 자재에 부딪혔습니다!!\n");
                //     Sleep(2000);
                //     break;
                // }

                Sleep(1000);
            }

            loot_money();
            money += 20000;
            printf("2만원을 벌었습니다!\n");
            Sleep(2000);
            break;
        }

        case 4: { // 위험한 알바
            system("cls");
            printf("위험한 알바를 시작했다...\n");
            Sleep(1000);

            for (int i = 0; i < 20; i++) {
                printf("위험한 작업을 진행 중...\n");

                // if (rand() % 8 == 0) {
                //     injury+= 5;
                //     printf("큰 부상을 입었습니다!!\n");
                //     Sleep(2000);
                //     break;
                // }

                Sleep(1000);
            }

            loot_money();
            money += 50000;
            printf("5만원을 벌었습니다!\n");
            Sleep(2000);
            break;
        }

        case 9:
            backpack_main();
            break;

        case 0:
            return; // 집으로 돌아가기 (호출한 곳으로 복귀)

        default:
            printf("그런 일은 없다...\n");
            Sleep(1500);
            break;
        }
    }
}