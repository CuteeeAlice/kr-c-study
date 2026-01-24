#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

char player_name[30];              // 플레이어 이름 (Player name)
int inventory[30];                 // 인벤토리 (Inventory array)
int choice;                        // 선택 입력값 (Menu choice)
// int d_choice;                   // 기본 선택지 (Default choice)
// int it_choice;                  // 중요 선택지 (Important choice)
// int b_choice;                   // 전투 선택지 (Battle choice)
int poke[6];                       // 보유 몬스터 (Owned Pokémon, party)
int c_poke[30];                    // 보관 중 몬스터 (Stored Pokémon, PC storage)

void choice_f_vil() {              // 태초마을 선택지 출력 (First village menu)
    printf("1. 오박사 만나기\n");  // Meet Professor Oak
    printf("2. 휴식하기\n\n");     // Rest
    printf("3. 다음 마을가기\n");  // Go to next village

    printf("번호를 입력하세요. "); // Enter a number
    scanf("%d", &choice);
}

void f_vil() {                     // first_village 첫번째 마을 (First village screen)
    system("cls");
    printf("==============================\n");
    printf("          태초마을\n");     // First Village
    printf("==============================\n\n");
}

void poket_choice() {              // 스타터 포켓몬 선택지 (Starter Pokémon selection)
    printf("1. 파이리\n");          // Charmander
    printf("2. 꼬부기\n");          // Squirtle
    printf("3. 이상해씨\n\n");      // Bulbasaur
    printf("0. 나중에 고르기\n");   // Choose later
}

void rest() {                      // 휴식 기능 (Rest function)
    f_vil();
    for (int i = 0; i < 3; i++) {
        printf("휴식중...\n");      // Resting...
        Sleep(1000);
    }
}

// 오박사 변수모음 시작 (Professor Oak related functions start)
void f_doctor() {
    f_vil();
    printf("오! %s군 왔는가?\n", player_name); // Oh! You came, %s?
    Sleep(1000);
    printf("모험을 떠나려면 포켓몬이 있어야하지!\n"); // You need a Pokémon to start an adventure!
    Sleep(1000);
    printf("자 하나 골라보게나!\n"); // Choose one!
    Sleep(1000);

    poket_choice();
    scanf("%d", &choice);

    switch (choice) {
    case 0:                        // 나중에 고르기 (Choose later)
        f_vil();
        choice_f_vil();
        break;
    case 1:
        printf("오! 파이리를 골랐군.. 훌룡한 포켓몬이지\n"); // You chose Charmander!
        Sleep(1000);
        printf("자 여기 몬스터볼을 가져가게나!\n");         // Take this Poké Ball!
        Sleep(1000);
        poke[0] = 1;               // 파이리 id코드 1번 (Charmander ID = 1)
        printf("파이리를 얻었다!\n"); // Obtained Charmander!
        Sleep(1000);
        break;
    case 2:
        printf("오! 꼬부기를 골랐군.. 훌룡한 포켓몬이지\n"); // You chose Squirtle!
        Sleep(1000);
        printf("자 여기 몬스터볼을 가져가게나!\n");
        Sleep(1000);
        poke[0] = 4;               // Squirtle ID = 4
        printf("꼬부기를 얻었다!\n"); // Obtained Squirtle!
        Sleep(1000);
        break;
    case 3:
        printf("오! 이상해씨를 골랐군.. 훌룡한 포켓몬이지\n"); // You chose Bulbasaur!
        Sleep(1000);
        printf("자 여기 몬스터볼을 가져가게나!\n");
        Sleep(1000);
        poke[0] = 7;               // Bulbasaur ID = 7
        printf("이상해씨를 얻었다!\n"); // Obtained Bulbasaur!
        Sleep(1000);
        break;
    default:
        printf("그건 할 수 없어!\n"); // Invalid choice
        break;
    }
		//if (choice == 1) {
	//	printf("오! 파이리를 골랐군.. 훌룡한 포켓몬이지\n");
	//	Sleep(1000);
	//	printf("자 여기 몬스터볼을 가져가게나!\n");
	//	Sleep(1000);
	//	poke[0] = 1; // 파이리 id코드 1번
	//	printf("파이리를 얻었다!\n");
	//	Sleep(1000);
	//}
	//else if (choice == 2) {
	//	printf("오! 꼬부기를 골랐군.. 훌룡한 포켓몬이지\n");
	//	Sleep(1000);
	//	printf("자 여기 몬스터볼을 가져가게나!\n");
	//	Sleep(1000);
	//	poke[0] = 4;
	//	printf("꼬부기를 얻었다!\n");
	//	Sleep(1000);
	//}
	//else if (choice == 3) {
	//	printf("오! 이상해씨를 골랐군.. 훌룡한 포켓몬이지\n");
	//	Sleep(1000);
	//	printf("자 여기 몬스터볼을 가져가게나!\n");
	//	Sleep(1000);
	//	poke[0] = 7;
	//	printf("이상해씨를 얻었다!\n");
	//	Sleep(1000);
	//}
}

/* 나중에 사용할 예정
void doctoc_second(){
	printf("%s군! 모험은 잘 하고 있는건가?\n");
}

void doctor_third() {
	printf("%s군! 이걸 받아가게나!");
}
*/
// 오박사 변수모음 끝
}
// 오박사 변수모음 끝 (Professor Oak related functions end)

