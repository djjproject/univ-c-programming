// 제목: 포인트 함수
// 기능: 메모리 훔쳐보기.
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월7일
// 작성자: 도정진
// (헤더부분임)









#include <stdio.h>


int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	int myNumber, yourNumber;

	int *pILoveRyu;
	// * 은 data of
	// 포인터 변수가 가리키는 곳의 데이터는 인티져 (메모리, 자료형)
	// 메모리 주소가 저장된다.
	// 포인터 변수에 저장된 포인터로 가면 int 형 값이 있다.

	myNumber=10;

	pILoveRyu=&myNumber;
	// &(ampersand): adress of

	*pILoveRyu=20;
	// data of pILoveRyu , 데이터가 있는 곳에 20 대입
	// 즉, myNumber=10 이라는 소리

	yourNumber=*pILoveRyu;


	
	printf("%x\n",pILoveRyu);

	printf("yourNumber=%d\n",yourNumber);

	printf("myNumeber=%d\n",myNumber);



	
	
	
	

	

	printf("안녕하세요, 저는 도정진이라고 합니다. \n");

	// 세미콜론은 문장의 끝을 말한다.
	// 문장은 프로그램 수행의 기본단위 임.



	// 앞으로 이 아래 부분 쓰자.
}




    //int *pPtr1;
	//int *pPtr2;
	//int a=10, b=20, c=20;
	//pPtr1=&a;
	//pPtr2=&b;
	//c=*pPtr1;  // c=10
	//*pPtr1=*pPtr2; // a=20
	//*pPtr2=c; // b=10

	//printf ("a=%d\n",a);
	//printf ("b=%d\n",b);