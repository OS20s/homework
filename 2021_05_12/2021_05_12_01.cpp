#include <stdio.h>
#include <string.h>

void kaibun(char*, char*); //プロトタイプ宣言

int main() {
	char moto[] = "AKASAKA"; //元データ
	char kotae[21]; //逆のデータ

	kaibun(moto, kotae); //kaibun()を呼び出し

	printf("元のデータ %s\n", moto);
	printf("逆のデータ %s\n", kotae);
	if (strcmp(moto, kotae) == 0) //もし元と逆のデータが一致したら
		printf("回文です\n");
	else printf("回文ではありません\n");

	return 0;
}

void kaibun(char* moto, char* kotae) {
	int i;
	char temp;
	int nagasa = strlen(moto); //nagasa に moto の長さを代入

	strcpy(kotae, moto); //kotae に moto をコピー


	//ここから文字入れ替え
	//最初からi文字目と最後からi文字目を入れ替える
	for (i = 0; i < nagasa / 2; i++) {
		temp = kotae[i]; 
		kotae[i] = kotae[nagasa-1 - i];
		kotae[nagasa-1 - i] = temp; 
	}
}