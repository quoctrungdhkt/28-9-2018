#include <stdio.h>
// Khai báo và định nghĩa hàm
int congHaiSo(int x, int y) {
    return x+y;
}
int main(){
    int a, b, ketqua, luachon;
    printf("Vui long nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Vui long nhap so thu hai: ");
    scanf("%d", &b);
    printf("Lua chon phep tinh: \n");
    printf("1. Phep cong. \n");
    printf("2. Phep tru. \n");
    printf("Nhap lua chon cua ban (1|2): \n");
    scanf("%d", &luachon);
    //

    ketqua = congHaiSo(a, b);
    printf("Tong cua %d va %d la %d", a, b, ketqua);
    return 0;
}