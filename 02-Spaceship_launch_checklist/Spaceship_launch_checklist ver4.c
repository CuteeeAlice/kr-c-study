#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main() {

    printf("=====================================================\n");
    printf("   CUTE ALICE SPACE INDUSTRIES - OFFICIAL TERMINAL\n");
    printf("=====================================================\n");
    Sleep(1500);

    printf("Welcome aboard, passenger.\n");
    printf("You are now entering an Aurora-class spacecraft.\n");
    printf("Operated by Aurora Space Industries.\n");
    printf("We wish you a safe, pleasant, and unforgettable journey.\n");
    printf("Preparing spacecraft systems for departure...\n\n");
    Sleep(6000);

    printf("Space ship Sequence checking....\n");
    Sleep(2000);

    for (int check = 0; check < 1797296177; check += 2327511) {
        printf("0a00x%7d :: DATA STREAM SYNCHRONIZED :: 0x0a717x0%4d :: CHECKING FOR PLEASE WAIT :: 0x01ax0%7d\n", check, check, check);
        Sleep(10);
    }
    system("cls");

    for (int i = 0; i < 3; i++) {
        printf("LOADING");
        for (int i = 0; i < 3; i++) {
            printf(".");
            Sleep(1100);
        }
        system("cls");
    }


    // 연료, 산소 계기판
    srand(time(NULL));

    char start = 0;

    while (start != 'y' && start != 'Y') {
        double oil = (rand() % 99 + 1) + (rand() % 100) / 100.0;
        double co2 = (rand() % 99 + 1) + (rand() % 100) / 100.0;
        Sleep(1000);
        printf("남은 양자연료 %.3f%%\n", oil);
        Sleep(500);
        printf("남은 양자산소 %.3f%%\n", co2);
        if (oil < 60 || co2 < 60) {
            printf("양자연료 또는 양자산소가 60%% 미만이오니 보충하시기 바랍니다.\n");
            printf("양자연료와 양자산소는 랜덤으로 보충됩니다.(enter를 눌러 보충)\n");
            getchar();
        }
        else {
            printf("모든 준비가 완료되었습니다.\n");
            Sleep(500);
            printf("출발하시겠습니까? (y/n)");
            Sleep(500);
            scanf(" %c", &start);
        }
    }

    Sleep(1000);
    printf("잠시만 기다려주세요");
    Sleep(2000);

    //for (int count = 10; count >= 0; count--) {
    //    system("cls");

    //    if (count == 10) {
    //        printf("\n\n\n");
    //        printf("            #####      ########      ##\n");
    //        printf("          #######    ##        ##    ##\n");
    //        printf("              ###    ##        ##    ##\n");
    //        printf("              ###    ##        ##    ##\n");
    //        printf("              ###    ##        ##    \n");
    //        printf("          ########      ########     ##\n");
    //    }
    //    else if (count == 9) {
    //        printf("\n\n\n");
    //        printf("          ########      ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("          ##########    ##\n");
    //        printf("                  ##    \n");
    //        printf("          ##########    ##\n");
    //    }
    //    else if (count == 8) {
    //        printf("\n\n\n");
    //        printf("          ########      ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("          ########      ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    \n");
    //        printf("          ########      ##\n");
    //    }
    //    else if (count == 7) {
    //        printf("\n\n\n");
    //        printf("        ##############  ##\n");
    //        printf("                  ##    ##\n");
    //        printf("                ##      ##\n");
    //        printf("              ##        ##\n");
    //        printf("            ##          \n");
    //        printf("          ##            ##\n");
    //    }
    //    else if (count == 6) {
    //        printf("\n\n\n");
    //        printf("          ########      ##\n");
    //        printf("        ##              ##\n");
    //        printf("        ##########      ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    \n");
    //        printf("          ########      ##\n");
    //    }
    //    else if (count == 5) {
    //        printf("\n\n\n");
    //        printf("        ##########      ##\n");
    //        printf("        ##              ##\n");
    //        printf("        ##########      ##\n");
    //        printf("                  ##    ##\n");
    //        printf("                  ##    \n");
    //        printf("        ##########      ##\n");
    //    }
    //    else if (count == 4) {
    //        printf("\n\n\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##########      ##\n");
    //        printf("                  ##    ##\n");
    //        printf("                  ##    \n");
    //        printf("                  ##    ##\n");
    //    }
    //    else if (count == 3) {
    //        printf("\n\n\n");
    //        printf("        ##########      ##\n");
    //        printf("                  ##    ##\n");
    //        printf("            ########    ##\n");
    //        printf("                  ##    ##\n");
    //        printf("                  ##    \n");
    //        printf("        ##########      ##\n");
    //    }
    //    else if (count == 2) {
    //        printf("\n\n\n");
    //        printf("        ##########      ##\n");
    //        printf("                  ##    ##\n");
    //        printf("        ##########      ##\n");
    //        printf("        ##              ##\n");
    //        printf("        ##              \n");
    //        printf("        ##########      ##\n");
    //    }
    //    else if (count == 1) {
    //        printf("\n\n\n");
    //        printf("              #####     ##\n");
    //        printf("            #######     ##\n");
    //        printf("                ###     ##\n");
    //        printf("                ###     ##\n");
    //        printf("                ###     \n");
    //        printf("            ########    ##\n");
    //    }
    //    else { // 0
    //        printf("\n\n\n");
    //        printf("          ########      ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    ##\n");
    //        printf("        ##        ##    \n");
    //        printf("          ########      ##\n");
    //    }
    //    Sleep(1000);
    //}

    // 카운트다운 연출
    for (int count = 10; count >= 0; count--) {
        system("cls");
        printf("%d", count);
        Sleep(1000);
    }
   
    for (int i = 0; i < 3; i++) {
        printf("\n쿠오오오오오!!!\n"); // 우주선 이륙 사운드!
        Sleep(1000);
        printf("푸슈슈슈슈슛!!!\n");
        Sleep(1000);
    }
    int a = rand() % 2;
    if (a == 0) {
        system("cls");
        printf("우주선이 정상출발 되었습니다.");
    }
    else {
        for (int fail = 0; fail < 1000; fail += 10) {
            printf("콰아아앙퍼어어어엉우루루루쾅쾅펑펑팡팡꽈당!!!\n"); // 우주선 폭발 사운드
            Sleep(10);
        }
        printf("으앙쥬금!");

    }

    Sleep(3000);




    return 0;
}
