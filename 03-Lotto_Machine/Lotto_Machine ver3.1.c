#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 상단고정 cls와 같이사용
void view() {
    printf("===================================================\n");
    printf("\n");
    printf("              로또 당첨 시뮬레이터\n");
    printf("\n");
    printf("===================================================\n");
    printf("\n");
}

// 연출로직
void print() {
    view();
    printf("\n");

    Sleep(1000);
    printf("### 당첨 번호를 생성합니다.\n");
    printf("### 잠시만 기다려주세요...\n");
    Sleep(3000);
    system("cls");
    view();
    printf("\n");
    Sleep(1000);

    for (int i = 0; i < 3; i++) {
        printf("                    LOADING");
        for (int j = 0; j < 3; j++) {
            printf(".");
            Sleep(1100);
        }
        system("cls");
        view();
        printf("\n");
    }

    Sleep(1000);
    printf("                    S"); Sleep(250);
    printf("U"); Sleep(250);
    printf("C"); Sleep(250);
    printf("C"); Sleep(250);
    printf("E"); Sleep(250);
    printf("S"); Sleep(250);
    printf("S"); Sleep(250);
    Sleep(2000);
    system("cls");
    view();
    printf("\n");
    Sleep(1000);
}


void logic(char choice) {
    // 당첨번호 생성 및 정렬 로직
    int x[6];
    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        int number;
        do {
            number = 0;
            x[i] = rand() % 45 + 1;
            for (int j = 0; j < i; j++) {
                if (x[i] == x[j]) {
                    number = 1;
                    break;
                }
            }
        } while (number);
    }

    // 정렬 로직
    for (int i = 0; i < 5; i++) {
        int min_index = i;
        for (int j = i + 1; j < 6; j++) {
            if (x[j] < x[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = x[i];
            x[i] = x[min_index];
            x[min_index] = temp;
        }
    }

    printf("              번호가 생성되었습니다.\n\n");

    // 추첨로직
    int user[6];

    if (choice == 'y' || choice == 'Y') {
        system("cls");
        view();
        printf("로또 번호를 직접 맞춰봅니다!\n");
        printf("예상 번호를 입력해주세요! 1 ~ 45\n");
        printf("    입력 예) 1 5 27 34 44 45\n");

        while (1) {
            int count = 0;
            int a1 = rand() % 8 + 1;
            int a2 = rand() % 99 + 1;
            int a3 = rand() % 999 + 1;
            int a4 = rand() % 990 + 1;

            scanf("%d %d %d %d %d %d",
                &user[0], &user[1], &user[2],
                &user[3], &user[4], &user[5]);

            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6; j++) {
                    if (user[i] == x[j]) {
                        count++;
                        break;
                    }
                }
            }

            if (count == 6) { printf("1등 당첨! 당첨금액 %d,%03d,%03d,%03d원!\n\n", a1, a3, a3, a4); }
            else if (count == 5) { printf("2등 당첨! 당첨금액 %d,%03d,%03d원!\n\n", a2, a3, a4); }
            else if (count == 4) { printf("3등 당첨! 당첨금액 %d,%03d,%03d원!\n\n", a1, a3, a4); }
            else if (count == 3) { printf("4등 당첨! 당첨금액 %d,000원!\n\n", a2); }
            else if (count == 2) { printf("5등 당첨 당첨금액 5,000원!\n\n"); }
            else { printf("꽝!\n\n"); }
        }
    }
    else if (choice == 'n' || choice == 'N') {
        system("cls");
        view();
        printf("생성된 당첨번호!\n");
        Sleep(1000);
        for (int i = 0; i < 6; i++) {
            printf("%d ", x[i]);
        }
        printf("\n");
    }
    else {
        printf("잘못된 옵션입니다. 'y' 또는 'n'을 입력해주세요!\n");
    }
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        view();
        printf("[사용법] 실행파일명.exe [옵션]\n");
        printf("y : 당첨번호 직접 맞춰보기\n");
        printf("n : 생성된 당첨번호 보기\n");
        return 0;
    }

    char user_choice = argv[1][0];

    print();
    logic(user_choice);

    return 0;
}

// 인자라는 걸 배워보았어용!
