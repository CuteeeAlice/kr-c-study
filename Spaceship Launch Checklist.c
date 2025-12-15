#include <stdio.h>

int main() {

	int oil;
	int co2;

	char start;

	printf("현재 연료게이지는 몇퍼센트 입니까? "); // 일부로 줄바꿈 안넣었음
	scanf("%d", &oil);

	printf("우주선 내부 산소잔량은 몇퍼센트 입니까?? "); // 여기도 일부러 줄바꿈 안넣었어.
	scanf("%d", &co2);

	if (oil >= 50) { // 연료조건
		printf("현재 연료 %d%% 확인\n", oil);
		printf("연료게이지 정상\n");
	}

	else {
		printf("현재 연료 %d%% 확인\n", oil);
		printf("연료가 부족합니다. 연료잔량 50%%이상으로 보충이 필요합니다\n");
	}

	if (co2 >= 70) { // 산소조건
		printf("현재 산소량 %d%% 확인.\n", co2);
		printf("산소량 정상입니다.\n");
	}

	else {
		printf("현재 산소량 %d%% 확인.\n", co2);
		printf("산소가 부족합니다 산소량은 70%%이상 필요합니다.\n");
	}
	// 연료 50, 산소 70이상 입력되었을때 아래 함수 출력
	// 아래부터 모든준비가 완료되었는지 확인하는 함수.

	if (oil >= 50 && co2 >= 70) {
		printf("모든 준비가 완료되었습니까? y / n ");
		scanf(" %c", &start);

		if (start == 'y') {
			printf("우주선 출발까지 3, 2, 1...\n");
		}
		else {
			printf("준비완료 후 다시 시작바랍니다\n");
			printf("시스템을 종료합니다.\n");
		}
	}
	else {
		printf("모든 준비가 완료되지 않았습니다 시스템을 다시 확인해주세요.\n"); // 조건이 하나라도 충족되지 않았을때 출력.
	}
	return 0;
}
