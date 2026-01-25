#include <stdlib.h>
#include <time.h>
#include "all.h"

int coffe = 0;

// 귀여운 야옹이 카페 간판!
// [Cute kitty cafe signboard] Welcome to the fluffiest cafe ever!
void intro() {
    system("cls");
    printf("  ---------보유금액: %d원---------\n", money);
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │            /\\_____/\\            │\n");
    printf(" │           (  o w o  )           │\n");
    printf(" │           (  u   u  )           │\n");
    printf(" │         야옹이 카페다냥!        │\n");
    printf(" └─────────────────────────────────┘\n");
    printf("  --------------------------------\n",money);
}

// 야옹이 카페 로비
// [Cat cafe lobby] Choose your happy activity here, nya!
void choice() {
    intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n"); // Box start! (Let's see the menu)
    printf(" │        1. 메뉴보기              │\n"); // 1. View menu (Discover yummy drinks!)
    printf(" │        2. 사장님 칭찬하기       │\n"); // 2. Compliment the owner (Make me purr!)
    printf(" │        3. 사장님 쓰다듬기       │\n"); // 3. Pet the owner (Fluffy headpats please!)
    printf(" │        4. 주문하기              │\n"); // 4. Order Now (Get your caffeine fix!)
    printf(" │        5. 설거지하기            │\n"); // 5. work
    printf(" │        6. 테이블앉기            │\n"); // 6. sit down, table chair
    printf(" │        7. 집에가기              │\n"); // 7. go to home
    printf(" │        9. 가방열기              │\n"); // 7. go to home
    printf(" │        0. 카페 나가기           │\n"); // 0. Leave Cafe (See you soon, meow!)
    printf(" └─────────────────────────────────┘\n\n"); // Box end!
}

