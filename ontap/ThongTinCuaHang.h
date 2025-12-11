#pragma once
void ThongTinCuaHang()
{
	int tieptuc11;
	do
	{
		system("cls");
		int n;
		printf("So Thu Cung (Toi da 100): ");
		scanf("%d", &n);

		char tc[100][50];
		float cannang[100], sum = 0;

		
		for (int i = 0; i < n; i++) {
			printf("\nThu cung %d:\n", i + 1);
			printf("Ten thu cung: ");
			scanf(" %[^\n]", tc[i]);
			printf("Can nang: ");
			scanf("%f", &cannang[i]);
			sum += cannang[i];
		}
		float tb = sum / n;
		printf("Can Nang Trung Binh: %2.f\n", tb);
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc11);
	} while (tieptuc11 == 1);
	system("cls");
}