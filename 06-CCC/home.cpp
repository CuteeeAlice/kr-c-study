#include "all.h"

void home_intro() {
    system("cls");
    printf("  ---------º¸À¯±Ý¾×: %d¿ø---------\n", money);
    printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
    printf(" ¦¢            /______¡¬            ¦¢\n");
    printf(" ¦¢           ¦¢ ¤±  ¤± ¦¢            ¦¢\n");
    printf(" ¦¢           ¦¢ ¤±  n  ¦¢            ¦¢\n");
    printf(" ¦¢          Æ÷±ÙÇÑ ¿ì¸® Áý!        ¦¢\n");
    printf(" ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
}

void home_choice() {

    home_intro();
    printf("\n");
    printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
    printf(" ¦¢        1. ÈÞ½ÄÇÏ±â              ¦¢\n");
    printf(" ¦¢        2. Ä«Æä°¡±â              ¦¢\n");
    printf(" ¦¢        3. ¿ÜÃâÇÏ±â              ¦¢\n");
    printf(" ¦¢        4. °ø¿ø°¡±â              ¦¢\n");
    printf(" ¦¢        5. ¸¶Æ®°¡±â              ¦¢\n");
    printf(" ¦¢        6. ¸¶Æ®°¡±â              ¦¢\n");
    printf(" ¦¢        7. ÀÏ³ª°¡±â              ¦¢\n");
    printf(" ¦¢        0. °¡¹æ¿­±â              ¦¢\n");
    printf(" ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n\n");
}

void rest() { // Ä§´ë µß±¼µß±¼ ¿¬Ãâ Ãß°¡¿¹Á¤

    printf("ÈÞ½ÄÁß...");
    Sleep(3000);
}

void home_main() {
    int number;

    while (1) {
        home_choice();
        printf(" ¹øÈ£¸¦ ¼±ÅÃÇØÁÖ¼¼¿ä ");
        scanf("%d", &number);
        switch (number) {

        case 1:
            rest();
            break;
        case 2:
            printf("¶Ñ¹÷¶Ñ¹÷!");
            Sleep(2000);
            cafe_main();
            break;
        case 3:
            printf("³¢ÀÌÀÍ! Äç!(¹®¿©´Ý´Â¼Ò¸®)");
            Sleep(2000);
            world_main();
            break;
        case 4:
            printf("ÅÍ¹÷ÅÍ¹÷!");
            Sleep(2000);
            park_main();
            break;
        case 5:
            printf("ºÎ¸ªºÎ¸ª!");
            Sleep(2000);
            mart_main();
            break;
        case 6:
            printf("ºÎ¸ªºÎ¸ª!");
            Sleep(2000);
            bank_main();
            break;
        case 7:
            work_main();
            break;
        case 0:
            backpack_main();
            break;
        default:
            printf("±×°Ç ¾ÆÁ÷ ÇÒ ¼ö ¾ø¾î!\n");
            Sleep(2000);

        }

    }

}