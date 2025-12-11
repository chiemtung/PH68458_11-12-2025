#pragma once
void TinhTong()
{
	int nhapSoNguyenDuong();


        int n;
        int tongLe = 0;

        
        do {
            printf("Nhap so nguyen n (n > 3): ");
            scanf("%d", &n);
        } while (n <= 3);

       
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                tongLe += i;
            }
        }

        
        printf("Tong cac so le tu 1 den %d la: %d\n", n, tongLe);

        
        if (n % 5 == 0) {
            printf("%d chia het cho 5\n", n);
        }
        else {
            printf("%d KHONG chia het cho 5\n", n);
        }

        return 0;
    }

}

