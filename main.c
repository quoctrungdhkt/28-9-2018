#include <stdio.h>
#include <stdlib.h>

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
    if (y == 0) {
        printf("Khong co ket qua");
    }
    return (float) x / y;
}

void taoMenu() {
    printf("Lua chon phep tinh: \n");
    printf("1. Phep cong. \n");
    printf("2. Phep tru. \n");
    printf("3. Phep nhan. \n");
    printf("4. Phep chia. \n");
    printf("5. Thoat chuong trinh. \n");
    printf("Nhap lua chon cua ban (1|2|3|4|5): \n");
}

int main() {

//    int x, y, ketqua, luachon;
//    printf("Vui long nhap so thu nhat: ");
//    scanf("%d", &x);
//    printf("Vui long nhap so thu hai: ");
//    scanf("%d", &y);
//    printf("Nhap lua chon cua ban (+|-|*|/):");
//    scanf("%d", &luachon);
//    switch (luachon) {
//        case 1:
//            printf("Tong hai so %d va %d la: %d", x, y, congHaiSo(x, y));
//            break;
//        case 2:
//            printf("Hieu hai so %d va %d la: %d", x, y, truHaiSo(x, y));
//            break;
//        case 3:
//            printf("Tich hai so %d va %d la: %d", x, y, nhanHaiSo(x, y));
//            break;
//        case 4:
//            printf("Chia hai so %d va %d la: %f", x, y, chiaHaiSo(x, y));
//            break;
//        case 5:
//            printf("hen gap lai.");
//            exit(1);
//        default:
//            printf("Lua chon sai");
//    }

// Yeu cau nguoi dung nhap 2 so.
// Cho phep nguoi dung lua chon phep tinh
// Lua chon phai la: +,-,*,/

    int x, y, luachon;
    while (1 == 1) {
        taoMenu();
        scanf("%d", &luachon);
        printf("Vui long nhap so thu nhat: ");
        scanf("%d", &x);
        printf("Vui long nhap so thu hai: ");
        scanf("%d", &y);
        switch (luachon) {
            case 1:
                printf("Tong hai so %d va %d la: %d", x, y, congHaiSo(x, y));
                break;
            case 2:
                printf("Hieu hai so %d va %d la: %d", x, y, truHaiSo(x, y));
                break;
            case 3:
                printf("Tich hai so %d va %d la: %d", x, y, nhanHaiSo(x, y));
                break;
            case 4:
                printf("Chia hai so %d va %d la: %f", x, y, chiaHaiSo(x, y));
                break;
            case 5:
                printf("hen gap lai.");
                exit(1);
            default:
                printf("Lua chon sai");
                break;
        }
        printf("\n");
    }
    return 0;
}
