#pragma once
void ThongTinCuaHang()
{
	int tieptuc8;
	do
	{
		system("cls");
		int n;
		printf("So Thu Cung (Toi da 100): ");
		scanf("%d", &n);

		char tc[100][50];
		float cannang[100];

		// Input thong tin sinh vien
		for (int i = 0; i < n; i++) {
			printf("\nSinh vien %d:\n", i + 1);
			printf("Ho ten: ");
			scanf(" %[^\n]", tc[i]);
			printf("Diem: ");
			scanf("%f", &cannang[i]);
		}
	} while (tieptuc8 == 1);
	system("cls");
}