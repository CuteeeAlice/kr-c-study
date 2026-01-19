#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* ===== 전역 상태 ===== */
int money = 5000;   // 시작 자본
int power = 0;      // 사장님 강화 수치
int life = 100; // 사장님 체력, 커피마시기, 휴식하면 최대 100까지 채워지고 일하고오기는 체력 50소모

void intro() {
    system("cls");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │            /\\_____/\\            │\n");
    printf(" │           (  o w o  )           │\n");
    printf(" │           (  u   u  )           │\n");
    printf(" │  귀여움 +%d의 야옹이 카페다냥!   │\n",power);
    printf(" │ 보유 야옹코인%5d원 | 체력 %d │\n", money, life );
    printf(" └─────────────────────────────────┘\n");
}

/* ===== 춤 ===== */
void dance1() {
    printf(" │           (  > w <  )           │\n");
    printf(" │            )  ~    (~           │\n");
}
void dance2() {
    printf(" │           (  > w <  )           │\n");
    printf(" │           ~)    ~  (            │\n");
}
void dance() {
    for (int i = 0; i < 4; i++) {
        intro(); dance1(); Sleep(500);
        intro(); dance2(); Sleep(500);
    }
}

/* ===== 설거지 ===== */
void work() {
    int work_money = 0;
    int j = rand() % 7;   // 0 ~ 9
    for (int i = 0; i < 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │     설거지 중... 철컥철컥       │\n");
        printf(" │           ( - w - )             │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(500);
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │     설거지 중... 철컥철컥       │\n");
        printf(" │            ( - w - )            │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(500);
    }
    if (j == 6) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │ 헉! 바닥에 떨어진 야옹코인이다! │\n");
        printf(" │    몰래 챙겨야지! >_<           │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(2000);
        work_money += rand() % 801 + 1200;
        money += work_money;
        work_money = 0;
    }


    work_money += rand() % 501 + 500;
    money += work_money;
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ 설거지 완료!! +%d야옹코인 >_<!!│\n", work_money);
    printf(" └─────────────────────────────────┘\n");
    work_money = 0;
    life -= 5;
    Sleep(2000);
}

/* 밖에 나가서 일하고 오기 //
void real_work() {
    int real_work_money = 0;

    for (int i = 0; i < 10; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │      밖에서 일하는 중...        │\n");
        printf(" │           ( - _ - )             │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │      밖에서 일하는 중...        │\n");
        printf(" │            ( - _ - )            │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
    }

    // 보너스 이벤트 (약 1/7 확률)
    if (rand() % 7 == 6) {
        int bonus = rand() % 10001 + 10000; // 10000 ~ 20000
        money += bonus;

        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │ 바닥에 떨어진 야옹코인을!       │\n");
        printf(" │ 발견했습니다!! >_<              │\n");
        printf(" │ +%d 야옹코인 획득!!             │\n", bonus);
        printf(" └─────────────────────────────────┘\n");
        Sleep(2000);
    }

    // 기본 보상
    real_work_money = rand() % 30001 + 20000; // 20000 ~ 50000
    money += real_work_money;

    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ 일이 끝났습니다 >_<!!           │\n");
    printf(" │ 힘들었다!! +%d야옹코인 >_<!!   │\n", real_work_money);
    printf(" └─────────────────────────────────┘\n");
    Sleep(2000);
}
*/

/* 카페 앞, 들어갈지말지 선택하는 곳
void lobby(){
// intro가 카페 내부 고정 타이틀이라면 lobby는 카페외부 고정 타이틀 연출칸은 추운느낌으로 채우려고해!
system("cls");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │        *   *  *    *       *     │\n");
    printf(" │     *       카페외부   *     *   │\n");
    printf(" │  *   *      *     *     *        │\n");
    printf(" │      (눈이 내린다.. 춥다..)  *   │\n");
    printf(" │   *    보유 야옹코인%5d원   *    │\n", money); // 아직 카페 들어오지 않았기 떄문에 귀여움수치는 없음!
    printf(" └─────────────────────────────────┘\n");
    }

voide lobby_choice(){
void lobby_choice() {
    lobby();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n"); // Box start! (Let's see the menu)
    printf(" │        1. 집에가기               │\n"); // 1. View menu (Discover yummy drinks!)
    printf(" │        2. 카페가기               │\n"); // 2. Compliment the owner (Make me purr!)
    printf(" │        3. 일하러가기             │\n");
    printf(" │        4. 휴식하기               │\n"); // 3. Pet the owner (Fluffy headpats please!)
    printf(" └─────────────────────────────────┘\n\n"); // Box end!
}

void rest(){

*/

/* ===== 가챠 ===== */
void gatcha() {
    if (money < 10000) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │     돈이 부족하다냥... T_T      │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1200);
        return;
    }

    money -= 10000;
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │     귀여워지는 중... !!         │\n");
    printf(" │           ( > _ < )             │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(1000);

    int r = rand() % 100;

    if (r < 60) {
        power += 1;
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │   강화 성공!!  +1  >_<!!        │\n");
        printf(" └─────────────────────────────────┘\n");
    }
    else if (r < 90) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │   아무 일도 안 일어났다냥...    │\n");
        printf(" │           ( - _ - )             │\n");
        printf(" └─────────────────────────────────┘\n");
    }
    else {
        power += 3;
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │   !! 대성공!!  +3  !!!          │\n");
        printf(" │          ( > O < )              │\n");
        printf(" └─────────────────────────────────┘\n");
    }
    Sleep(1500);
}


