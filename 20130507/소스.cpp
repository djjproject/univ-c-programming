// ����: ����Ʈ �Լ�
// ���: �޸� ���ĺ���.
// �����̸�: �ҽ�.cpp
// ������¥: 2013��5��7��
// �ۼ���: ������
// (����κ���)









#include <stdio.h>


int main() {
	// ������ �� ���κ��� ������ ����.
	int myNumber, yourNumber;

	int *pILoveRyu;
	// * �� data of
	// ������ ������ ����Ű�� ���� �����ʹ� ��Ƽ�� (�޸�, �ڷ���)
	// �޸� �ּҰ� ����ȴ�.
	// ������ ������ ����� �����ͷ� ���� int �� ���� �ִ�.

	myNumber=10;

	pILoveRyu=&myNumber;
	// &(ampersand): adress of

	*pILoveRyu=20;
	// data of pILoveRyu , �����Ͱ� �ִ� ���� 20 ����
	// ��, myNumber=10 �̶�� �Ҹ�

	yourNumber=*pILoveRyu;


	
	printf("%x\n",pILoveRyu);

	printf("yourNumber=%d\n",yourNumber);

	printf("myNumeber=%d\n",myNumber);



	
	
	
	

	

	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");

	// �����ݷ��� ������ ���� ���Ѵ�.
	// ������ ���α׷� ������ �⺻���� ��.



	// ������ �� �Ʒ� �κ� ����.
}




    //int *pPtr1;
	//int *pPtr2;
	//int a=10, b=20, c=20;
	//pPtr1=&a;
	//pPtr2=&b;
	//c=*pPtr1;  // c=10
	//*pPtr1=*pPtr2; // a=20
	//*pPtr2=c; // b=10

	//printf ("a=%d\n",a);
	//printf ("b=%d\n",b);