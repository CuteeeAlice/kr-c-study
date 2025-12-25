#include <stdio.h>
#include <Windows.h>

struct price {
	int am;
	int lt;
	int mc;

	int sh;
	int ic;
};

int main() {

	struct price oder = { 2000, 3000, 3500, 500, 1000 };

	int choice;
	char shchoice;
	char icchange;

	printf("고양이 카페 메뉴판 >ㅂ<\n");
	Sleep(500);
	printf("1. 아메리카노우! %d원\n", oder.am);
	Sleep(500);
	printf("2. 라떼에에에 %d원\n", oder.lt);
	Sleep(500);
	printf("3. 모카모캉! %d원\n", oder.mc);
	Sleep(500);
	printf("샷추가 %d원, 아이스변경 %d원\n\n", oder.sh, oder.ic);
	Sleep(500);

	printf("주문받겠다냥!\n");
	printf("원하는 메뉴의 번호를 입력해달라냥 >ㅂ<!!!\n");
	scanf(" %d", &choice);

	printf("\n샷추가하면 어어어엄청 쓴데..\n진짜 추가할거냥?? (y/n)\n");
	scanf(" %c", &shchoice);

	printf("\n얼음은 추가하면 차가운데\n바꾸고싶냥?? (y/n)\n");
	scanf(" %c", &icchange);

	switch (choice) {
	case 1:
		printf("\n아메리카노~~ 너 쓴거 엄청 잘먹는다냥..\n");
		break;
	case 2:
		printf("\n라떼는 말이야~~ 난 이게 젤 좋다냥!!\n");
		break;
	case 3:
		printf("\n모카아앙! 이거는 너무 달다냥...\n");
		break;
	default:
		printf("\n헉 그건 없는 메뉴다냥..\n");
		break;
	}

	if ((shchoice == 'y' || shchoice == 'Y') && (icchange == 'y' || icchange == 'Y')) {
		printf("쓴거랑 차가운거 넣어주겠다냥!!\n");
	}
	else if ((shchoice == 'n' || shchoice == 'N') && (icchange == 'y' || icchange == 'Y')) {
		printf("엄청 차가운거 넣어주겠다냥!!\n");
	}
	else if ((shchoice == 'y' || shchoice == 'Y') && (icchange == 'n' || icchange == 'N')) {
		printf("난 쓴게 싫다냥!! 그래도 주겠다냥!\n");
	}
	else if ((shchoice == 'n' || shchoice == 'N') && (icchange == 'n' || icchange == 'N')) {
		printf("기본으로 주겠다냥~\n");
	}
	else {
		printf("헉 무슨말인지 모르겠다냥...\n");
	}

	for (int a = 0; a <= 12; a++) {
		printf("쿵짝쿵짝!!\n");
		Sleep(200);
		if (a == 1) {
			printf("내 말랑젤리로 휘휘 저어서 금방 만들어주겠다냥!!\n");
			Sleep(1000);
		}
		else if (a == 4) {
			printf("보채지말라냥!\n");
			Sleep(1000);
		}
		else if (a == 8) {
			printf("쿠오오오오!!!!\n");
			Sleep(1000);
		}
		else if (a == 12) {
			printf("메뉴 나왔다냥.. 얼른 가져가라냥.. 나 힘들다냥..\n");
			printf("오늘 영업은 여기까지다냥..\n");
			Sleep(1000);
		}

	}

	printf("문 닫는거 내 맘이다냥!!!\n");
	Sleep(1000);
	printf("쾅!!!!\n");
	Sleep(3000);

	return 0;
}

// 그간 배운걸로 리팩토링이 아니라 리라이트를 해본 완전 새로운 코드!
// 진짜로 배운거 총출동했어요..
// 다 해놓고 for문을 대체 어디다 써야할까?? 한참 생각해보다가
// 결국에는 고양이주인이 커피만드는 과정을 이벤트로그처럼 출력하는데 써볼까? 하고 만들었고
// 마지막엔 프로그램이 종료됐다는걸 알리기 위해 카페 문닫는 설정까지 넣어본..ㅋㅋㅋㅋ
// 주석도 달아보고싶기는한데 코드들이 대부분 직관적이라 굳이 단다면 변수명의 의미정도인데
// 변수명도 그냥 대부분 원래 단어의 약자들로 써서 아마 보자마자 약자구나 알거같아서 굳이 안남겼고..
// 근데 좀 아쉬운건 for문을 12까지로만 했는데 한 20~30정도로 늘려서 
// 뭔가 뚝딱뚝딱하는 듯한 느낌을 더 자연스럽게 줄 수도 있었을 것 같다는 생각을 해봤어요..
