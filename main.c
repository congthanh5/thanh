#include <stdio.h>

float tinhDienTich(float chieuDai, float chieuRong) {
    float dienTich = chieuDai * chieuRong;
    return dienTich;
}

float tinhChuVi(float chieuDai, float chieuRong) {
    float chuVi = (chieuDai + chieuRong) * 2;
    return chuVi;
}

int main() {
    float chieuDai, chieuRong;
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieuDai);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieuRong);
    float dienTich = tinhDienTich(chieuDai, chieuRong);
    float chuVi = tinhChuVi(chieuDai, chieuRong);
    printf("Dien tich hinh chu nhat la: %0.2f\n", dienTich);
    printf("Chu vi hinh chu nhat la: %0.2f", chuVi);
    return 0;
}