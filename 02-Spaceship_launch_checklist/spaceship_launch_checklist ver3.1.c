#include <stdio.h>
#include <windows.h>

int main() {
    int oil;
    int o2;
    char ready;
    char start;
    char start1;
    char start2;

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

    for (int check = 0; check < 3177; check+=11) {
        printf("0a00x%04d :: DATA STREAM SYNCHRONIZED\n", check);
        Sleep(10);
    }
    system("cls");
    printf("LOADING.");
    Sleep(1200);
    printf(".");
    Sleep(1200);
    printf(".\n");
    Sleep(1200);

    system("cls");
    printf("LOADING.");
    Sleep(1200);
    printf(".");
    Sleep(1200);
    printf(".\n");
    Sleep(1200);

    system("cls");
    printf("LOADING.");
    Sleep(1200);
    printf(".");
    Sleep(1200);
    printf(".\n\n");
    Sleep(1200);

    system("cls");
    printf("LOADING.");
    Sleep(1200);
    printf(".");
    Sleep(1200);
    printf(".\n\n");
    Sleep(1200);

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

    // do {   
    //    printf("탑승자의 준비는 완료되었습니까? (y/n) ")
    //    scanf(" %c", &ready);
    // }
    //  while( ready != 'y' && ready != 'Y' );
    // printf("우주선을 출발합니다.\n");
    // printf("잠시만 기다려주세요.\n");
    // Sleep(3000);
    // 이제 궁금한거 최초 준비완료를 묻고 scnaf로 입력을 받았는데 while이 참이라 다시 처음으로 돌아갔어
    // 그때부터 새로운 문구를 출력하고싶은데
    // 예를들면 while 조건이 참이야 그러면 잘못된 입력입니다 다시 입력해주세요. 이런 멘트를 남기고 싶어
    // 근데 do 안에 위 문구를 넣으면 최초질문떄도 출력이 되니까..


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

    printf("우주선을 진짜 정말로 출발하시겠습니까? (y/n) "); // 그만 좀 물어!
    scanf(" %c", &start2);
    Sleep(3000);

    if (start2 == 'n' || start2 == 'N') {
        printf("우주선을 출발하지 않습니다.\n");
        Sleep(2000);
        return 0;
    }
    else if (start2 == 'y' || start2 == 'Y') {
        printf("우주선이 진짜 정말로 출발합니다.\n");
        printf("잠시만 기다려주세요.\n");
        Sleep(3000);
    }
    else {
        printf("잘못된 입력입니다\n");
        return 0;
    }

    // =========== 진짜출발 ============
    // =================================
    for (int count = 10; count >= 0; count--) {
        system("cls");

        if (count == 10) {
            printf("\n\n\n");
            printf("            #####      ########      ##\n");
            printf("          #######    ##        ##    ##\n");
            printf("              ###    ##        ##    ##\n");
            printf("              ###    ##        ##    ##\n");
            printf("              ###    ##        ##    \n");
            printf("          ########      ########     ##\n");
        }
        else if (count == 9) {
            printf("\n\n\n");
            printf("          ########      ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    ##\n");
            printf("          ##########    ##\n");
            printf("                  ##    \n");
            printf("          ##########    ##\n");
        }
        else if (count == 8) {
            printf("\n\n\n");
            printf("          ########      ##\n");
            printf("        ##        ##    ##\n");
            printf("          ########      ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    \n");
            printf("          ########      ##\n");
        }
        else if (count == 7) {
            printf("\n\n\n");
            printf("        ##############  ##\n");
            printf("                  ##    ##\n");
            printf("                ##      ##\n");
            printf("              ##        ##\n");
            printf("            ##          \n");
            printf("          ##            ##\n");
        }
        else if (count == 6) {
            printf("\n\n\n");
            printf("          ########      ##\n");
            printf("        ##              ##\n");
            printf("        ##########      ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    \n");
            printf("          ########      ##\n");
        }
        else if (count == 5) {
            printf("\n\n\n");
            printf("        ##########      ##\n");
            printf("        ##              ##\n");
            printf("        ##########      ##\n");
            printf("                  ##    ##\n");
            printf("                  ##    \n");
            printf("        ##########      ##\n");
        }
        else if (count == 4) {
            printf("\n\n\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##########      ##\n");
            printf("                  ##    ##\n");
            printf("                  ##    \n");
            printf("                  ##    ##\n");
        }
        else if (count == 3) {
            printf("\n\n\n");
            printf("        ##########      ##\n");
            printf("                  ##    ##\n");
            printf("            ########    ##\n");
            printf("                  ##    ##\n");
            printf("                  ##    \n");
            printf("        ##########      ##\n");
        }
        else if (count == 2) {
            printf("\n\n\n");
            printf("        ##########      ##\n");
            printf("                  ##    ##\n");
            printf("        ##########      ##\n");
            printf("        ##              ##\n");
            printf("        ##              \n");
            printf("        ##########      ##\n");
        }
        else if (count == 1) {
            printf("\n\n\n");
            printf("              #####     ##\n");
            printf("            #######     ##\n");
            printf("                ###     ##\n");
            printf("                ###     ##\n");
            printf("                ###     \n");
            printf("            ########    ##\n");
        }
        else { // 0
            printf("\n\n\n");
            printf("          ########      ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    ##\n");
            printf("        ##        ##    \n");
            printf("          ########      ##\n");


            Sleep(1000);
            system("cls");
            printf("\n쿠오오오오오!!!\n"); // 우주선 이륙 사운드!
            Sleep(1500);
            printf("푸슈슈슈슈슛!!!\n");
            Sleep(1500);
            printf("쾅!\n"); // 우주선 바닥에 부딪히는 사운드
        }

        Sleep(3000);
    }

    for (int fail = 0; fail <= 6; fail++) {
        printf("콰아아앙퍼어어어엉!!\n"); // 우주선 폭발 사운드
        Sleep(500);
    }
    Sleep(2000);
    printf("으앙쥬금!!\n");
    Sleep(1000);

    return 0;
}

// 너무 빠른 ver3 이지만 사실 별 바뀐 내용은 없다...
// 그저 기존 밋밋한 카운트다운의 형태를 바꿔본 것 뿐.
// 더 하고싶었던 것이라면 엔진점화나 이륙, 폭발등도 입체로 구현해보고 싶었는데
// 하다보니 굳이?... 싶어서 10까지만 직접 # 을 찍어서 만들어보고 나머지는 gpt한테 맡겼다.
// 사실 입체로 만드는건 단순 노가다의 영역이기 때문에 gpt에게 맡긴 것뿐..
// 나중에 더 좋은 아이디어가 생기면 리팩토링을 하거나 아예 리라이트로 ver4를 만들어볼 계획.

// 나중에 적용할거 연습중
// 
// do 안에 조건을 또 넣을 수 있구나
//
// int attempt = 0;
// 
// do {
//    if (attempt > 0) { // attempt가 0을 초과할때
//        printf("[SYSTEM] Invalid input detected.\n"); // 위 조건이 참일때 실행
//    }
// 
//    printf("탑승자의 준비는 완료되었습니까? (y/n) ");
//    scanf(" %c", &ready);
//
//    attempt++; // 조건문이 반복될수록 attempt는 1씩 늘어나기에 다음 반복 attempt의 값은 1이 되니 if가 참이되는구나
//
//    } while (ready != 'y' && ready != 'Y');
//

