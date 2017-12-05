// 제목: 자료형 만들기
// 기능: 자료형 만들어 보자
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월28일
// 작성자: 도정진
// (헤더부분임)




// 배열이 아주 클 때 아주 효율적인 방법이 포인터 변수로 하는 것이다.
// 포인터를 만든 이유중에 하나이다.



#include <stdio.h>
#include <stdlib.h>



int *sum(int a,int b) {
	int *c;
	char *pch;
	
	c = (int*) malloc(sizeof(int));
	// 동적 메모리 할당
	// 힙 영역에 4바이트 연속적으로 확보해라
	// 메모리 차례 (프로그램, 데이터 영역, 힙 영역, 스택영역)
	// void 의 경우 모든 것이 다 된다는 의미
	// 포인터를 리턴한다 malloc 
	pch = (char*) malloc(sizeof(char));




	*c = a + b;

	return c;
}







int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	
	int x=10 , y=20, z;
	int *ptr;
	

	ptr=sum(x,y);
	
	// sum(100,200);
	// 변수의 생성과 소멸과 관련이 있다.




    // printf("hello");
	// 중간에 끼워버리면 함수는 불려질 때 메모리가 할당 되고 나중에 끝나면 없어지는데
	// 그 와중에 끼워버리니 에러가 난다.
	// 이런 문제를 해결하기 위해서 메모리 저장 공간을 정해두는 방식이 이용된다. (동적메모리할당)




	z=*ptr;


	printf("sum is %d\n",z);







	printf("안녕하세요, 저는 도정진이라고 합니다. \n");
	return 0;


	// 앞으로 이 아래 부분 쓰자.
}

