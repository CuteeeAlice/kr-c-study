#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 귀여운 야옹이 카페 간판!
// [Cute kitty cafe signboard] Welcome to the fluffiest cafe ever!
void intro() {
    system("cls");
    // 하단 박스 가로 길이에 맞춘 가이드 라인과 정중앙 고양이!
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │            /\\_____/\\            │\n");
    printf(" │           (  o w o  )           │\n");
    printf(" │           (  u   u  )           │\n");
    printf(" │         야옹이 카페다냥!        │\n");
    printf(" └─────────────────────────────────┘\n");
    printf("  ---------===============----------\n");
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


// 아메리카노 연출! [ Americano Animation! ]
void americano() {
    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │       [ 원두 가는 중... ]       │\n"); // Grinding coffee beans...
        printf(" │          /\\___/\\  (사각!)       │\n");
        if (i % 2 == 0) {
            printf(" │         ( > <   ) o             │\n");
        }
        else {
            printf(" │         ( > <   )  o            │\n");
        }
        printf(" │         (  u u  )               │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(800);
    }

    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │    !! 뜨거운 물을 내려요 !!     │\n"); // Pouring hot water!!
    printf(" │          /\\___/\\   ♨♨♨       │\n");
    printf(" │         (  - w - )  | |         │\n");
    printf(" │         (  u   u )  |_|         │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(1500);

    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │    * 아메리카노 완성! >_< *     │\n"); // Americano Complete!
    printf(" │              (    )             │\n");
    printf(" │              |____|             │\n");
    printf(" │      우욱.. 써.. (Ugh.. bitter) │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(3000);
} // 우욱.. 써..
// Ugh... so bitter...


// 라떼 연출! (우유 거품 만들기!) [ Latte Animation! (Making milk foam!) ]
void latte() {
    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        if (i == 0) printf(" │  ~~ 원두는 이미 다 갈았다냥! ~~ │\n"); // Beans are already ground!
        else printf(" │    [ 우유 스팀 중... 보글보글 ] │\n"); // Steaming milk...
        printf(" │          /\\___/\\   ~~           │\n");
        if (i % 2 == 0) printf(" │         (  ' w ' )  ∫          │\n");
        else printf(" │         (  ^ w ^ )  ∫          │\n");
        printf(" │         (  u   u )  |_|         │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
    }

    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ <3 카페라떼 완성! 아트도 완료!<3│\n"); // Latte Complete with Art!
    printf(" │              ( ♥  )            │\n");
    printf(" │              |____|             │\n");
    printf(" │      창밖 눈 구경 중...(Snowing)│\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(3000);
} // 따뜻한 라떼 한잔들구 눈오는 날 창밖 바라보기!!
// Watching the snow outside with a warm cup of latte!!


// 모카 연출! (초코 휘젓기!) [ Mocha Animation! (Stirring chocolate!) ]
void mocha() {
    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │      -- 달콤한 초코 투하! --    │\n"); // Dropping sweet chocolate!
    printf(" │          /\\___/\\                │\n");
    printf(" │         (  ㅇ-ㅇ )  ♥          │\n");
    printf(" │         (  u   u )              │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(1500);

    for (int i = 0; i <= 3; i++) {
        intro();
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │      [ 초코 섞는 중! 휘휘~ ]    │\n"); // Stirring chocolate!
        printf(" │          /\\___/\\                │\n");
        if (i % 2 == 0) printf(" │         (  ㅇ-ㅇ )  /           │\n");
        else printf(" │         (  ㅇ-ㅇ )  \\           │\n");
        printf(" │         (  u   u ) |_|          │\n");
        printf(" └─────────────────────────────────┘\n");
        Sleep(1000);
    }

    intro();
    printf(" ┌─────────────────────────────────┐\n");
    printf(" │ * 카페모카 완성! 당충전 완료! * │\n"); // Mocha Complete! Sugar rush!
    printf(" │              ( @  )             │\n");
    printf(" │              |____|             │\n");
    printf(" │        맛있겠다!! (Yummy!!)     │\n");
    printf(" └─────────────────────────────────┘\n");
    Sleep(3000);
} // 맛있겠다!!
// Looks delicious!!


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
        printf(" ┌─────────────────────────────────┐\n");
        printf(" │         사장님 반응 선택        │\n");
        printf(" ├─────────────────────────────────┤\n");
        printf(" │  1. 사장님 너무너무 이쁘세용!!  │\n");    // Owner, you're so pretty!!
        printf(" │  2. 사장님 너무너무 귀여워용!!  │\n"); // Owner, you're so cute!!
        printf(" ├─────────────────────────────────┤\n");
        printf(" │  0. 돌아가기                    │\n");     // Go back
        printf(" └─────────────────────────────────┘\n\n");

        scanf("%d", &select);

        if (select == 0) break;

        int shake = rand() % 6 + 5;

        for (int i = 0; i < shake; i++) {
            system("cls");
            intro(); // 간판을 유지하면서 박스 연출!
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
    printf(" │  사장님이 골골송을 부른다냥!    │\n");
    printf(" │         ~ 갸르릉 갸르릉 ~       │\n");
    printf(" └─────────────────────────────────┘\n");
    // The owner is purring! (Happy kitty, happy life!)
    Sleep(2000);
}

// 로직 시작!
// [Program entry point] Let the kitty magic begin!
int main() {
    srand(time(NULL));
    int number;

    intro();
    printf("\n  ---------- 어서오라냥!! ---------- \n"); // welcome!! (Kitty's welcoming dance!)
    Sleep(3000);

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

// 새로운 코드를 만들어 볼까~ 하고 만들다보니 또 카페를 만들어보게되었어요...!
// 전체적 로직설계와 문법구조, 연출부분을 만들고, GPT를 통해 다듬고,
// 다시 또 개선하다가 막히거나 의도와 다르게 나오는 부분은 GPT를 통해 다시 또 다듬고...
// 그렇게 전체적으로 완성하는데 4시간?? 쯤 걸린 코드!!!
// 이제는 코드가 완벽히나 잘은 아니더라도 읽히기는 한다는게 너무너무 신기해여..ㅠㅠㅠㅠㅠ
// 코드 문법은 GPT를 통해서 다듬었구 연출부분은 다 만들고나서 GEMINI를 통해서 귀엽게 다듬었어요!!
// 배열과 구조체를 사용하지 않은 이유는 manu[2]가 뭐였더라? 하구 다시 찾아서 봐야하기도 하고
// 배열에 저장할만한게 그렇게 많지 않으니 귀찮아두 하나하나 수정하자! 하고 배열을 안썻구
// 구조체는 menu.coffe[moca] 이런식으로 타이핑하는게 귀찮아서 그냥 안썻어요...ㅠ
// 나중에 구조가 커지고 하면 아~ 구조체 안쓰니까 너무 불편하다.. 라고 생각될때쯤에나 쓸꺼같아요!

// While thinking about what to create next, I ended up making a cafe again...!
// I designed the overall logic and animations myself, then refined them with GPT.
// Whenever I got stuck, I kept polishing it with GPT until it felt just right!
// It took me about 4 hours in total to finish this whole project!!!
// It's so amazing that I can actually read and understand the code now.. T_T
// GPT helped me with the syntax, and I used Gemini to make the animations extra cute!!
// I skipped arrays because I didn't want to keep checking what "menu[2]" was.
// Since there wasn't much data, I preferred editing each one manually!
// I didn't use structs because typing "menu.coffee[mocha]" felt like too much work... T_T
// I'll probably start using them when I finally feel, "Oh, it's so inconvenient without them!"
