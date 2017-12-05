//************************************************************
//제목: 대화형 주소록 프로그램
//기능: 문자열 저장 및 출력
//파일이름: contacts.cpp
//작정날짜: 2013년 06월 20일
//작성자: 도정진
//************************************************************



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct data {
	char name[50];
	char phone[50];
	struct data *next;
} DATA;

// DATA 구조체 형성 
// name, phone 은 50 크기의 데이터를 받을 수 있다.
// *next 는 Linked List 를 만들기 위한 포인터 이다.


typedef struct list {
	DATA *head;

} LIST;

// LIST 함수는 DATA 자료형의 메모리 위치를 저장한다. 
// 저장하는 곳은 head.



DATA *create(DATA *pNext) {
	DATA *item;
	item=(DATA *)malloc(sizeof(DATA));
	printf("\n");
	printf("  이름을 입력해 주세요 : ");
	scanf("%s",item->name);
	printf("   입력한 이름은 '%s' 입니다.\n",item->name);
	printf("  전화번호를 입력해 주세요 : ");
	scanf("%s",item->phone);
	printf("   입력한 전화번호는 '%s' 입니다.\n",item->phone);
	printf("  <입력한 내용이 주소록에 저장되었습니다.>\n");
	printf("\n");
	printf("\n");
	item->next=pNext;
	return item;
}

// DATA 형식이고 input 은 DATA를 가리키고 있는 메모리 주소인 pNext
// 초기에 item 의 메모리를 동적으로 할당한다.
// create 함수는 item 메모리 주소를 리턴한다.
// item->name 은 item DATA 구조체의 name 부분을 가리킴
// item->phone 은 item DATA 구조체의 phone 부분을 가리킴
// item->next 는 item DATA 구초체의 next 부분을 가리킴
// item 포인터 변수를 리턴함






int main() {

	int n=0;
	int i=0;
	char name[50];

	// 변수 n 은 사용자 메뉴를 위해 만들어짐
	// 변수 i 는 입력된 두 값이 같은지 다른지 확인하는 용도로 사용
	// char name [50] 은 name 이라는 변수를 선언하고 크기는 50이다.

	DATA *pItem;
	pItem=NULL;
	LIST listo;

	// DATA 자료형을 가리키는 포인터 변수 pItem 을 선언함
	// pItem을 초기화 함
	// LIST 자료형의 변수 listo 를 선언


	while (1) {
		printf("=================================\n");
		printf("1. 이름 및 전화번호 입력\n");
		printf("2. 찾을 이름을 입력\n");
		printf("3. 프로그램 종료\n");
		printf("원하시는 메뉴를 입력: ");
		scanf("%d", &n);
		printf("입력된 메뉴는 %d번 입니다.\n",n);
		printf("=================================\n");


		// 사용자 대화 프로그램 구성
		// scanf 사용시 어드레스를 사용해야함


		if (n == 1) {
			printf("\n");
			pItem = create(pItem);
			listo.head = pItem;
		}

		// 1번을 누르면 데이터 입력이 진행됨
		// pItem을 create(pItem) 으로 초기화, 동시에 함수를 호출
		// 함수에서는 item 이라는 메모리 주소를 리턴함
		// 그 메모리 주소를 pItem 에 저장함




		else if (n == 2) {
			printf("\n");
			DATA *ptr;
			ptr = listo.head;
			printf("  찾을 이름을 입력하세요: "); 
			scanf("%s", name); 
			printf ("    입력한 이름은 '%s' 입니다.\n",name);

			// DATA 자료형의 메모리 주소를 가리키는 ptr 변수 선언
			// ptr 을 listo.head 의 값으로 초기화
			// 이름을 name 에 저장함
		

			while (ptr != NULL) {

				i = strcmp(name, ptr->name);

				if (i == 0) {
					printf("    <'%s'의 전화번호는 '%s'입니다.>\n",name,ptr->phone);
					printf("\n");
					break;
				}

				ptr = ptr -> next;

				
			}
			if (ptr == NULL) {
				printf("    <찾고 있는 이름이 주소록에 없습니다.>\n ");
				printf("\n");
			}


			// ptr 값이 NULL 이 아닐때 까지 계속 루프를 돌림
			// 두 값이 일치하면 변수 i 가 0으로 초기화됨
			// 변수 i 의 값이 0이면 name 값과 ptr 이 가리키고 있는 구조체의 phone 부분을 출력함
			// 변수 i 값이 1 이면 다음 구조체로 넘어감
			// 계속 돌렸는데도 없다. ptr 이 NULL 일때 프린트

		}



		else if (n == 3) {
			printf("\n");
			printf("\n");
			printf("  감사합니다. \n 제작자 홈페이지 http://djj9405.blog.me/ , http://djj.iptime.org:81/ "); 
			printf("\n");
			printf("\n");
			break;
		}


		// 프로그램 종료 임으로 break 를 사용

		else {
			printf("\n");
			printf ("  사용가능한 메뉴번호를 입력하세요.\n");
			printf("\n");
			continue;
		}

		// 지정된 번호가 아닐경우 프린트
		// 루프 처음으로 감 , continue


	}
	return 0;
}














