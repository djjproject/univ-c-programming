// 제목: 배열
// 기능: 배열
// 파일이름: 소스.cpp
// 수정날짜: 2013년5월14일
// 작성자: 도정진
// (헤더부분임)






#include <stdio.h>







int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.
	
	//int score[10];
	// 배열의 선언, 배열이름:score, 배열길이:10

	/*score[0] = 100;
	score[1] = 98;
	score[2] = 77;
	score[3] = 70;
    score[4] = (score[3] + score[2]) / 2;*/


	int avg,i=0,sum=0;

	int score[5] = {100,98,77,70,73};
	// 배열의 선언 및 초기화
	// 배열의 시작은 01234 이다. 그래서 5개
	// 메모리 20바이트 할당


	int arr1[] = {1,2,3,4,5,6,7,8};
	// 메모리 32바이트 할당

	int arr3[5] = {100,200};
	// 여기서 초기화는 2개만 되었다.
	// 그래도 메모리는 20바이트 할당.

	printf("the number of bytes of score is : %d\n",sizeof(score));
	printf("the number of bytes of arr1 is : %d\n",sizeof(arr1));
	printf("the number of bytes of arr3 is : %d\n",sizeof(int));
	// sizeof 는 메모리 크기이다.
	// int형의 바이트 크기는 4바이트. sizeof(int)


	//while (i<5) {
	//	sum = sum + score[i];
	//	// 배열의 인덱스로 변수를 사용할 수 있다.


	//	i++;
	//}

	//avg = sum/5;






	printf("안녕하세요, 저는 도정진이라고 합니다. \n");

	// 앞으로 이 아래 부분 쓰자.
}