// 야옹이 카페 로비
// [Cat cafe lobby] Choose your happy activity here, nya!
void choice() {
    intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n"); // Box start! (Let's see the menu)
    printf(" │        1. 메뉴보기              │\n"); // 1. View menu (Discover yummy drinks!)
    printf(" │        2. 주문하기              │\n"); // 2. Compliment the owner (Make me purr!)
    printf(" │        3. 칭찬하기              │\n");
    printf(" │        4. 쓰다듬기              │\n"); // 3. Pet the owner (Fluffy headpats please!)
    printf(" │        5. 댄스타임              │\n"); // 4. Order Now (Get your caffeine fix!)
    printf(" │        6. 설거지하기            │\n");
    printf(" │        7. 귀여워지기            │\n");
    printf(" │        0. 카페 나가기           │\n"); // 0. Leave Cafe (See you soon, meow!)
    printf(" └─────────────────────────────────┘\n\n"); // Box end!
}

/*        else if (number == 2) menu(); // 메뉴판
        else if (number == 3) order_menu(); // 주문하기
        else if (number == 4) tiktik(); // 칭찬하기
        else if (number == 5) toktok(); // 쓰다듬기
        else if (number == 6) dance(); // 댄스
        else if (number == 7) work(); // 설거지하기
        else if (number == 8) getchar(); // 강화하기
*/

// 야옹이 카페 메뉴!
// [Cat cafe drink menu] Time to pick your favorite drink!
void menu() {
    intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │          주문할거냥?            │\n"); // Would you like to order?
    printf(" ├─────────────────────────────────┤\n");
    printf(" │     1. 아메리카노  3000원       │\n"); // Americano 3000 won (Cool and chic!)
    printf(" │     2. 카페라떼    4000원       │\n"); // Cafe Latte 4000 won (So fluffy!)
    printf(" │     3. 카페모카    5000원       │\n"); // Cafe Mocha 5000 won (Sweet chocolate!)
    printf(" ├─────────────────────────────────┤\n");
    printf(" │     0. 돌아가기                 │\n"); // Go back (Returning to lobby...)
    printf(" └─────────────────────────────────┘\n");
}


// 야옹이 카페 메뉴!
// [Cat cafe menu board] Just a pretty board for you to look at!
void menu_order() {
    intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │              메뉴판             │\n"); // [Menu board title]
    printf(" ├─────────────────────────────────┤\n");
    printf(" │        아메리카노  3000원       │\n"); // Our best bitter coffee!
    printf(" │        카페라떼    4000원       │\n"); // Warm milk inside!
    printf(" │        카페모카    5000원       │\n"); // For chocolate lovers!
    printf(" ├─────────────────────────────────┤\n");
    printf(" │            0. 돌아가기          │\n"); // Go back
    printf(" └─────────────────────────────────┘\n\n");
}


