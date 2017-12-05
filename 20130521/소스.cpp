// 제목: 어레이와 포인터
// 기능: 배열을 함수 안으로 넘겨보자.
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월21일
// 작성자: 도정진
// (헤더부분임)




// 배열이 아주 클 때 아주 효율적인 방법이 포인터 변수로 하는 것이다.
// 포인터를 만든 이유중에 하나이다.



#include <stdio.h>


int suma(int *ptr, int len) {

	// 배열의 포인터는 꼭 길이를 필요로 한다.
	
	int sum=0, i=0;


	while(i<len) {
		sum=sum+ptr[i];
		// 포인터 변수를 배열의 이름으로 사용
		// 포인터 변수와 배열이 상호 호환 가능함. 


		i++;
	}

	return sum;


}



int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	int a[]={10,20,30,40,50};
	// 배열의 선언 및 초기화



	int *ptr, c;

	
	ptr=a;
	// ptr=&a[0] 와 같은 의미이다.
	// 배열의 이름은 첫 요소의 포인터 값과 같다.



	c=suma(ptr,5);


	
	
	printf("sum is %d\n",c);


	
	
	/*int sum=0, i=0, avg;

	while(i<5) {
		sum = sum + a[i];
		i++;
	}
	
	avg=sum;
	printf("avg=%d\n",avg);*/





	printf("안녕하세요, 저는 도정진이라고 합니다. \n");

	// 앞으로 이 아래 부분 쓰자.
}

