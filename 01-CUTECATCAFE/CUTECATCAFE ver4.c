#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 귀여운 야옹이 카페 간판!
// [Cute kitty cafe signboard] Welcome to the fluffiest cafe ever!
void intro() {
    system("cls");
    printf("    /\\___/\\    \n");
    printf("  (  o w o  )  어서와라냥!\n");
    printf("  (  u   u  )   야옹이 카페\n");
    printf("  ---------=========---------\n");
}

// 야옹이 카페 로비
// [Cat cafe lobby] Choose your happy activity here, nya!
void choice() {
    intro();
    printf("\n");
    printf(" ┌──────────────────────────┐\n"); // Box start! (Let's see the menu)
    printf(" │    1. 메뉴보기           │\n"); // 1. View menu (Discover yummy drinks!)
    printf(" │    2. 사장님 칭찬하기    │\n"); // 2. Compliment the owner (Make me purr!)
    printf(" │    3. 사장님 쓰다듬기    │\n"); // 3. Pet the owner (Fluffy headpats please!)
    printf(" │    4. 주문하기           │\n"); // 4. Order Now (Get your caffeine fix!)
    printf(" │    0. 카페 나가기        │\n"); // 0. Leave Cafe (See you soon, meow!)
    printf(" └──────────────────────────┘\n\n"); // Box end!
}

// 야옹이 카페 메뉴!
// [Cat cafe drink menu] Time to pick your favorite drink!
void menu() {
    intro();
    printf("\n");
    printf(" ┌──────────────────────────┐\n");
    printf(" │        주문할거냥?       │\n"); // Would you like to order?
    printf(" ├──────────────────────────┤\n");
    printf(" │   1. 아메리카노  3000원  │\n"); // Americano 3000 won (Cool and chic!)
    printf(" │   2. 카페라떼    4000원  │\n"); // Cafe Latte 4000 won (So fluffy!)
    printf(" │   3. 카페모카    5000원  │\n"); // Cafe Mocha 5000 won (Sweet chocolate!)
    printf(" ├──────────────────────────┤\n");
    printf(" │   0. 돌아가기            │\n"); // Go back (Returning to lobby...)
    printf(" └──────────────────────────┘\n");
}


// 야옹이 카페 메뉴!
// [Cat cafe menu board] Just a pretty board for you to look at!
void menu_order() {
    intro();
    printf("\n");
    printf(" ┌──────────────────────────┐\n");
    printf(" │          메뉴판          │\n"); // [Menu board title]
    printf(" ├──────────────────────────┤\n");
    printf(" │    아메리카노  3000원    │\n"); // Our best bitter coffee!
    printf(" │    카페라떼    4000원    │\n"); // Warm milk inside!
    printf(" │    카페모카    5000원    │\n"); // For chocolate lovers!
    printf(" ├──────────────────────────┤\n");
    printf(" │        0. 돌아가기       │\n"); // Go back
    printf(" └──────────────────────────┘\n\n");
}


// 아메리카노 연출!
// [Americano making animation] Making magic with black coffee beans!
void americano() {
    intro();
    printf("  ~~ 원두를 갈아요 ~~ \n"); // Grinding coffee beans... (Kitty paws power!)
    Sleep(700);
    printf("  사각사각... (냥냥펀치 발동!)\n"); // Grinding sound (Punch! Punch! Nya!)
    Sleep(700);
    printf("  드르르르... (기계가 신났다냥!)\n"); // Machine vibration sound (Brrrr!)
    Sleep(1000);
    printf("  !! 뜨거운 물을 내려요 !! \n"); // Pouring hot water... (Careful, it's hot!)
    Sleep(800);
    printf("  촤아아앙... (향긋한 냄새 솔솔~)\n"); // Water pouring sound (Smells like heaven!)
    Sleep(800);
    printf("\n  * 아메리카노 완성! >_< *\n");      // Americano complete! (Here is your cool drink!)
    printf("      (    )       \n");
    printf("      |____|       \n");
    Sleep(2000);
} // 우욱.. 써...
  // Ugh... bitter... (But it wakes you up!)

// 라떼 연출!
// [Latte making animation] Creating a cloud of milk for you!
void latte() {
    intro();
    printf("  ~~ 원두를 갈아요 ~~ \n"); // Grinding coffee beans...
    Sleep(700);
    printf("  사각사각... (정성 가득!)\n"); // Grinding sound (Full of kitty love!)
    Sleep(700);
    printf("  [우유 데우는 중...] (보글보글)\n"); // Heating milk... (Warm and cozy!)
    Sleep(700);
    printf("  보글보글... (몽글몽글 거품 생성!)\n"); // Bubbling sound (Look at the bubbles!)
    Sleep(700);
    printf("  -- 부어요 -- (라떼 아트 쓱싹!)\n"); // Pouring... (Making a kitty face art!)
    Sleep(800);
    printf("\n  <3 카페라떼 완성! >_< <3 \n");         // Cafe Latte complete! (Sweet and soft!)
    printf("      (    )       \n");
    printf("      |____|       \n");
    Sleep(1500);
} // 따끈한 라떼한잔 마시면서 창밖에 눈오는거 바라보기!
  // Drinking a warm latte while watching snow fall outside (So romantic, nya!)

