// 제목: 구조체
// 기능: 자료형 만들어 보자
// 파일이름: 소스.cpp
// 수정날짜: 2013년6월4일
// 작성자: 도정진
// (헤더부분임)




// 배열이 아주 클 때 아주 효율적인 방법이 포인터 변수로 하는 것이다.
// 포인터를 만든 이유중에 하나이다.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>





typedef struct node {
	char name[20];
	char phone[20];
	struct node *next;
	// 왜 소문자로 쓰는가. 아직 정의가 안되었다.
	// 노드의 포인터도 포함
	

} NODE;

// 구조체 : Linked List

typedef struct list {
	NODE *head;
	
} LIST;




// 노드의 갯수를 반환하는 함수


int nNode (LIST listo) {
int k=0;
	NODE *ptr = listo.head;
	// linked list가 비어 있으면 listo.head=NULL


	while (ptr !=NULL) {
        k++;
		ptr=ptr->next;
		// ptr=(*ptr).next; 
		// 위에꺼랑 같은거
		// ptr.next 가 가리키는 값은 item2 처음 구조
	}
	return k;
}



void insertNode(LIST *plisto, NODE *pNode) {
	
	// 새노드의 next를 기존 첫 노드를 가리킴
	pNode->next = plisto->head;


	// listo의 head가 새노드를 가리키도록 하자.
	plisto->head = pNode;
}






int main() {
	// 앞으로 이 윗부분은 무조껀 쓰자.


	NODE item1, item2, item3;
	LIST listo;
	listo.head = &item1;
	// 맨앞에 있는 놈만 알면 다 알 수 있다.

	strcpy(item1.name, "도정진");
	strcpy(item1.phone,  "01085264379");
	// 선언문을 이용한 초기화만 가능하다.
    // 대체하려면 strcpy(item1,name,"최성종");
	// 배열을 사용하려면 선언문에서 해야됨.



    item1.next = &item2;


	strcpy(item2.name, "박퀴푸");
	strcpy(item2.phone,  "01085264374");
	item2.next = &item3;

	strcpy(item3.name, "박퀴푸2");
	strcpy(item3.phone,  "0108526437444");
	item3.next = NULL;





	// -> 사용의 예
	// 구조체의 요소 접근 변수포인터 -> 요소이름 사용의 예
	printf("item1의 이름은 %s",item1.name);
	NODE * ppp;
	ppp = &item1;
	printf("item1의 이름은 %s\n",(*ppp).name);
	// (*변수포인터).요소

	printf("item1의 이름은 %s\n",ppp->name);
	// 변수포인터->요소




	listo.head = &item1;
	int k;
	k = nNode(listo);



	// 새로운 노드를 linked list 맨 앞에 넣기
	NODE itemnew;

	strcpy(itemnew.name, "문범우");
	
	strcpy(itemnew.phone,  "0108526431274");


	insertNode (&listo, &itemnew);


	k = nNode(listo);


	printf("갯수는 %d\n",k);

	printf("안녕하세요, 저는 도정진이라고 합니다. \n");
	
	
	
	getch();
	return 0;


	// 앞으로 이 아래 부분 쓰자.
}

