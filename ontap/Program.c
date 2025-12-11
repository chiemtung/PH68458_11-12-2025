 
#include <stdio.h>
#include "ThongTinThuCung.h"
#include "TinhTong.h"

int main()
{
	int chon;

	do
	{

		printf("======Menu======"); printf("\n");
		printf("1. Thong Tin Thu Cung"); printf("\n");
		printf("2. Tinh Tong"); printf("\n");
		printf("3. Thong Tin Cua Hang"); printf("\n");
		printf("0. Thoat"); printf("\n");
		printf("Vui long chon chuc nang:"); printf("\n");
		scanf("%d", &chon);
		system("cls");
		switch (chon)
		{
		case 1:
			ThongTinThuCung();
			break;
		case 2:
			TinhTong();
			break;
		case 3:
			tinh_tien_karaoke();
			break;
		case 0:
			return 0;
			break;
		default:
			printf("Vui long chon cac chuc nang tren menu [0-10]\n");

		}
	} while (chon != 0);
}

