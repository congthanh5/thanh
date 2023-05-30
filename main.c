#include <stdio.h>

char xepLoai(float diem) {
    if (diem >= 90) {
        return 'A';
    } else if (diem >= 80) {
        return 'B';
    } else if (diem >= 70) {
        return 'C';
    } else if (diem >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int soSinhVien;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soSinhVien);

    float diem;
    for (int i = 1; i <= soSinhVien; i++) {
        printf("Nhap diem cua sinh vien %d: ", i);
        scanf("%f", &diem);

        char loai = xepLoai(diem);
        printf("Sinh vien %d - Xep loai: %c\n", i, loai);
    }

    return 0;
}