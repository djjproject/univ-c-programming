// 제목: 프로그램 짜는 법
// 기능: 소수 계산
// 파일이름: 소스.cpp
// 수정날짜: 2013년4월12일
// 작성자: 도정진
// (헤더부분임)


// 프로젝트: 실행파일(xxx.exe)을 만들기 위해 필요한 모든 정보의 집합
// 솔루션: 여러 프로젝터의 집합
// 두개의 슬래쉬는 코멘트를 만드는 기호이다.
// 코멘트: 기계어를 생성하는 과정에서 무시하는 부분

// 컴퓨터의 구조. 메모리 시피유 메모리와 시피유는 버스로 연결
// 컴퓨터의 기능. 메모리에 데이터 쓰기/읽기, 연산, 순서제어  실제로 이 세가지 밖에 없다.


#include <stdio.h>

// 함수 정의
// 함수 입력 : 정수 x
// 함수 출력 : 정수
// 함수 기능 : 1에서 정수 x 까지의 정수의 합을 출력
// 1. 함수이름을 지정한다. 
// 2. 함수의 반환형을 지정한다. 
// 3. 매개변수의 개수를 정한다. 
// 4. 각 매개변수의 자료형을 지정한다. 
// 함수 정의 = 함수선언 + 함수본체 (실행코드)




int main() {
// 앞으로 이 윗부분은 무조껀 쓰자.
	int a=2, x=80, p=1;
	while (a<x) {
		if (!(x%a)) {
			p=0;
			printf ("%d는 %d로 나누어짐\n",a,x);
			break; // 루프 밖으로 나간다.
		}
		
		
		a++;
	}
	if (p) printf("소수다.\n");
	else printf("소수가 아니다..\n");

	printf("안녕하세요, 나는 도정진이라고 합니다. \n");

// 세미콜론은 문장의 끝을 말한다.
// 문장은 프로그램 수행의 기본단위 임.



// 앞으로 이 아래 부분 쓰자.
}

