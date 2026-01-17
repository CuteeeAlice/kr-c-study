#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*
    Console-based lottery winning simulator.
    This program focuses on separating presentation (UI/animation)
    from core logic for learning purposes.
*/

void view() {
    // 상단고정 cls와 같이사용
    // Draws a fixed header UI (used after clearing the screen)
    printf("===================================================\n");
    printf("\n");
    printf("              로또 당첨 시뮬레이터\n"); // "Lotto Winning Simulator"
    printf("\n");
    printf("===================================================\n");
    printf("\n");
}

void print() {     // 연출로직
    // Presentation / animation sequence before main logic

    view();
    printf("\n");

    Sleep(1000);
    printf("### 당첨 번호를 생성합니다.\n");      // "Generating winning numbers."
    printf("### 잠시만 기다려주세요...\n");        // "Please wait a moment..."
    Sleep(3000);

    system("cls");
    view();
    printf("\n");
    Sleep(1000);

    // Loading animation
    for (int i = 0; i < 3; i++) {
        printf("                    LOADING");
        for (int i = 0; i < 3; i++) {
            printf(".");
            Sleep(1100);
        }
        system("cls");
        view();
        printf("\n");
    }

    // Success text animation
    Sleep(1000);
    printf("                    S");
    Sleep(250);
    printf("U");
    Sleep(250);
    printf("C");
    Sleep(250);
    printf("C");
    Sleep(250);
    printf("E");
    Sleep(250);
    printf("S");
    Sleep(250);
    printf("S"); // "SUCCESS"

    Sleep(2000);
    system("cls");
    view();
    printf("\n");
    Sleep(1000);
}

void logic() {

    // 당첨번호 생성 및 정렬 로직
    // Generate and sort winning lottery numbers

    int x[6];
    srand(time(NULL));

    // Generate 6 unique random numbers (1 ~ 45)
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

    // Sort numbers in ascending order
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

    printf("             번호가 생성되었습니다.\n\n");
    // "Winning numbers have been generated."

    // 추첨로직
    // User interaction and result evaluation logic

    int user[6];
    char choice;

    printf("선택해주세요 (y/n)\n\n");              // "Please choose (y/n)"
    printf("y = 당첨번호 직접 맞춰보기\n");        // "y = Try guessing the winning numbers"
    printf("n = 생성된 당첨번호 보기\n");          // "n = View generated winning numbers"
    scanf(" %c", &choice);
    Sleep(1000);

    if (choice == 'y' || choice == 'Y') {
        system("cls");
        view();

        printf("로또 번호를 직접 맞춰봅니다!\n");   // "Try guessing the lotto numbers!"
        printf("예상 번호를 입력해주세요! 1 ~ 45\n"); // "Enter your numbers! 1 ~ 45"
        printf("    입력 예) 1 5 27 34 44 45\n");    // "Example input: 1 5 27 34 44 45"

        while (1) { // 무한루프 프로그램은 직접종료.
            int count = 0;

            // Randomized prize amounts
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

            if (count == 6) {
                printf("1등 당첨! 당첨금액 %d,%03d,%03d,%03d원!\n\n",
                       a1, a3, a3, a4);
                // "1st Prize! Winning amount: ..."
            }
            else if (count == 5) {
                printf("2등 당첨! 당첨금액 %d,%03d,%03d원!\n\n",
                       a2, a3, a4);
                // "2nd Prize! Winning amount: ..."
            }
            else if (count == 4) {
                printf("3등 당첨! 당첨금액 %d,%03d,%03d원!\n\n",
                       a1, a3, a4);
                // "3rd Prize! Winning amount: ..."
            }
            else if (count == 3) {
                printf("4등 당첨! 당첨금액 %d,000원!\n\n", a2);
                // "4th Prize! Winning amount: ..."
            }
            else if (count == 2) {
                printf("5등 당첨 당첨금액 5,000원!\n\n");
                // "5th Prize! Winning amount: 5,000 KRW"
            }
            else {
                printf("꽝!\n\n");                  // "No prize."
            }
        }
    }
    else if (choice == 'n' || choice == 'N') {
        system("cls");
        view();

        printf("생성된 당첨번호!\n");              // "Generated winning numbers!"
        Sleep(1000);

        for (int i = 0; i < 6; i++) {
            printf("%d ", x[i]);
        }
    }
    else {
        printf("종료합니다.\n");                    // "Program terminated."
        exit(choice);
    }
}

int main() {

    print();   // Presentation sequence
    logic();   // Core lottery logic

    return 0;
}