// 아메리카노 연출!
// [ Americano Animation! ] Sometimes it fails... but always ends well!
void americano() {
    int loss = rand() % 2; // 0 = 실패 (Too much water), 1 = 성공 (Perfect!)

    // 원두 가는 중!
// [ Grinding coffee beans... ]
    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │       [ 원두 가는 중... ]       │\n"); // Grinding coffee beans...
        printf(" │          /\\___/\\  (사각!)       │\n");
        if (i % 2 == 0)
            printf(" │         ( > <   ) o             │\n");
        else
            printf(" │         ( > <   )  o            │\n");
        printf(" │         (  u u  )               │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(800);
    }

    // 뜨거운 물 내리기!
// [ Pouring hot water! ]
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │    !! 뜨거운 물을 내려요 !!     │\n"); // Pouring hot water!!
    printf(" │          /\\___/\\   ♨♨♨       │\n");
    printf(" │         (  - w - )  | |         │\n");
    printf(" │         (  u   u )  |_|         │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(1500);

    // 실패했을 경우 연출
// [ Oops! Too much water... ]
    if (loss == 0) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │  * 물을 너무 많이 넣었어ㅜㅜ *  │\n"); // Too much water...
        printf(" │              (    )             │\n");
        printf(" │              |____|             │\n");
        printf(" │     밍밍해... ㅠㅠ              │\n"); // It tastes weak...
        printf(" │ * 미안해 다시 만들어줄게! *     │\n"); // Sorry! I'll make it again!
        printf(" └─────────────────────────────────┘\n");
        Sleep(2500);

        // 다시 만드는 중!
// [ Making it again... ]
        for (int i = 0; i < 2; i++) {
            intro();
            printf(" ┌─────────────────────────────────┐\n");
            printf(" │     다시 만드는 중... >_<       │\n"); // Making it again...
            printf(" │          /\\___/\\                │\n");
            printf(" │         (  > w < )              │\n");
            printf(" │         (  u   u )              │\n");
            printf(" └─────────────────────────────────┘\n");
            Sleep(1000);
        }
    }

    // 최종 완성!
// [ Finally... Americano complete! ]
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │    * 아메리카노 완성! >_< *     │\n"); // Americano complete!
    printf(" │              (    )             │\n");
    printf(" │              |____|             │\n");
    printf(" │      우욱.. 써..                │\n"); // Ugh... so bitter...
    printf(" └─────────────────────────────────┘\n");
    life += 10;
    Sleep(3000);
}

// 라떼 연출! (우유 거품 만들기!)
// [ Latte Animation! (Making milk foam!) ] Sometimes the foam fails!
void latte() {
    int fail = rand() % 2; // 0 = 거품 실패, 1 = 성공

    // 우유 스팀 + 거품 만들기
// [ Steaming milk and making foam... ]
    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        if (i == 0)
            printf(" │  ~~ 원두는 이미 다 갈았다냥! ~~ │\n"); // Beans are already ground!
        else
            printf(" │    [ 우유 스팀 중... 보글보글 ] │\n"); // Steaming milk...
        printf(" │          /\\___/\\   ~~           │\n");
        if (i % 2 == 0)
            printf(" │         (  ' w ' )  ∫          │\n");
        else
            printf(" │         (  ^ w ^ )  ∫          │\n");
        printf(" │         (  u   u )  |_|         │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
    }

    // 거품 실패 연출
// [ Oops! Milk foam collapsed... ]
    if (fail == 0) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │  * 거품이 다 꺼져버렸어 ㅠㅠ *  │\n"); // The foam collapsed...
        printf(" │              (    )             │\n");
        printf(" │              |____|             │\n");
        printf(" │      밋밋한 라떼가 됐다냥...    │\n"); // Flat latte...
        printf(" │    * 다시 만들어볼게! >_< *     │\n"); // I'll make it again!
        printf(" └─────────────────────────────────┘\n");
        Sleep(2500);

        // 다시 만드는 중
// [ Making the latte again... ]
        for (int i = 0; i < 2; i++) {
            intro();
            printf(" ┌─────────────────────────────────┐\n");
            printf(" │     다시 거품 만드는 중...      │\n"); // Making foam again...
            printf(" │          /\\___/\\   ~~           │\n");
            printf(" │         (  > w < )              │\n");
            printf(" │         (  u   u )              │\n");
            printf(" └─────────────────────────────────┘\n");
            Sleep(1000);
        }
    }

    // 최종 완성
// [ Latte complete with perfect foam and art! ]
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ <3 카페라떼 완성! 아트도 완료!<3│\n"); // Latte complete with art!
    printf(" │              ( ♥  )            │\n");
    printf(" │              |____|             │\n");
    printf(" │         창밖 눈 구경 중...      │\n"); // Watching the snow outside
    printf(" └─────────────────────────────────┘\n");
    life += 20;
    Sleep(3000);
}

