#include "stdio.h"

typedef struct myaddress {
	char name[20]; //���O
	char phone[15];//�d�b�ԍ�
	int grade;//�w�N
}MYADD;

int main()
{
	MYADD data[3];//myaddress�̍\���̂̔z���錾
	int i;


	for (i = 0; i < 3; i++)
	{
		//���͂�����
		printf("[%d]���� ���O����͂��Ă�������", i + 1);
		scanf_s("%s", data[i].name, 20); //20�͕�����̃T�C�Y��� �ʂ�100�ł�200�ł�����
		printf("[%d]���� �d�b�ԍ�����͂��Ă������� ", i + 1);
		scanf_s("%s", data[i].phone, 15); //15�͓�����������̃T�C�Y���
		printf("[%d]���� �w�N����͂��Ă������� ", i + 1);
		scanf_s("%d", &data[i].grade); //������ł͂Ȃ��̂�&���K�v
	}


	
	for (i = 0; i < 3; i++) printf("%s,\t%s,\t%d\n",  
		data[i].name, 
		data[i].phone, 
		data[i].grade);
	//3�̔z��̖��O�A�d�b�ԍ��A�w�N���o��
	//\t �͐����^�u���Ӗ�����

    return 0;
}

