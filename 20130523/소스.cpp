// 제목: 어레이와 포인터
// 기능: 배열을 함수 안으로 넘겨보자.
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월21일
// 작성자: 도정진
// (헤더부분임)




// 배열이 아주 클 때 아주 효율적인 방법이 포인터 변수로 하는 것이다.
// 포인터를 만든 이유중에 하나이다.



#include <stdio.h>

typedef struct complex_number {
	int re;
	int im;

	// 일종의 자료형을 새로 만든다고 생각

} COMPLEX;

void addComplex(COMPLEX x, COMPLEX b) {

	COMPLEX z;

	z.re=x.re+b.re;
	z.im=x.im+b.im;
	printf("%d+%di\n",z.re,z.im);


	



}



void multComplex (COMPLEX x,COMPLEX y) {

	COMPLEX z;
	z.re=(x.re*y.re)-(x.im * y.im);
	z.im=x.re*y.im+x.im*y.re;
	printf("%d+%di\n",z.re,z.im);






}



int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	COMPLEX a,b;
	a.re=10;
	a.im=20;

	b.re=100;
	b.im=200;


	multComplex(a,b);






	printf("안녕하세요, 저는 도정진이라고 합니다. \n");
	return 0;


	// 앞으로 이 아래 부분 쓰자.
}