// 모카 연출! (초코 휘젓기!)
// [ Mocha Animation! (Stirring chocolate!) ] Sometimes it's too sweet!
void mocha() {
    int fail = rand() % 2; // 0 = 초코 과다, 1 = 적당함

    // 초코 투하!
// [ Dropping sweet chocolate! ]
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │      -- 달콤한 초코 투하! --    │\n"); // Dropping sweet chocolate!
    printf(" │          /\\___/\\                │\n");
    printf(" │         (  ㅇ-ㅇ )  ♥          │\n");
    printf(" │         (  u   u )              │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(1500);

    // 초코 섞기
// [ Stirring chocolate... ]
    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │      [ 초코 섞는 중! 휘휘~ ]    │\n"); // Stirring chocolate!
        printf(" │          /\\___/\\                │\n");
        if (i % 2 == 0)
            printf(" │         (  ㅇ-ㅇ )  /           │\n");
        else
            printf(" │         (  ㅇ-ㅇ )  \\           │\n");
        printf(" │         (  u   u ) |_|          │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
    }

    // 초코 과다 연출
// [ Oops! Too much chocolate! ]
    if (fail == 0) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │   * 초코를 너무 많이 넣었어! *  │\n"); // Too much chocolate!
        printf(" │              ( @@ )             │\n");
        printf(" │              |____|             │\n");
        printf(" │         너무 달다냥... >_<      │\n"); // Too sweet...
        printf(" │        * 다시 섞어볼게! *       │\n"); // I'll fix it!
        printf(" └─────────────────────────────────┘\n");
        Sleep(2500);

        // 다시 섞는 중
// [ Fixing the sweetness... ]
        for (int i = 0; i < 2; i++) {
            intro();
            printf(" ┌─────────────────────────────────┐\n");
            printf(" │     다시 섞는 중... 휘휘~       │\n"); // Stirring again...
            printf(" │          /\\___/\\                │\n");
            printf(" │         (  > w < )              │\n");
            printf(" │         (  u   u ) |_|          │\n");
            printf(" └─────────────────────────────────┘\n");
            Sleep(1000);
        }
    }

    // 최종 완성!
// [ Mocha complete! Perfectly balanced sweetness! ]
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ * 카페모카 완성! 당충전 완료! * │\n"); // Mocha complete! Sugar rush!
    printf(" │              ( @  )             │\n");
    printf(" │              |____|             │\n");
    printf(" │            맛있겠다!!           │\n"); // Looks delicious!!
    printf(" └─────────────────────────────────┘\n");
    life += 30;
    Sleep(3000);
}



// 메뉴선택!
// [Menu selection logic] Handling your cravings with a smile!
void order_menu() {
    int order;

    while (1) {
        menu();
        printf("\n   주문할 메뉴 번호를 입력해달라냥!\n");
        // Please enter the menu number (Don't keep me waiting!)
        scanf("%d", &order);

        if (order == 0) break;

        switch (order) {
        case 1:
            if (money < 3000) { printf("돈이 부족해!"); Sleep(1500); break; } // 돈이 모자라면 멘트 출력하고 다시 돌아가게하고싶은데!
            money -= 3000;
            americano();
            break;
        case 2:
            if (money < 4000) { printf("돈이 부족해!"); Sleep(1500); break; }
            money -= 4000;
            latte();
            break;
        case 3:
            if (money < 5000) { printf("돈이 부족해!"); Sleep(1500); break; }
            money -= 5000;
            mocha();
            break;
        default:
            printf("헉 그건 없는 메뉴다냥!! >_<!!\n");
            // That menu does not exist! (Check the board again, silly!)
            Sleep(1200);
        }
    }
}

// 사장님 칭찬해주기!
// [Compliment the cafe owner] Making the kitty owner blush!
void ment() {
    int select;

    while (1) {
        intro();
        printf("\n");
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │         사장님 반응 선택        │\n");
        printf(" ├─────────────────────────────────┤\n");
        printf(" │  1. 사장님 너무너무 이쁘세용!!  │\n");
        printf(" │  2. 사장님 너무너무 귀여워용!!  │\n");
        printf(" ├─────────────────────────────────┤\n");
        printf(" │  0. 돌아가기                    │\n");
        printf(" └─────────────────────────────────┘\n\n");

        scanf("%d", &select);
        if (select == 0) break;

        int shake = rand() % 6 + 5;

        for (int i = 0; i < shake; i++) {

            /* === 체력 부족 시 즉시 중단 === */
            if (life <= 0) {
                life = 0;
                intro();
                printf(" ┌─────────────────────────────────┐\n");
                printf(" │   사장님이 너무 지쳤다냥...    │\n");
                printf(" │   잠시 쉬어야 할 것 같다냥     │\n");
                printf(" └─────────────────────────────────┘\n");
                Sleep(2000);
                return;
            }

            system("cls");
            intro();
            printf(" ┌─────────────────────────────────┐\n");

            if (select == 1) {
                if (i % 2 == 0) {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( > _ o )  고맙다냥!!     │\n");
                }
                else {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( o _ < )  꺄아아아앙!!   │\n");
                }
            }
            else if (select == 2) {
                if (i % 2 == 0) {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( ^ o = )  부끄럽다냥!!   │\n");
                }
                else {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( = o ^ )  에헤헤헤냥!!   │\n");
                }
            }

            printf(" │       |       |                 │\n");
            printf(" └─────────────────────────────────┘\n");

            /* === 체력 소모 === */
            life -= 1;
            if (life < 0) life = 0;

            /* === 랜덤 회복 이벤트 (기존 확률 유지) === */
            int j = rand() % 10 + 1;

            if (j == 3) {
                life += 5;
                if (life > 100) life = 100;
                printf(" ┌─────────────────────────────────┐\n");
                printf(" │  * 칭찬에 힘을 얻었습니다!! *  │\n");
                printf(" │  * 체력 5 회복!!               │\n");
                printf(" └─────────────────────────────────┘\n");
            }
            else if (j == 5) {
                life += 10;
                if (life > 100) life = 100;
                printf(" ┌─────────────────────────────────┐\n");
                printf(" │  * 기분이 너무 좋아졌다냥!! *  │\n");
                printf(" │  * 체력 10 회복!!              │\n");
                printf(" └─────────────────────────────────┘\n");
            }

            Sleep(250);
        }
    }
}


