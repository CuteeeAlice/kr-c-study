#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    int number[6];
    int age, year, hour, min;

    printf("현재는 몇년도입니까?\n");
    scanf("%d", &year);

    printf("현재는 몇시입니까?\n");
    scanf("%d", &hour);

    printf("현재는 몇분입니까?\n");
    scanf("%d", &min);

    printf("당신은 몇살입니까?\n");
    scanf("%d", &age);

    getchar();
    printf("추첨을 시작합니다. 엔터키를 누르세요\n");
    getchar();

    int rn = ((hour * min) - age) + year;
    // printf("%d\n", rn);
        srand(rn);

    Sleep(1000); 
  // =============================
  // 가장 처음 작성했던 코드...
  //  int number[6];
  //  int choice = 0;
  
  //  for (int i = 0 ; i < 6 ; i++){
  //  int code = rand() 45 + 1;
  //  number[choice] = code;
  //  printf("%d ",number[choice]);
  //  choice++;
  
  //  한 20분 생각하면서 만들었던거라 나름 잘한 것 같았는데 혹시 코드를 더 줄여볼 수 있나? 하고 GPT 한테 물어봤는데 
  //  아래 처럼 압축할 수 있는 방법을 알려줘서 배웠음! 
  //  printf("%d", number[choice] = code);로 사용하고 아래 choice++를 지울수도있고
  //  printf("%d", number[choice = rand() % 45 + 1); code 정의없이 그냥 for 바로 아래 이런식으로 할 수도 있다고 배웠음..!
  
  // ==========================
  // 
    for (int i = 0; i < 6; i++) {
        number[i] = rand() % 45 + 1;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", number[i]);
        Sleep(1000);
    }

    return 0;
}

// ver1은 연출된 프로그램이었다면 ver2는 rand 함수를 이용해 만들어낸 진짜 생성기!
// 그런데 rand를 처음 사용했을때는 중복된 숫자가 계속 나오고 매번 같은 숫자만 나와서 사실상 그것도 연출용에 가까운 프로그램 이었는데
// srand를 써줘야 중복된 숫자 없이 진짜 랜덤으로 나온다는걸 배웠음.
// 그리고 가장 보편적으로 time 헤더를 사용해서 srand 인자안에 time을 집어넣어 os의 시간을 기준으로 난수를 생성할수잇다고 했는데
// time 헤더를 아직까진 쓰고싶지 않았음!
// 그래가지구 결국 기준이될 인자하나만 있으면 되는거 아니야? 해서 rn을 만들어서 랜덤 숫자를 생성한뒤 그걸 기준으로 난수(당첨번호)를 생성하게끔 만들어봄 ㅇㅂㅇ!