void battle() { // 배틀씬 (Battle scene)
    // 진짜 전투씬을 구현해보려고하는데
    // Trying to implement a real battle scene

    // 배틀씬에 필요한 분기들을 만들어놔야하기 떄문에 은근 복잡쓰!!
    // The battle scene requires many branches, so it's quite complex

    // 1. 스킬사용 > 1. 몸통박치기, 2.물대포
    // 1. Skill usage > 1. Tackle, 2. Water Gun

    // > 공격하면 상대 몬스터 체력소모, 공격받으면 내 몬스터 체력소모,
    // > When attacking, the enemy Pokémon loses HP; when attacked, my Pokémon loses HP

    // 2. 아이템사용 > 1. 몬스터볼, 2. 상처약 등등
    // 2. Item usage > 1. Poké Ball, 2. Potion, etc.

    // > 몬스터볼 사용시 비어있는 배열 검사 후
    // > When using a Poké Ball, check for an empty slot in the array

    // > 가장 가까이 비어있는 배열에 해당 몬스터 id로 덮어쓰기
    // > Store the captured Pokémon's ID in the nearest empty slot

    // > 상처약 사용시 poke_hp += 30; 이런식으로 연산처리.
    // > When using a potion, increase HP like: poke_hp += 30;

    // 3. 포켓몬 교환 > 1. 사용중, 2. 구구, 3. 캐터피 4. 뿔충이 등등..
    // 3. Pokémon switch > 1. Currently active, 2. Pidgey, 3. Caterpie, 4. Weedle, etc.

    // > 꼬부기가 이미 꺼내져있으니
    // > Since Squirtle is already active,

    // > 1은 사용중 id로 입력되어있는 상태,
    // > Option 1 represents the currently active Pokémon

    // > 2번 입력시 1번 배열에는 다시 꼬부기 id로 덮어쓰고
    // > If option 2 is selected, store Squirtle's ID back into slot 1

    // > 구구 배열에 사용중 id 덮어쓰기.
    // > And overwrite Pidgey's slot with the active Pokémon ID

    // 4. 도망치기(rand함수를 이용해 50%확률로 도망)
    // 4. Escape (Use rand() to escape with a 50% chance)

    // > if(rand()%1 == 0){return 0;} 이런식으로 하면 되지 않을까? 싶은데!
    // > I thought something like if(rand()%1 == 0){ return 0; } might work!
}


void v_move() {                    // village_move (Moving between villages)
    for (int i = 0; i < 4; i++) {
        printf("촤라라락..\n");    // Movement animation
        if (8 == rand() % 8 + 1) {
            printf("구구와 조우 하였습니다!\n"); // Encountered Pidgey!
            Sleep(1000);
            printf("전투에 돌입합니다!\n");      // Entering battle!
            battle();
        }
        Sleep(1500);
        system("cls");
        printf("뚜벅뚜벅..\n");    // Walking...
        if (8 == rand() % 8 + 1) {
            printf("구구와 조우 하였습니다!\n");
            Sleep(1000);
            printf("전투에 돌입합니다!\n");
            battle();
        }
        Sleep(1500);
        system("cls");
    }
}

int main() {
    srand(time(NULL));             // 몬스터 조우용 rand (Random seed for encounters)

    printf("오! 모험을 시작하려는건가?\n"); // Oh! Are you starting an adventure?
    printf("당신의 이름은?\n");             // What's your name?
    scanf("%s", player_name);      // 문자열은 그 자체로 주소 (String already is an address)

    for (int i = 0; i < 3; i++) {
        printf(".");
    }
    printf("\n");
    printf("좋아! %s군! 모험을 시작해보자고!\n", player_name); // Let's begin the adventure!
    Sleep(3000);

    while (1) {
        f_vil();
        choice_f_vil();

        switch (choice) {
        case 1:
            f_doctor();
            break;
        case 2:
            rest();
            break;
        case 3:
            if (poke[0] != 0) {
                v_move();
            } else {
                printf("포켓몬 없이 마을 밖으로 나가면 위험해!\n"); // It's dangerous to go without a Pokémon!
                Sleep(2000);
            }
            break;
        default:
            printf("그건 할 수 없어!\n"); // Invalid action
            Sleep(1500);
            break;
        }
      
      //if (choice == 1) { f_doctor(); }
			//else if (choice == 2) { rest(); }
			//else if (poke[0] != 0 && choice == 3) { v_move(); }
			//else if (poke[0] == 0 && choice == 3) { printf("포켓몬 없이 마을 밖으로 나가면 위험해!\n"); Sleep(2000); }
			//else { printf("그건 할 수 없어!\n"); Sleep(1500); }
    }
    return 0;
}


/*
pokemon id
1. 파이리
2. 리자드
3. 리자몽
4. 꼬부기
5. 어니부기
6. 거북왕
7. 이상해씨
8. 이상해풀
9. 이상해꽃
10. 구구
11. 피죤
12. 피죤투
13. 깨비참
14. 깨비드릴조
15. 캐터피
16. 단데기
17. 버터플
18. 뿔충이
19. 딱충이
20. 독침붕
21. 피카츄
22. 라이츄
23. 꼬마돌
24. 데구리
25. 딱구리
26. 롱스톤
27. 케이시
28. 윤겔라
29. 후딘
30. 야돈
31. 야도란
32. 야도킹
33. 별가사리
34. 아쿠스타
...
...

*/

// 옛날 닌텐도 게임이었던 포켓몬스터 레드버전, 그린버전, 골드버전의 로직을
// I thought it would be fun to recreate the logic of old Nintendo games
// like Pokémon Red, Green, and Gold

// c로 구현해볼 수 있을 것 같아서 아무렇게나 만들어본 코드!!
// in C, so this is a freely written experimental project!!

// 개선해야할 부분이 보이는데 어떻게 개선해야할지 아직까진 잘 모르겠다아아...ㅎㅋㅋㅋ
// I can already see parts that need improvement,
// but I’m not sure yet how to improve them haha