// 사장님 쓰다듬어주깅!!
// [Petting the owner] Giving some love to the fluffy boss!
void toktok() {
    int count = rand() % 10 + 5;

    for (int i = 0; i < count; i++) {
        system("cls");
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        if (i % 2 == 0) {
            printf(" │        /\\___/\\                  │\n");
            printf(" │       ( - . - )   쓰담쓰담 >_<  │\n");
            printf(" │        (     )                  │\n");
        }
        else {
            printf(" │          /\\___/\\                │\n");
            printf(" │         ( ^ . ^ )  쓰담쓰담 >_< │\n");
            printf(" │          (     )                │\n");
        }
        printf(" └─────────────────────────────────┘\n");

        /* 체력 소량 회복 */
        if (life < 100) life += 1;
        if (life > 100) life = 100;

        Sleep(200);
    }

    system("cls");
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │   사장님이 골골송을 부른다냥!   │\n");
    printf(" │   체력이 조금 회복되었다냥!     │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(2000);
}


// 로직 시작!
// [Program entry point] Let the kitty magic begin!
int main() {
    srand(time(NULL));
    int number;

    for (int i = 0; i < 4; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        if (i % 2 == 0) {
            printf(" │         /\\_____/\\   반갑다냥!   │\n");
            printf(" │        (  > w <  )  어서오라냥! │\n");
            printf(" │         )       (      ♥       │\n");
        }
        else {
            printf(" │         /\\_____/\\   어서오라냥! │\n");
            printf(" │        (  ^ w ^  )    반갑다냥! │\n");
            printf(" │         )       (      ★       │\n");
        }
        printf(" └─────────────────────────────────┘\n");
        // welcome!! (Kitty's welcoming dance!)
        Sleep(800);
    }

    while (1) {
        choice();
        scanf("%d", &number);
        system("cls");
        choice(); // 선택 후 다시 메뉴 보여주기
        // [Redrawing menu] Keeping the screen pretty!

        if (number == 0) {
            printf("다음에 또 오라냥!! >_<\n");
            // Please come again next time!! (I'll wait for you!)
            Sleep(2000);
            break;
        }
        else if (number == 1) {
            menu_order();
            printf("\n      지금 주문 할거냥? (y/n)\n");
            // Would you like to order? (Answer me, meow!)
            char go;
            scanf(" %c", &go);

            if (go == 'y' || go == 'Y') {
                order_menu();
            }
        }
     //   else if (number == 3) menu(); // 메뉴판
        else if (number == 2) order_menu(); // 주문하기
        else if (number == 3) ment(); // 칭찬하기
        else if (number == 4) toktok(); // 쓰다듬기
        else if (number == 5) dance(); // 댄스
        else if (number == 6) work(); // 설거지하기
        else if (number == 7) gatcha(); // 강화하기

        else {
            printf("그건 도와줄 수 없다냥! >_<!!!\n");
            // I can't help with that! (That's not on my kitty task list!)
            Sleep(1200);
        }
    }

    return 0;
}

// 전체적인 구조는 플레이어가 카페를 기준으로 카페내부 외부로 나뉘어 활동하며 CKS세계관을 탐험하는 이야기!
// 카페(휴식처)부분만 구현했고 다음으로 구현할 내용은 카페 외부세계를 한번 구현해보려고 한다!
// 수정단계다보니 실제 변수명, 기능들과 영어주석의 의미가 다를 수 있다!
// 지금 프로젝트는 완전 초 장기 프로젝트로 조금 조금씩 추가해볼 예정이다!
