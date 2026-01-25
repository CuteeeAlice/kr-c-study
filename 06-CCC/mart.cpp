#include "all.h"

void mart_intro() {
    system("cls");
    printf("  ---------爾嶸旎擋: %d錳---------\n", money);
    printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf(" 弛          /\\___/\\                弛\n");
    printf(" 弛         (  仄-仄 )              弛\n");
    printf(" 弛         (  u   u )              弛\n");
    printf(" 弛       鼠歙擊 餌獐梱嬴...        弛\n");
    printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}
void mart_choice() {
    mart_intro();
    printf("\n");
    printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf(" 弛     1. 掘葷婁濠        4500錳   弛\n");
    printf(" 弛     2. 闊戮犒掏        1000錳   弛\n");
    printf(" 弛     3. 殖巍и 馨檜觼   1000錳   弛\n");
    printf(" 弛     4. ァ褐и 誧       1000錳   弛\n");
    printf(" 弛     5. 竅穢и 蝶頃     1200錳   弛\n");
    printf(" 弛     6. 衛錳и 僭        800錳   弛\n");
    printf(" 弛     7. 殖殖и 蟾囀辦嶸 1300錳   弛\n");
    printf(" 弛     8. 萇萇и 鳴陝梯嫣 1500錳   弛\n");
    printf(" 弛     9. 橡贖и 霰塭賊   1400錳   弛\n");
    printf(" 弛     0. 陛寞翮晦                 弛\n");
    printf(" 弛     10. 葆お 釭陛晦             弛\n");
    printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
}
void mart_main() {
    int number;

    while (1) {
        mart_choice();
        scanf("%d", &number);

        switch (number) {

        case 1: { // 掘葷婁濠
            int price = 4500;
            int id = 1;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("掘葷婁濠蒂 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 2: { // 闊戮犒掏
            int price = 1000;
            int id = 2;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("闊戮犒掏擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 3: { // 馨檜觼
            int price = 1000;
            int id = 3;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("殖巍и 馨檜觼蒂 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 4: { // 誧
            int price = 1000;
            int id = 4;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("ァ褐и 誧擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 5: { // 蝶頃
            int price = 1200;
            int id = 5;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("竅穢и 蝶頃擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 6: { // 僭
            int price = 800;
            int id = 6;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("衛錳и 僭擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 7: { // 蟾囀辦嶸
            int price = 1300;
            int id = 7;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("蟾囀辦嶸蒂 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 8: { // 鳴陝梯嫣
            int price = 1500;
            int id = 8;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("鳴陝梯嫣擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }

        case 9: { // 霰塭賊
            int price = 1400;
            int id = 9;
            if (money < price) { printf("絲檜 睡褶п!\n"); Sleep(2000); break; }

            int x = 0;
            for (int i = 0; i < 30; i++) {
                if (item[i] == 0) {
                    item[i] = id;
                    money -= price;
                    x = 1;
                    printf("霰塭賊擊 麼棻!\n");
                    Sleep(2000);
                    break;
                }
            }
            if (x == 0) { printf("陛寞檜 粕 獺橫!\n"); Sleep(2000); }
            break;
        }
        case 0:
            backpack_main();
            break;
        case 10:
            world_main();
            break;

        default:
            printf("斜勒 嬴霜 寰 つ嬴!\n");
            Sleep(2000);
        }


        
    }

}