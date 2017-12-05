// 제목: 포인트 함수
// 기능: 메모리 저장.
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월9일
// 작성자: 도정진
// (헤더부분임)






#include <stdio.h>

//int sum(int *pPtr1,int *pPtr2) {
//	int c;
//	c= *pPtr1 + *pPtr2;
//
//	// *pPtr1 = 1000 이라고 하면 전체적으로 x의 값이 바뀐다.
//	// 전역 변수 사용은 자제한다.
//
//	return c;
//}

void swap (int *pPtr1, int *pPtr2) {
	int c;
	c=*pPtr1;
	*pPtr1=*pPtr2;
	*pPtr2=c;
}



int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	/*int x=10, y=20, z;
	z=sum(&x,&y);

	printf("z=%d\n",z);*/

	int x=10, y=20;
	swap(&x,&y);

	printf("x=%d,y=%d\n",x,y);


	


	printf("안녕하세요, 저는 도정진이라고 합니다. \n");

	// 앞으로 이 아래 부분 쓰자.
}

