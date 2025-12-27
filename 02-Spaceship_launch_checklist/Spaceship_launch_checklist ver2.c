#include <stdio.h>
#include <windows.h>

int main() {
    int oil;
    int o2;
    char ready;
    char start;
    char start1;

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
    Sleep(4000);

    for (int check = 0; check < 317; check++) {
        printf("0a00x%04d :: DATA STREAM SYNCHRONIZED\n", check);
        Sleep(10);
    }
    printf("LOADING");
    Sleep(800);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);


    printf("DONE\n\n");
    Sleep(2000);

    printf("모든 시스템 정상작동 확인완료\n\n");
    Sleep(1000);

    printf("마지막으로 탑승자 확인 후 우주선 출발합니다.\n\n");
    Sleep(1000);

    printf("계기판에 표시된 기름게이지를 입력해주세요 ");
    scanf("%d", &oil);
    Sleep(2000);
    printf("%d%%. 확인되었습니다.\n\n", oil);
    Sleep(1500);

    printf("계기판에 표시된 산소게이지를 입력해주세요 ");
    scanf("%d", &o2);
    Sleep(2000);
    printf("%d%%. 확인되었습니다.\n\n", o2);
    Sleep(2000);

    if (oil <= 60 && o2 <= 60) {
        printf("기름 또는 산소를 확인 후 시스템 재시작바랍니다.\n");
        return 0;
    }
    else if (oil >= 61 && o2 >= 61) {
        printf("기름게이지 %d%%, 산소게이지 %d%% 확인완료\n\n", oil, o2);
    }
    else {
        printf("알 수 없는 입력입니다.\n");
        return 0;
    }

    Sleep(1000);

    printf("탑승자의 준비는 완료되었습니까? (y/n) ");
    scanf(" %c", &ready);
    Sleep(3000);

    if (ready == 'n' || ready == 'N') {
        printf("준비완료 후 시스템 재시작 부탁드립니다.\n");
        return 0;
    }
    else if (ready == 'y' || ready == 'Y') {
        printf("모든 준비가 확인 되었습니다\n\n");
        Sleep(1000);
    }
    else {
        printf("알 수 없는 입력입니다\n");
        return 0;
    }

    printf("우주선을 출발하시겠습니까? (y/n) ");
    scanf(" %c", &start);
    Sleep(3000);

    if (start == 'n' || start == 'N') {
        printf("우주선을 출발하지 않습니다.\n");
        Sleep(2000);
        return 0;
    }
    else if (start == 'y' || start == 'Y') {
        printf("우주선을 출발합니다.\n");
        printf("잠시만 기다려주세요.\n");
        Sleep(3000);
    }
    else {
        printf("잘못된 입력입니다\n");
        return 0;
    }

    printf("우주선을 진짜로 출발하시겠습니까? (y/n) ");
    scanf(" %c", &start1);
    Sleep(3000);

    if (start1 == 'n' || start1 == 'N') {
        printf("우주선을 출발하지 않습니다.\n");
        Sleep(2000);
        return 0;
    }
    else if (start1 == 'y' || start1 == 'Y') {
        printf("우주선이 진짜로 출발합니다.\n");
        printf("잠시만 기다려주세요.\n");
        Sleep(3000);
    }
    else {
        printf("잘못된 입력입니다\n");
        return 0;
    }

    for (int count = 10; count >= 0; count--) {
        if (count == 10) {
            printf("팟팟팟...\n");
            Sleep(1000);
            printf("엔진점화!\n");
            Sleep(2000);
            printf("카운트다운 시작!\n");
            Sleep(1000);
            printf("%d!\n", count);
        }
        else if (count > 0) {
            printf("%d!\n", count);
            Sleep(1000);
        }
        else {
            printf("0!\n");
            Sleep(500);
            printf("쿠오오오오오!!!\n");
            Sleep(1800);
            printf("푸슈슈슈슈슛!!!\n");
            Sleep(2300);
            printf("푸슈우우우우!!!\n");
            Sleep(1300);
            printf("팟!\n");
            Sleep(3000);
            printf("쾅!\n");
            Sleep(4000);
        }
    }

    for (int fail = 0; fail <= 6; fail++) {
        printf("콰아아앙퍼어어어엉!!\n");
        Sleep(600);
    }
    Sleep(2000);
    printf("으앙쥬금!!\n");
    Sleep(1000);

    return 0;
}
