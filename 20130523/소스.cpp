// ����: ��̿� ������
// ���: �迭�� �Լ� ������ �Ѱܺ���.
// �����̸�: �ҽ�.cpp
// ������¥: 2013��5��21��
// �ۼ���: ������
// (����κ���)




// �迭�� ���� Ŭ �� ���� ȿ������ ����� ������ ������ �ϴ� ���̴�.
// �����͸� ���� �����߿� �ϳ��̴�.



#include <stdio.h>

typedef struct complex_number {
	int re;
	int im;

	// ������ �ڷ����� ���� ����ٰ� ����

} COMPLEX;

void addComplex(COMPLEX x, COMPLEX b) {

	COMPLEX z;

	z.re=x.re+b.re;
	z.im=x.im+b.im;
	printf("%d+%di\n",z.re,z.im);


	



}



void multComplex (COMPLEX x,COMPLEX y) {

	COMPLEX z;
	z.re=(x.re*y.re)-(x.im * y.im);
	z.im=x.re*y.im+x.im*y.re;
	printf("%d+%di\n",z.re,z.im);






}



int main() {
	// ������ �� ���κ��� ������ ����.
	
	COMPLEX a,b;
	a.re=10;
	a.im=20;

	b.re=100;
	b.im=200;


	multComplex(a,b);






	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");
	return 0;


	// ������ �� �Ʒ� �κ� ����.
}

