// 제목: 자료형 만들기
// 기능: 자료형 만들어 보자
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월28일
// 작성자: 도정진
// (헤더부분임)




// 배열이 아주 클 때 아주 효율적인 방법이 포인터 변수로 하는 것이다.
// 포인터를 만든 이유중에 하나이다.



#include <stdio.h>

// typedef { struct - 학생형 } }
     //  char 이름
     //  char 소속 
// }



// 학생 구조체



typedef struct student { 
	
	char *name;
	char *dept;
	int age;





} STUNDENT;
// 사용자가 만든 자료형은 항상 대문자





int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	char *s1 = "도정진";
	char *s2 = "박퀴푸";
	char *q1 = "전전컴";
	char *q2 = "기계과";



	STUNDENT a,b,c;
	a.name = s1;
	a.dept = q1;
	a.age = 18;


	b.name = s2;
	b.dept = q2;

	printf("%s is belong to %s\n",a.name,a.dept);








	printf("안녕하세요, 저는 도정진이라고 합니다. \n");
	return 0;


	// 앞으로 이 아래 부분 쓰자.
}

