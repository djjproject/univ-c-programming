// ����: �迭
// ���: �迭
// �����̸�: �ҽ�.cpp
// ������¥: 2013��5��14��
// �ۼ���: ������
// (����κ���)






#include <stdio.h>







int main() {
	// ������ �� ���κ��� ������ ����.
	
	//int score[10];
	// �迭�� ����, �迭�̸�:score, �迭����:10

	/*score[0] = 100;
	score[1] = 98;
	score[2] = 77;
	score[3] = 70;
    score[4] = (score[3] + score[2]) / 2;*/


	int avg,i=0,sum=0;

	int score[5] = {100,98,77,70,73};
	// �迭�� ���� �� �ʱ�ȭ
	// �迭�� ������ 01234 �̴�. �׷��� 5��
	// �޸� 20����Ʈ �Ҵ�


	int arr1[] = {1,2,3,4,5,6,7,8};
	// �޸� 32����Ʈ �Ҵ�

	int arr3[5] = {100,200};
	// ���⼭ �ʱ�ȭ�� 2���� �Ǿ���.
	// �׷��� �޸𸮴� 20����Ʈ �Ҵ�.

	printf("the number of bytes of score is : %d\n",sizeof(score));
	printf("the number of bytes of arr1 is : %d\n",sizeof(arr1));
	printf("the number of bytes of arr3 is : %d\n",sizeof(int));
	// sizeof �� �޸� ũ���̴�.
	// int���� ����Ʈ ũ��� 4����Ʈ. sizeof(int)


	//while (i<5) {
	//	sum = sum + score[i];
	//	// �迭�� �ε����� ������ ����� �� �ִ�.


	//	i++;
	//}

	//avg = sum/5;






	printf("�ȳ��ϼ���, ���� �������̶�� �մϴ�. \n");

	// ������ �� �Ʒ� �κ� ����.
}

