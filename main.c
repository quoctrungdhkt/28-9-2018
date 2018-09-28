#include <stdio.h>

// Khai báo và định nghĩa hàm
int congHaiSo(int x, int y) {
    return x + y;
}
int truHaiSo(int x, int y) {
    return x - y;
}
int nhanHaiSo(int x, int y) {
    return x * y;
}
float chiaHaiSo(int x, int y) {
    if (y==0) {
        printf("Khong co ket qua");
    }
    return (float) x / y;
}
int main() {
    int x, y, ketqua, luachon;
    printf("Vui long nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Vui long nhap so thu hai: ");
    scanf("%d", &y);
    printf("Lua chon phep tinh: \n");
    printf("1. Phep cong. \n");
    printf("2. Phep tru. \n");
    printf("3. Phep nhan. \n");
    printf("4. Phep chia. \n");
    printf("Nhap lua chon cua ban (1|2|3|4):");
    scanf("%d", &luachon);  if (luachon == 1) {
        printf("Tong hai so %d va %d la: %d", x, y, congHaiSo(x, y));
    }
    else if (luachon == 2) {
        printf("Hieu hai so %d va %d la: %d", x, y, truHaiSo(x, y));
    }
    else if (luachon == 3) {
        printf("Tich hai so %d va %d la: %d", x, y, nhanHaiSo(x, y));
    }
    else if (luachon == 4) {
        printf("Thuong hai so %d va %d la: %.2f", x, y, chiaHaiSo(x, y));
    }
    else {
        printf("Lua chon sai.");
    }
    return 0;
}
