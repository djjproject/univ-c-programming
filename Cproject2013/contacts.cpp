//************************************************************
//����: ��ȭ�� �ּҷ� ���α׷�
//���: ���ڿ� ���� �� ���
//�����̸�: contacts.cpp
//������¥: 2013�� 06�� 20��
//�ۼ���: ������
//************************************************************



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct data {
	char name[50];
	char phone[50];
	struct data *next;
} DATA;

// DATA ����ü ���� 
// name, phone �� 50 ũ���� �����͸� ���� �� �ִ�.
// *next �� Linked List �� ����� ���� ������ �̴�.


typedef struct list {
	DATA *head;

} LIST;

// LIST �Լ��� DATA �ڷ����� �޸� ��ġ�� �����Ѵ�. 
// �����ϴ� ���� head.



DATA *create(DATA *pNext) {
	DATA *item;
	item=(DATA *)malloc(sizeof(DATA));
	printf("\n");
	printf("  �̸��� �Է��� �ּ��� : ");
	scanf("%s",item->name);
	printf("   �Է��� �̸��� '%s' �Դϴ�.\n",item->name);
	printf("  ��ȭ��ȣ�� �Է��� �ּ��� : ");
	scanf("%s",item->phone);
	printf("   �Է��� ��ȭ��ȣ�� '%s' �Դϴ�.\n",item->phone);
	printf("  <�Է��� ������ �ּҷϿ� ����Ǿ����ϴ�.>\n");
	printf("\n");
	printf("\n");
	item->next=pNext;
	return item;
}

// DATA �����̰� input �� DATA�� ����Ű�� �ִ� �޸� �ּ��� pNext
// �ʱ⿡ item �� �޸𸮸� �������� �Ҵ��Ѵ�.
// create �Լ��� item �޸� �ּҸ� �����Ѵ�.
// item->name �� item DATA ����ü�� name �κ��� ����Ŵ
// item->phone �� item DATA ����ü�� phone �κ��� ����Ŵ
// item->next �� item DATA ����ü�� next �κ��� ����Ŵ
// item ������ ������ ������






int main() {

	int n=0;
	int i=0;
	char name[50];

	// ���� n �� ����� �޴��� ���� �������
	// ���� i �� �Էµ� �� ���� ������ �ٸ��� Ȯ���ϴ� �뵵�� ���
	// char name [50] �� name �̶�� ������ �����ϰ� ũ��� 50�̴�.

	DATA *pItem;
	pItem=NULL;
	LIST listo;

	// DATA �ڷ����� ����Ű�� ������ ���� pItem �� ������
	// pItem�� �ʱ�ȭ ��
	// LIST �ڷ����� ���� listo �� ����


	while (1) {
		printf("=================================\n");
		printf("1. �̸� �� ��ȭ��ȣ �Է�\n");
		printf("2. ã�� �̸��� �Է�\n");
		printf("3. ���α׷� ����\n");
		printf("���Ͻô� �޴��� �Է�: ");
		scanf("%d", &n);
		printf("�Էµ� �޴��� %d�� �Դϴ�.\n",n);
		printf("=================================\n");


		// ����� ��ȭ ���α׷� ����
		// scanf ���� ��巹���� ����ؾ���


		if (n == 1) {
			printf("\n");
			pItem = create(pItem);
			listo.head = pItem;
		}

		// 1���� ������ ������ �Է��� �����
		// pItem�� create(pItem) ���� �ʱ�ȭ, ���ÿ� �Լ��� ȣ��
		// �Լ������� item �̶�� �޸� �ּҸ� ������
		// �� �޸� �ּҸ� pItem �� ������




		else if (n == 2) {
			printf("\n");
			DATA *ptr;
			ptr = listo.head;
			printf("  ã�� �̸��� �Է��ϼ���: "); 
			scanf("%s", name); 
			printf ("    �Է��� �̸��� '%s' �Դϴ�.\n",name);

			// DATA �ڷ����� �޸� �ּҸ� ����Ű�� ptr ���� ����
			// ptr �� listo.head �� ������ �ʱ�ȭ
			// �̸��� name �� ������
		

			while (ptr != NULL) {

				i = strcmp(name, ptr->name);

				if (i == 0) {
					printf("    <'%s'�� ��ȭ��ȣ�� '%s'�Դϴ�.>\n",name,ptr->phone);
					printf("\n");
					break;
				}

				ptr = ptr -> next;

				
			}
			if (ptr == NULL) {
				printf("    <ã�� �ִ� �̸��� �ּҷϿ� �����ϴ�.>\n ");
				printf("\n");
			}


			// ptr ���� NULL �� �ƴҶ� ���� ��� ������ ����
			// �� ���� ��ġ�ϸ� ���� i �� 0���� �ʱ�ȭ��
			// ���� i �� ���� 0�̸� name ���� ptr �� ����Ű�� �ִ� ����ü�� phone �κ��� �����
			// ���� i ���� 1 �̸� ���� ����ü�� �Ѿ
			// ��� ���ȴµ��� ����. ptr �� NULL �϶� ����Ʈ

		}



		else if (n == 3) {
			printf("\n");
			printf("\n");
			printf("  �����մϴ�. \n ������ Ȩ������ http://djj9405.blog.me/ , http://djj.iptime.org:81/ "); 
			printf("\n");
			printf("\n");
			break;
		}


		// ���α׷� ���� ������ break �� ���

		else {
			printf("\n");
			printf ("  ��밡���� �޴���ȣ�� �Է��ϼ���.\n");
			printf("\n");
			continue;
		}

		// ������ ��ȣ�� �ƴҰ�� ����Ʈ
		// ���� ó������ �� , continue


	}
	return 0;
}