// 야옹이 카페 메뉴!
// [Cat cafe drink menu] Time to pick your favorite drink!
void menu() {
    intro();
    printf("\n");
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │       주문할거냥?               │\n"); // Would you like to order?
    printf(" ├─────────────────────────────────┤\n");
    printf(" │    1. 아메리카노  3000원        │\n"); // Americano 3000 won (Cool and chic!)
    printf(" │    2. 카페라떼    4000원        │\n"); // Cafe Latte 4000 won (So fluffy!)
    printf(" │    3. 카페모카    5000원        │\n"); // Cafe Mocha 5000 won (Sweet chocolate!)
    printf(" ├─────────────────────────────────┤\n");
    printf(" │    0. 돌아가기                  │\n"); // Go back (Returning to lobby...)
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

void loot_money() {
    int chance_count = 0;
    for (int i = 0; i < 2; i++) {
        intro();
        int rt_money = rand() % 500 + 1000;
        int rt_money1 = rand() % 1000 + 2000;
        if (rand() % 10 == 0) {
            printf("  헉 돈주웠다!\n");
            Sleep(1500);
            money += rt_money;
            printf("  %d원을 주웠습니다!\n", rt_money);
            chance_count++;
            Sleep(1500);
        }
        if (rand() % 20 == 0) {
            printf("  바람을 타고 돈이 날라왔습니다!\n");
            Sleep(1500);
            money += rt_money1;
            printf("  바람에 날려온 %d원을 챙겼습니다!\n", rt_money1);
            chance_count++;
            Sleep(1500);           
        }
    }
    if (chance_count == 4) { printf("돈을 %d번이나 줍다니 운 미쳤다!!!\n", chance_count); Sleep(2000); }
    else if (chance_count == 3) { printf(" 와!!! 돈을 %d번이나 줍다니 복권을 사야겠는걸!?\n", chance_count); Sleep(2000); }
    else if (chance_count == 2) { printf(" 오늘 무슨 날인가? 돈을 %d번이나 줍다니..\n", chance_count); Sleep(2000); }
    else if (chance_count == 1) { printf(" 오.. 운이좋다 돈을 줍다니 >ㅂ<!! \n"); Sleep(2000); }
    else { printf("어디 돈떨어진거 없나..? 없군.. :( \n"); Sleep(2000); }

}

void work() {
    for (int i = 0; i < rand() % 5 + 1; i++) {
        intro();
        printf("  열심히 커피잔 닦는 중!\n");
            Sleep(1000);
        intro();
        printf("   열심히 커피잔 닦는 중!\n");
        Sleep(1000);
    }
    loot_money(); // 이벤트성 돈줍기
    printf("  고생했다냥!\n");
    Sleep(1000);
    money += 500;
    printf("  오늘 일당이다냥!\n");
    Sleep(2000);
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
    Sleep(3000);
}



// 메뉴선택!
// [Menu selection logic] Handling your cravings with a smile!
void order_menu() {
    int order;

    while (1) {
        menu();
        printf("\n주문할 메뉴 번호를 입력해달라냥!\n");
        // Please enter the menu number (Don't keep me waiting!)
        scanf("%d", &order);

        if (order == 0) break;

        switch (order) {
        case 1:
            if (money >= 3000) {
                money -= 3000;
                coffe += 1;
                americano();
            }
            else if (money < 3000) { intro(); printf("\n"); printf("  헉! 돈이 부족하다냥!!\n"); Sleep(2000); }
            break;
        case 2:
            if (money >= 4000) {
                money -= 4000;
                coffe += 1;
                latte();
            }
            else if (money < 4000) { intro(); printf("\n"); printf("  헉! 돈이 부족하다냥!!\n"); Sleep(2000); }
            break;
        case 3:
            if (money >= 5000) {
                money -= 5000;
                coffe += 1;
                mocha();
            }
            else if (money < 5000) { intro(); printf("\n"); printf("  헉! 돈이 부족하다냥!!\n"); Sleep(2000); }
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
        printf(" │  1. 사장님 너무너무 이쁘세용!!  │\n");    // Owner, you're so pretty!!
        printf(" │  2. 사장님 너무너무 귀여워용!!  │\n");    // Owner, you're so cute!!
        printf(" ├─────────────────────────────────┤\n");
        printf(" │  0. 돌아가기                    │\n");     // Go back
        printf(" └─────────────────────────────────┘\n\n");

        scanf("%d", &select);

        if (select == 0) break;

        int shake = rand() % 6 + 5;

        for (int i = 0; i < shake; i++) {
            system("cls");
            intro();
            printf(" ┌─────────────────────────────────┐\n");

            if (select == 1) {
                if (i % 2 == 0) {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( > _ o )  고맙다냥!!     │\n"); // thanks!
                }
                else {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( o _ < )  꺄아아아앙!!   │\n"); // kyaaaaaa!!
                }
            }
            else if (select == 2) {
                if (i % 2 == 0) {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( ^ o = )  부끄럽다냥!!   │\n"); // i'm so shy!!
                }
                else {
                    printf(" │        /\\___/\\                  │\n");
                    printf(" │       ( = o ^ )  에헤헤헤냥!!   │\n"); // ehhhhh!!
                }
            }
            printf(" │       |       |                 │\n");
            printf(" └─────────────────────────────────┘\n");

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
        Sleep(200);
    }

    system("cls");
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │   사장님이 골골송을 부른다냥!   │\n");
    printf(" │          ~ 갸르릉 갸르릉 ~      │\n");
    printf(" └─────────────────────────────────┘\n");
    // The owner is purring! (Happy kitty, happy life!)
    Sleep(2000);
}

void table() {
    int count = rand() % 10 + 5;
    if (coffe >= 1) {
        coffe -= 1;
        for (int i = 0; i < count; i++) {
            system("cls");
            intro();
            printf(" ┌─────────────────────────────────┐\n");
            if (i % 2 == 0) {
                printf(" │ *    *   /\\___/\\    *           │\n");
                printf(" │   *     ( - o - ) * 호로록   *  │\n");
                printf(" │*    *    (     )  *    *        │\n");
            }
            else {
                printf(" │  *    *  /\\___/\\  *    *     *  │\n");
                printf(" │   *     ( ^ o ^ )   호로록  *   │\n");
                printf(" │ *   *    (     )      *       * │\n");
            }
            printf(" └─────────────────────────────────┘\n");
            Sleep(800);
        }
        system("cls");
        intro();                                    //
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │     커피가 너무 맛있다아아...   │\n");
        printf(" │   눈도 너무너무 이쁘게 내리구   │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(2000);
    }
    else if (coffe == 0) {
        for (int i = 0; i < count; i++) {
            system("cls");
            intro();
            printf(" ┌─────────────────────────────────┐\n");
            if (i % 2 == 0) {
                printf(" │    *      /\\___/\\  *     *   *  │\n");
                printf(" │ *     *  ( - . - ) *   *     *  │\n");
                printf(" │    *      (     )    *   *      │\n");
            }
            else {
                printf(" │  *    *   /\\___/\\  *    *   *   │\n");
                printf(" │     *    ( ^ . ^ )  *  *    *   │\n");
                printf(" │  *    *   (     ) *    *     *  │\n");
            }
            printf(" └─────────────────────────────────┘\n");
            Sleep(800);
        }
        system("cls");
        intro();                                    //
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │     우와.. 창밖에 눈내린다..    │\n");
        printf(" │     얼른 커피 주문해야겠다..!   │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(2000);
        printf("\n      지금 주문 할거냥? (y/n)\n");
        // Would you like to order? (Answer me, meow!)
        char go;
        scanf(" %c", &go);

        if (go == 'y' || go == 'Y') {
            order_menu();
        }
    }
    
}

// 로직 시작!
// [Program entry point] Let the kitty magic begin!
int cafe_main() {
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

        switch (number) {
        case 0:
            printf("다음에 또 오라냥!! >_<\n");
            // Please come again next time!! (I'll wait for you!)
            Sleep(2000);
            home_main();
            break;
        case 1:
            menu_order();
            printf("\n      지금 주문 할거냥? (y/n)\n");
            // Would you like to order? (Answer me, meow!)
            char go;
            scanf(" %c", &go);

            if (go == 'y' || go == 'Y') {
                order_menu();
            }
            break;
        case 2:
            ment();
            break;
        case 3:
            toktok();
            break;
        case 4:
            order_menu();
            break;
        case 5:
            work();
            break;
        case 6:
            table();
            break;
        case 7:
            home_main();
            break;
        case 9:
            backpack_main();
            break;
        default:
            printf("그건 도와줄 수 없다냥! >_<!!!\n");
            // I can't help with that! (That's not on my kitty task list!)
            Sleep(1200);
            break;
        }


        //if (number == 0) {
        //    printf("다음에 또 오라냥!! >_<\n");
        //    // Please come again next time!! (I'll wait for you!)
        //    Sleep(2000);
        //    break;
        //}
        //else if (number == 1) {
        //    menu_order();
        //    printf("\n      지금 주문 할거냥? (y/n)\n");
        //    // Would you like to order? (Answer me, meow!)
        //    char go;
        //    scanf(" %c", &go);

        //    if (go == 'y' || go == 'Y') {
        //        order_menu();
        //    }
        //}
        //else if (number == 2) {
        //    ment();
        //}
        //else if (number == 3) {
        //    toktok();
        //}
        //else if (number == 4) {
        //    order_menu();
        //}
        //else {
        //    printf("그건 도와줄 수 없다냥! >_<!!!\n");
        //    // I can't help with that! (That's not on my kitty task list!)
        //    Sleep(1200);
        //}
    }

    return 0;
}