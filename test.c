#include <stdio.h>
#include <string.h> //문자열을 다룰 수 있는 헤더파일 포함

int main(void){
    /*
    char fruit[20] = "strawberry"; //char 배열 선언과 문자열 초기화
    printf("딸기 : %s\n", fruit); //배열명으로 저장된 문자열 출력
    printf("딸기쨈 : %s %s\n", fruit, "jam"); //문자열 상수를 직접 %s로 출력


    printf("%s\n", fruit); //strawberry 출력
    strcpy(fruit, "banana"); //fruit에 banana 복사
    printf("%s\n", fruit); //banana 출력
    
    char grade;
    char name[20];
    printf("학점 입력 : "); 
    scanf("%c", &grade); //grade 변수에 학점 문자 입력
    printf("이름 입력 : "); 
    scanf("%s", name); //name 배열에 이름 문자열 입력, &을 사용하지 않음
    printf("%s의 학점은 %c입니다\n", name, grade);

    int a = 10, b = 10;
    ++a; // 변수의 값을 1만큼 증가
    --b; // 변수의 값을 1만큼 감소
    printf("a : %d\n", a);
    printf("a : %d\n", a);
    printf("b : %d\n", b); 

    int a = 10;
    double b = 3.4;
    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
    printf("char의 자료형의 크기 : %d\n", sizeof(char)); 
    

    int a = 10, b = 20;
    if (a < 0)
    {
        if (b > 0)
        {
            printf("ok");
        }
    }
    else
    {
        printf("ok");

    }
    */
   int I_load = 0,  vel = 0, R = 0, V = 0, C = 0, eta = 0, E_usable = 0, p = 0, t = 0, d = 0;
   

   printf("----------사전 선정 정보----------\n");
   printf("평균전류 I_load [A] (부하측) : ");
   scanf("%d", &I_load);
   
   printf("평균속도 vel [km/h] : ");
   scanf("%d", &vel);

   printf("예비율 R [0~1 : ");
   scanf("%d", &R);
   
   printf("공칭전압: V [V] : ");
   scanf("%d", &V);
   
   printf("용량(Capacity) C [Ah] : ");
   scanf("%d", &R);
   
   printf("시스템 효율 eta [0~1] : ");
   scanf("%d", &R);
   E_usable = V * C * eta * (1 - R);
   p = (V * I_load) / eta;
   t = E_usable / p;
   d = vel * t;
   printf("[결과]");
   printf("사용 가능 에너지 E_usable : %d Wh\n", E_usable);
   printf("런타임 t : %d (365.5 min)\n", t);
   printf("주행거리 d : %d km\n", d);

    return 0;
}
