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





	// listo�� ��� ���� ���Ͻÿ�
	int k=0;
	NODE *ptr = listo.head;

	while (ptr !=NULL) {
		ptr=ptr->next;
		k++;
	}




	printf("������ %d",a);

	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");
	return 0;


	// ������ �� �Ʒ� �κ� ����.
}

