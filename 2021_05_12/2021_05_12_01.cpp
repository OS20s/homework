#include <stdio.h>
#include <string.h>

void kaibun(char*, char*); //�v���g�^�C�v�錾

int main() {
	char moto[] = "AKASAKA"; //���f�[�^
	char kotae[21]; //�t�̃f�[�^

	kaibun(moto, kotae); //kaibun()���Ăяo��

	printf("���̃f�[�^ %s\n", moto);
	printf("�t�̃f�[�^ %s\n", kotae);
	if (strcmp(moto, kotae) == 0) //�������Ƌt�̃f�[�^����v������
		printf("�񕶂ł�\n");
	else printf("�񕶂ł͂���܂���\n");

	return 0;
}

void kaibun(char* moto, char* kotae) {
	int i;
	char temp;
	int nagasa = strlen(moto); //nagasa �� moto �̒�������

	strcpy(kotae, moto); //kotae �� moto ���R�s�[


	//�������當������ւ�
	//�ŏ�����i�����ڂƍŌォ��i�����ڂ����ւ���
	for (i = 0; i < nagasa / 2; i++) {
		temp = kotae[i]; 
		kotae[i] = kotae[nagasa-1 - i];
		kotae[nagasa-1 - i] = temp; 
	}
}