// ����: ����ü
// ���: �ڷ��� ����� ����
// �����̸�: �ҽ�.cpp
// ������¥: 2013��6��4��
// �ۼ���: ������
// (����κ���)




// �迭�� ���� Ŭ �� ���� ȿ������ ����� ������ ������ �ϴ� ���̴�.
// �����͸� ���� �����߿� �ϳ��̴�.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>





typedef struct node {
	char name[20];
	char phone[20];
	struct node *next;
	// �� �ҹ��ڷ� ���°�. ���� ���ǰ� �ȵǾ���.
	// ����� �����͵� ����
	

} NODE;

// ����ü : Linked List

typedef struct list {
	NODE *head;
	
} LIST;




// ����� ������ ��ȯ�ϴ� �Լ�


int nNode (LIST listo) {
int k=0;
	NODE *ptr = listo.head;
	// linked list�� ��� ������ listo.head=NULL


	while (ptr !=NULL) {
        k++;
		ptr=ptr->next;
		// ptr=(*ptr).next; 
		// �������� ������
		// ptr.next �� ����Ű�� ���� item2 ó�� ����
	}
	return k;
}



void insertNode(LIST *plisto, NODE *pNode) {
	
	// ������� next�� ���� ù ��带 ����Ŵ
	pNode->next = plisto->head;


	// listo�� head�� ����带 ����Ű���� ����.
	plisto->head = pNode;
}






int main() {
	// ������ �� ���κ��� ������ ����.


	NODE item1, item2, item3;
	LIST listo;
	listo.head = &item1;
	// �Ǿտ� �ִ� �� �˸� �� �� �� �ִ�.

	strcpy(item1.name, "������");
	strcpy(item1.phone,  "01085264379");
	// ������ �̿��� �ʱ�ȭ�� �����ϴ�.
    // ��ü�Ϸ��� strcpy(item1,name,"�ּ���");
	// �迭�� ����Ϸ��� ���𹮿��� �ؾߵ�.



    item1.next = &item2;


	strcpy(item2.name, "����Ǫ");
	strcpy(item2.phone,  "01085264374");
	item2.next = &item3;

	strcpy(item3.name, "����Ǫ2");
	strcpy(item3.phone,  "0108526437444");
	item3.next = NULL;





	// -> ����� ��
	// ����ü�� ��� ���� ���������� -> ����̸� ����� ��
	printf("item1�� �̸��� %s",item1.name);
	NODE * ppp;
	ppp = &item1;
	printf("item1�� �̸��� %s\n",(*ppp).name);
	// (*����������).���

	printf("item1�� �̸��� %s\n",ppp->name);
	// ����������->���




	listo.head = &item1;
	int k;
	k = nNode(listo);



	// ���ο� ��带 linked list �� �տ� �ֱ�
	NODE itemnew;

	strcpy(itemnew.name, "������");
	
	strcpy(itemnew.phone,  "0108526431274");


	insertNode (&listo, &itemnew);


	k = nNode(listo);


	printf("������ %d\n",k);

	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");
	
	
	
	getch();
	return 0;


	// ������ �� �Ʒ� �κ� ����.
}

