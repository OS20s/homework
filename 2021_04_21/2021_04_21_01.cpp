#include "stdio.h"

typedef struct myaddress {
	char name[20];
	char tel[15];
	char gakka[3];
	int gakunen;
}MYADD;

int main() {
	FILE *fp; 
	MYADD address[3];
	int i;
	char read_data[64];

	fp = fopen("C:\\address.txt", "w"); //C:\\にaddress.txtを生成
	if (fp != NULL) printf("ファイルオープン成功\n");
	else {
		printf("ファイルオープン失敗\n");
		return 0;
		//ファイル生成に失敗した場合、プログラムを終了
	}

	for (i = 0; i < 3; i++) {
		printf("[%d]件目　名前を入力してください", i + 1);
		scanf("%s", address[i].name);
		printf("[%d]件目　電話番号を入力してください", i + 1);
		scanf("%s", address[i].tel);
		printf("[%d]件目　学科を入力してください", i + 1);
		scanf("%s", address[i].gakka);
		printf("[%d]件目　学年を入力してください", i + 1);
		scanf("%d", &address[i].gakunen);
		fprintf(fp, "%s,%s,%s,%d\n", address[i].name, address[i].tel, address[i].gakka, address[i].gakunen);
	}

	fclose(fp); //writeモードからreadモードに切り替えるため、いったんファイルを閉じる

	fp = fopen("C:\\address.txt", "r"); //readでファイルを読み込み

	if (fp == NULL) {
		printf("ファイルオープン失敗\n");
		return 0;
		//読み込みに失敗したらプログラムを終了
	}

	printf("名前,電話番号,学科,学年\n");
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", read_data);  //ファイルから一行読み込んでread_dataに格納
		printf("%s\n", read_data);    //read_dataを出力
	}

	fclose(fp); //ファイルを閉じる

	return 0;
}