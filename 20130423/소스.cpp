// 제목: 프로그램 짜는 법
// 기능: 팩토리얼, 함수
// 파일이름: 소스.cpp
// 수정날짜: 2013년4월23일
// 작성자: 도정진
// (헤더부분임)


// 프로젝트: 실행파일(xxx.exe)을 만들기 위해 필요한 모든 정보의 집합
// 솔루션: 여러 프로젝터의 집합
// 두개의 슬래쉬는 코멘트를 만드는 기호이다.
// 코멘트: 기계어를 생성하는 과정에서 무시하는 부분

// 컴퓨터의 구조. 메모리 시피유 메모리와 시피유는 버스로 연결
// 컴퓨터의 기능. 메모리에 데이터 쓰기/읽기, 연산, 순서제어  실제로 이 세가지 밖에 없다.


#include <stdio.h>

// 함수이름 : factorial
// 입력 : 1이상의 자연수
// 출력 : 자연수
// 함수의 기능 : 입력된 자연수의 factorial 값을 리턴한다.
int factorial (int x) {  // x의 값을 이미 선언했다.
	int fac=1,a=1;
	while(a<=x) {
		fac = fac * a;
		a++;
	}
	return fac;
}



int main() {
// 앞으로 이 윗부분은 무조껀 쓰자.
	
	int xyz = 5, a;
	a = factorial(xyz);

	printf("%d!=%d\n",xyz,a);
	printf("안녕하세요, 저는 도정진이라고 합니다. \n");

// 세미콜론은 문장의 끝을 말한다.
// 문장은 프로그램 수행의 기본단위 임.



// 앞으로 이 아래 부분 쓰자.
}

