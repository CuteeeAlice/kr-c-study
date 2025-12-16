#include <stdio.h>

int main() {

    int shot = 500; // 샷추가 가격!
    
    int price[4] = {
        1000, // ice 추가 가격!!
        2000, // 아메리카노 기본가격!!
        3000, // 라떼 가격!!
        4000  // 모카 가격!!
    }; // 기존 price1~4로 각각 정의 했던걸 이번에 배운걸로 업그레이드 시켜봤어요!!

    char ic[] = "ICE"; // ice약자
    char ht[] = "HOT"; // hot약자
    char am[] = "AMERICANO"; // ...
    char lt[] = "LATTE"; // ...
    char mc[] = "MOCA"; // ...
    char st[] = "SHOT"; // ...
     
    int od1; // oder1
    int od2; // oder2


    printf("귀여운 메뉴판 >OwO<\n\n"); // 기욤둥이 메뉴판
    printf("1. %s %s %d원!\n", ht, am, price[1]); // 뜨거운 아메리카노 가격
    printf("2. %s %s %d원!\n", ht, lt, price[2]); // 뜨끈한 라떼 가격
    printf("3. %s %s %d원!\n\n", ht, mc, price[3]); // 따끈한 모카 가격

    printf("4. %s는 %d원이 추가됩니다아아!!\n", ic, price[0]);
    printf("5. %s 추가는 %d원 입니다!\n\n", st, shot);

    printf("주문하실 메뉴의 코드를 입력하세요. 1 ~ 3 \n", ic);
    scanf("%d", &od1);

    printf("모든 음료는 HOT이 기본이며 ICE를 원하실 경우 4 를 입력하세요.\n");
    scanf("%d", &od2);

    
    if (od2 == 4) {
        if (od1 == 1) {
            printf("아이스 아메리카노를 곧 준비해드릴게요오 +ㅂ+/ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[0] + price[1]);
        }
        else if (od1 == 2) {
            printf("아이스 카페라떼를 준비해드릴게요오 +ㅂ+/ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[0] + price[2]);
        }
        else if (od1 == 3) {
            printf("아이스 카페모카를 준비해드릴게요오 >ㅂ</ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[0] + price[3]);
        }
        else {
            printf("헉 그건 없는메뉴에요오 T ^T \n\n");
        }
    }

    if (od2 != 4) {
        if (od1 == 1) {
            printf("따뜻한 아메리카노를 곧 준비해드릴게요오 >ㅂ</ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[1]);
        }
        else if (od1 == 2) {
            printf("따뜻한 카페라떼를 준비해드릴게요오 >ㅂ</ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[2]);
        }
        else if (od1 == 3) {
            printf("따뜻한 카페모카를 준비해드릴게요오 >ㅂ</ \n\n");
            printf("총 금액은 %d원 입니다아아 >ㅂ<\n\n", price[3]);
        }
        else {
            printf("헉 그건 없는메뉴에요오 T ^T \n\n");
        }
    }

    printf("\n\n         >OwO< 고양이 카페\n\n\n\n\n\n"); // 귀여운 고냥이 카페에용!

    return 0;
}

// 이번에 의미는 같지만 값은 다른것을 좀 더 간편하게 할 수 있는걸 배워서
