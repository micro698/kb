#include<stdio.h>
int a = 100; //�۷ι� ���� Ȥ�� ���� ����
int main()
{
	//�̹��� �� ���������� �̿��ؼ� a=3, b=5�� �� �� ���� ���� ���� �ٲ�� �Լ���
	//�ۼ��ϼ���.(���� ������ �̷��� Ǯ���ٰ� �� �Ա� ��...��)
	a++;
	printf("%d\n", a);
	//���� ũ�� 2���� �ִ�.
	//���� ���� = global variable, �۷ι� ����
	//main�� �Լ� ��𿡼����� �� ������ �Ǵ� ����
	
	//���� ���� = local variable, ���ú���
	//�츮�� �� �� ���� ���ú�����.
	//main �Լ� �ȿ����� ���̴� ����
	//Ȥ�� swap�Լ� �ȿ����� ���̴� ����
	//for���̳� if�� �ȿ����� ���Ǵ� ����
	//�� �߰�ȣ �ȿ� ���� ����
	return 0;
}