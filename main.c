#include <stdio.h>
float balance = 1000.0;
void checkBalance() {
    printf("so du hien tai la: %.2f\n", balance);
}
void withdraw() {
    float amount;
    printf("nhap so tien muon rut: ");
    scanf("%f", &amount);

    if (amount <= balance) {
        balance -= amount;
        printf("gui tien thanh cong, so dư hien tại la: %.2f\n", balance);
    } else {
        printf("so du khong du de thưc hien dao dich .\n");
    }
}
void deposit() {
    float amount;
    printf("Nhap so tien muon gui: ");
    scanf("%f", &amount);

    balance += amount;
    printf("gui tien thanh cong, so dư hien tại la: %.2f\n", balance);
}
int main() {
    char choice;

    do {
        printf("MENU:\n");
        printf("a. kiem tra so du\n");
        printf("b. rut tien\n");
        printf("c. gui tien\n");
        printf("d. thoat\n");
        printf("chon 1 lua chon: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                checkBalance();
                break;
            case 'b':
                withdraw();
                break;
            case 'c':
                deposit();
                break;
            case 'd':
                printf("thoat kho chuong trinh.\n");
                break;
            default:
                printf("lua chon khong hop le vui long nhap lai\n");
                break;
        }

        printf("\n");
    } while (choice != 'd');

    return 0;
}

