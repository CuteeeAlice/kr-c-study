#include <stdio.h>
#include <Windows.h>

int main() {

  	printf("로또번호 추첨기\n");
		printf("잠시만 기다려주세요!\n");
		Sleep(3000);

	int number[6];
	int save = 0;

	for (int a = 1; a <= 45; a++) {
		printf("로또번호 추첨중...\n");
		if (a == 8) {
			printf("\n첫번째 번호 8!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
		else if (a == 17) {
			printf("\n두번째 번호 17!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
		else if (a == 19) {
			printf("\n세번째 번호 19!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
		else if (a == 20) {
			printf("\n네번째 번호 20!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
		else if (a == 37) {
			printf("\n다섯번째 번호 37!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
		else if (a == 44) {
			printf("\n여섯번째 번호 44!\n\n");
			number[save] = a;
			save++;
			Sleep(1000);
		}
	}
	printf("최종 당첨번호!!\n\n");
	Sleep(1000);
	printf("%d, %d, %d, %d, %d, %d\n\n", number[0], number[1], number[2], number[3], number[4], number[5]);
	printf("축하드립니다!!\n\n");
			return 0;
	}

// 코드를 배우다가 for문이 이해가 안가서 하나하나씩 gpt를 닥달해서 배웠다.
// 간신히 살짝 이해가 될때쯤 에..? 이걸로 로또번호추첨기도 만들어볼 수 있겠는데?? 싶어서
// 얼른 까먹기전에 후다닥 코드를 작성했다.
// 그런데 다 적고보니 마지막에 최종당첨번호를 보여주고싶었는데 for문에서 출력된 번호는 지나가면 잊혀진다고해서
// 그러면 어떻게 해야하지... 하고 gpt를 또 닥달했더니 어휴.. 하면서 알려줬다.
// 정수값이 저장될 빈 공간을 만들고 빈공간을 정수값을 기준으로 배정해줄 새로운 정수를 만든 뒤에
// 빈공간안에 정수의 의미 그대로 0번째 1번째 2번째처럼 배정시켜서 그때그때 저장할 수 있다는 걸 배웠다.
// 한 70프로정도 이해는 했는데 나중에 다시 할려고 하면 문법을 까먹을 것 같긴한데..ㅠㅠ
// 그리고 만들고 빌드 해보니 순식간에 촤아아아악 빌드되면서 추첨에 쫄깃한 맛이 없어져서 딜레이를 줄수는 없을까? 생각했는데
// time 헤더를 불러와야 되는건가..? ㅠㅠ 그럼 어려운데... 했는데 gpt가 또 어휴.. 하면서
// windows헤더에 Sleep를 쓰면 쉽게 해결이 된다고 해서 즉석에서 바로 넣어봤다.
// 근데 빌드가 되지 않길래 또 물어보니 윈도우환경에서는 sleep을 대소문자 구분을 꼭 해줘야 한다고 해서 얼른 후다닥 Sleep로 바꿨더니 잘 됐다..
// 아마 ver2는 rand 함수를 써서 진짜 추첨기를 만들어볼것같은데 아직 갈길이 멀다...
