// ����: ����Ʈ �Լ�
// ���: �޸� ����.
// �����̸�: �ҽ�.cpp
// ������¥: 2013��5��9��
// �ۼ���: ������
// (����κ���)






#include <stdio.h>

//int sum(int *pPtr1,int *pPtr2) {
//	int c;
//	c= *pPtr1 + *pPtr2;
//
//	// *pPtr1 = 1000 �̶�� �ϸ� ��ü������ x�� ���� �ٲ��.
//	// ���� ���� ����� �����Ѵ�.
//
//	return c;
//}

void swap (int *pPtr1, int *pPtr2) {
	int c;
	c=*pPtr1;
	*pPtr1=*pPtr2;
	*pPtr2=c;
}



int main() {
	// ������ �� ���κ��� ������ ����.
	
	/*int x=10, y=20, z;
	z=sum(&x,&y);

	printf("z=%d\n",z);*/

	int x=10, y=20;
	swap(&x,&y);

	printf("x=%d,y=%d\n",x,y);


	


	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");

	// ������ �� �Ʒ� �κ� ����.
}