// 모카 연출!
// [Mocha making animation] Sweet chocolate meets kitty coffee!
void mocha() {
    intro();
    printf("  -- 초코를 꺼내요 -- (달콤한 향기!)\n"); // Taking out chocolate... (Sweetest smell!)
    Sleep(700);
    printf("  달달한 초코 녹이는 중... (스르륵)\n"); // Melting sweet chocolate... (Melting my heart!)
    Sleep(700);
    printf("  휘휘휘... (고양이 꼬리로 저어준다냥!)\n"); // Stirring sound (Tail whisk power!)
    Sleep(700);
    printf("  !! 커피랑 섞어요 !! \n"); // Mixing with coffee... (Perfect match!)
    Sleep(700);
    printf("\n  * 카페모카 완성! >_< * \n");         // Cafe Mocha complete! (Sugar rush time!)
    printf("      (    )       \n");
    printf("      |____|       \n");
    Sleep(1500);
} // 맛있겠다.....
  // Looks delicious... (I want a sip too!)

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
            americano();
            break;
        case 2:
            latte();
            break;
        case 3:
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
        printf("1. 사장님 너무너무 이쁘세용!!\n");    // Owner, you're so pretty!! (Meow, really?!)
        printf("2. 사장님 너무너무 귀여워용!!\n"); // Owner, you're so cute!! (Stop it, I'm blushing!)
        printf("0. 돌아가기\n\n");                  // Go back

        scanf("%d", &select);

        if (select == 0) break;

        int shake = rand() % 6 + 5;

        for (int i = 0; i < shake; i++) {
            
                
            system("cls");

            if (select == 1) {
                printf("           /\\___/\\   \n");
                printf("          ( o ^ o )  [ > _ < 꺄아아아아아아아앙!!! 고맙다냥!!] \n"); // Kkyaaaaaaaa!! Thanks nya!! (Happy kitty!)
                printf("           |     |   \n");
            }
            else if (select == 2) {
                printf("           /\\___/\\   \n");
                printf("          ( = ^ = )  [ > _ < 꺄아아아아아아아앙!!!부끄럽다냥!!] \n"); // Kkyaaaaaaaa!! I'm so shy nya!! (Blushing kitty!)
                printf("           |     |   \n");
            }

            Sleep(200);
            system("cls");

            if (select == 1) {
                printf("           /\\___/\\   \n");
                printf("          ( ^ o ^ )  [ > _ < 꺄아아아아아아아앙!!! 고맙다냥!!] \n"); // Kkyaaaaaaaa!! Thanks nya!! (Happy kitty!)
                printf("           |     |   \n");
            }
            else if (select == 2) {
                printf("           /\\___/\\   \n");
                printf("          ( ^ = ^ )  [ > _ < 꺄아아아아아아아앙!!!부끄럽다냥!!] \n"); // Kkyaaaaaaaa!! I'm so shy nya!! (Blushing kitty!)
                printf("           |     |   \n");
            }
            Sleep(200);
        }
    }
}


// 사장님 쓰다듬어주깅!!
// [Petting the owner] Giving some love to the fluffy boss!
void toktok() {
    int count = rand() % 10 + 5;

    for (int i = 0; i < count; i++) {
        // 흔들흔들 모션연출
        // [Petting motion animation] Swaying back and forth with joy!
        system("cls");
        printf("           /\\___/\\   \n");
        printf("          ( - . - )  쓰담쓰담 >_< \n"); // Pat pat (So soft!)
        printf("           (     )   \n");
        Sleep(200);
        system("cls");
        printf("             /\\___/\\   \n");
        printf("            ( ^ . ^ )   쓰담쓰담 >_< \n"); // Pat pat (I'm in heaven!)
        printf("             (     )   \n");
        Sleep(200);
    }
    printf("\n  -- 사장님이 골골송을 부르고 있다냥! 갸르릉~ --\n");
    // The owner is purring! (Happy kitty, happy life!)
    Sleep(2000);
}

// 로직 시작!
// [Program entry point] Let the kitty magic begin!
int main() {
    srand(time(NULL));
    int number;

    intro();
    printf("\n --- 어서오라냥!! --- \n"); // welcome!! (Kitty's welcoming dance!)
    Sleep(2000);

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
        else if (number == 2) {
            ment();
        }
        else if (number == 3) {
            toktok();
        }
        else if (number == 4) {
            order_menu();
        }
        else {
            printf("그건 도와줄 수 없다냥! >_<!!!\n");
            // I can't help with that! (That's not on my kitty task list!)
            Sleep(1200);
        }
    }

    return 0;
}
