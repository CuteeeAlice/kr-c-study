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
        if (count == 10) {
            printf("팟팟팟...\n"); // 엔진점화 사운드
            Sleep(1000);
            printf("엔진점화!\n");
            Sleep(2000);
            printf("카운트다운 시작!\n");
            Sleep(1000);
            printf("%d!\n", count);
        }
        else if (count > 0) { // 우주선 카운트 다운!
            printf("%d!\n", count);
            Sleep(1000);
        }
        else {
            printf("0!\n");
            Sleep(500);
            printf("쿠오오오오오!!!\n"); // 우주선 이륙 사운드!
            Sleep(1800);
            printf("푸슈슈슈슈슛!!!\n");
            Sleep(2300);
            printf("푸슈우우우우!!!\n"); // 오오오오올라간다!!!
            Sleep(1300);
            printf("팟!\n"); // 우주선 엔진꺼지는 사운드
            Sleep(3000);
            printf("쾅!\n"); // 우주선 바닥에 부딪히는 사운드
            Sleep(4000);
        }
    }

    for (int fail = 0; fail <= 6; fail++) {
        printf("콰아아앙퍼어어어엉!!\n"); // 우주선 폭발 사운드
        Sleep(600);
    }
    Sleep(2000);
    printf("으앙쥬금!!\n"); // 우주선 폭발해서 쥬금!
    Sleep(1000);

    return 0;
}


// 영어멘트는 gpt에게 전부 도움 받았고 97%는 제가 전부다 코드를 작성하고 나머지 3%..
// 세미콜론 빠진거나 오타난 것들 gpt를 통해 검수받아서 수정했어요
// 그리고 단순 반복건들은 gpt한테 넣어달라고 했는데...
// 특히 카운트다운할때 if로 하나씩 10.. 9.. 8.. 넣는거 귀찮아서
// 10이랑 0만 해놓고 가운데는 너가 채워줘 했더니 꼼수를 써버렸어욬ㅋㅋㅋ....
// 근데 또 저렇게도 할 수 있구나를 배워서 수정하지 않고 그냥 사용하기로 결정..!
