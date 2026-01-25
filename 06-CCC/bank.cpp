#include "all.h"

void bank_intro() {
	system("cls");
	printf("  ---------보유금액: %d원---------\n", money);
	printf("  ---------은행잔액: %d원---------\n", bank_money);
	printf(" ┌─────────────────────────────────┐\n");
	printf(" │        /\\_____/\\                │\n");
	printf(" │       (  -  _  - )              │\n");
	printf(" │       (   u   u   )             │\n");
	printf(" │     오늘도 안전한 은행입니다    │\n");
	printf(" └─────────────────────────────────┘\n");
}

void bank_lotto() {
	system("cls");
	bank_intro();
	if (lotto_count == 0) { printf("무슨일이시죠?\n"); }
	else if (lotto_count == 1) { printf("세상에.. 1등 축하드려요!\n"); Sleep(1000); printf("당첨금은 1억원입니다!\n"); Sleep(1000); printf("세금 15%% 제외 8500만원 입금해드릴게요!\n"); Sleep(2000); money += 100000000 - 15000000; lotto_count = 0; }
	else if (lotto_count == 2) { printf("세상에.. 2등 축하드려요!\n"); Sleep(1000); printf("당첨금은 1천만원입니다!\n"); Sleep(1000); printf("세금 15%% 제외 850만원 입금해드릴게요!\n"); Sleep(2000); money += 10000000 - 1500000; lotto_count = 0; }
	else if (lotto_count == 3) { printf("세상에.. 3등 축하드려요!\n"); Sleep(1000); printf("당첨금은 1백만원입니다!\n"); Sleep(1000); printf("세금 15%% 제외 85만원 입금해드릴게요!\n"); Sleep(2000); money += 1000000 - 150000; lotto_count = 0; }
	else if (lotto_count == 4) { printf("세상에.. 4등 축하드려요!\n"); Sleep(1000); printf("당첨금은 5만원입니다!\n"); Sleep(1000); printf("소액 당첨금은 세금 면제되어 5만원 입금해드릴게요!\n"); Sleep(2000); money += 50000; lotto_count = 0; }
	else if (lotto_count == 5) { printf("세상에.. 5등 축하드려요!\n"); Sleep(1000); printf("당첨금은 5천원입니다!\n"); Sleep(1000); printf("소액 당첨금은 세금 면제되어 5천원 입금해드릴게요!\n"); Sleep(2000); money += 5000; lotto_count = 0;	}
}

void bank_choice() {
	bank_intro();
	printf("\n");
	printf(" ┌─────────────────────────────────┐\n");
	printf(" │        1. 저금하기              │\n");
	printf(" │        2. 출금하기              │\n");
	printf(" │        7. 복권당첨금 수령       │\n");
	printf(" │        8. 밖으로 나가기         │\n");
	printf(" │        9. 집에가기              │\n");
	printf(" │        0. 가방열기              │\n");
	printf(" └─────────────────────────────────┘\n\n");
}


 void bank_main() {
        int number;

        while (1) {
            bank_choice();          // 메뉴 출력
            scanf("%d", &number);   // 선택 입력

            switch (number) {

            case 1: {
                int deposit;
                printf("입금하실 금액을 입력하세요.\n");
                scanf("%d", &deposit);
                if (deposit > money) {
                    printf("가지고 계신 돈이 부족합니다.\n");
                    Sleep(2000);
                }
                else {
                    bank_money += deposit;
                    money -= deposit;
                }
                break;
            }

            case 2: {
                int withdrawal;
                printf("출금하실 금액을 입력하세요.\n");
                scanf("%d", &withdrawal);
                if (withdrawal > bank_money) {
                    printf("은행 잔액이 부족합니다.\n");
                    Sleep(2000);
                }
                else {
                    bank_money -= withdrawal;
                    money += withdrawal;
                }
                break;
            }

            case 7:
                bank_lotto();
                break;
            case 8:
                world_main();
                break;
            case 9:
                home_main();
                break;
            case 0:
                backpack_main();
                break;

            default:
                printf("서비스 준비중입니다.\n");
                Sleep(2000);
                break;
            }
        }
    }
