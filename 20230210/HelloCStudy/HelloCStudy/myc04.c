#include<stdio.h>
int main()
{
	//���� ���� ���̴� ��
	//���ǹ�
	int a = 5, b = 5;
	//�� ���� ���ڸ� ���ߴ� ��, ���� ���� ���
	//�� ���� ���ڸ� ���ߴ� �� ���� �ٸ� ���
	//�� ���� ���ڸ� ���ߴ� �� ù ��°�� �ι�°���� �� ū ���
	//�� ���� ���ڸ� ���ߴ� �� ù ��°�� �ι�°���� ���ų� �� ���� ���
	printf("%d %d %d %d\n", a == b, a != b, a > b, a <= b); //1 0 0 1

	//���� ������
	printf("���ڸ� �Է¹޴´�. �� ���� ���̰� ������ üũ�Ѵ�.\n");
	int age1, age2;
	printf("���� ����� ���̸� ����Ѵ�.\n");
	scanf_s("%d %d", &age1, &age2);
	age1 >= age2 ? printf("���� ���� ���� �ֳ�?") : printf("�� �����̾�");

	char c = age1 >= age2 ? '+' : '-';
	printf("\nc=%c\n", c);

	//1. ���̸� �Է��Ѵ�. ¦�� ������ ��쿡�� "¦¦��"���. �׿ܿ� "..."���
	printf("�� ���̼���????");
	int myage;
	scanf_s("%d", &myage);
	myage % 2 == 0 ? printf("\n¦¦��\n") : printf("\n...\n");
	
	//2. 1�� ������ Ǯ��, 0�� ������ ��쿡 ���ؼ� ����ó�� �Ѵ�.
	myage % 2 == 0 ? (myage <= 0 ? printf("\n����\n") : printf("\n¦��\n")) 
		: printf("...");
	


	//if��
	if (myage % 2 == 0)
		printf("¦¦��");
	else
		printf("...");

	if (myage % 2 == 0)
	{
		if (myage <= 0)
			printf("����");
		else
			printf("¦¦��");
	}
	else
	{
		printf("...");
	}

	//¦���̸鼭 ����� ���
	//&&�� �̿���!!!
	if (myage % 2 == 0 && myage > 0)
		printf("�������� ¦¦��!");

	//���� ���� ������� ����ϰ� ���ּ���.
	//���� ���ڸ� ����ȣ : �Ƹ��� ���� �� 300������ �Ѿ��� ��...
	//�Է��ؾ� �� �� = 4��
	//���� ����, ���� �¾ ����, ���� ��, ���� �¾ ��

	//�� �ϼ̴ٸ� ����ó���� ���� �غ�����.(������ 0�� ���� ����ó�� ���)



	return 0;
}