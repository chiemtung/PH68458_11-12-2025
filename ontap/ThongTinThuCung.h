#pragma once
#include <stdio.h>

#define MAX 3

void ThongTinThuCung()
{
    int tieptuc10;
    do
    { 
         struct ThuCung {
        char ma[20];
        char ten[50];
        int namSinh;
         };

        
        struct ThuCung tc[3];
        int namHienTai;

        printf("Nhap nam hien tai: ");
        scanf("%d", &namHienTai);
        getchar();


        for (int i = 0; i < MAX; i++) {
            printf("\n=== Nhap thong tin thu cung %d ===\n", i + 1);

            printf("Nhap ma thu cung: ");
            fgets(tc[i].ma, sizeof(tc[i].ma), stdin);
            printf("Nhap ten thu cung: ");
            fgets(tc[i].ten, sizeof(tc[i].ten), stdin);
            printf("Nhap nam sinh: ");
            scanf("%d", &tc[i].namSinh);
            getchar();
        }


        printf("\n===== DANH SACH THU CUNG =====\n");
        for (int i = 0; i < MAX; i++) {
            int tuoi = namHienTai - tc[i].namSinh;

            printf("\nThu cung %d:\n", i + 1);
            printf("Ma       : %s", tc[i].ma);
            printf("Ten      : %s", tc[i].ten);
            printf("Nam sinh : %d\n", tc[i].namSinh);
            printf("Tuoi     : %d tuoi\n", tuoi);
        }

    } while (tieptuc10 == 1);
    system("cls");
    }
}