// ����: �ڷ��� �����
// ���: �ڷ��� ����� ����
// �����̸�: �ҽ�.cpp
// ������¥: 2013��5��28��
// �ۼ���: ������
// (����κ���)




// �迭�� ���� Ŭ �� ���� ȿ������ ����� ������ ������ �ϴ� ���̴�.
// �����͸� ���� �����߿� �ϳ��̴�.



#include <stdio.h>

// typedef { struct - �л��� } }
     //  char �̸�
     //  char �Ҽ� 
// }



// �л� ����ü



typedef struct student { 
	
	char *name;
	char *dept;
	int age;





} STUNDENT;
// ����ڰ� ���� �ڷ����� �׻� �빮��





int main() {
	// ������ �� ���κ��� ������ ����.
	
	char *s1 = "������";
	char *s2 = "����Ǫ";
	char *q1 = "������";
	char *q2 = "����";



	STUNDENT a,b,c;
	a.name = s1;
	a.dept = q1;
	a.age = 18;


	b.name = s2;
	b.dept = q2;

	printf("%s is belong to %s\n",a.name,a.dept);








	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");
	return 0;


	// ������ �� �Ʒ� �κ� ����.
}

