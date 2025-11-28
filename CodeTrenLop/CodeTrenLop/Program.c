// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void kiemTraSoNguyen() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void UocChungBoiChung() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void TinhTienQuanKaraoke() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void TinhTienDien() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void ChucNangDoiTien() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void TinhLaiSuatVayNganHang() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void VayTienMuaXe() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void SapXepThongTinSV() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void GameFPOLYLOTT() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void TinhPhanSo() {
    int flag;
    do {
        printf("Ban co muon su dung tiep khong ? \n");
        printf("Co [1] \n");
        printf("Khong [0] \n");
        scanf("%d", &flag);
        switch (flag) {
        default:
            printf("Nhap loi [ Vui long chon 1 de tiep tuc hoac 0 de thoat ]\n");
            break;
        }
    } while (flag);
}
void LapChucNang(int chonChucNang) {
    int tiepTuc = 1;
    while (tiepTuc = 1) {
        switch (chonChucNang) {
        case 1: kiemTraSoNguyen();
            break;
        case 2: UocChungBoiChung();
            break;
        case 3: TinhTienQuanKaraoke();
            break;
        case 4: TinhTienDien();
            break;
        case 5: ChucNangDoiTien();
            break;
        case 6: TinhLaiSuatVayNganHang();
            break;
        case 7: VayTienMuaXe();
            break;
        case 8:SapXepThongTinSV();
            break;
        case 9: GameFPOLYLOTT();
            break;
        case 10: TinhPhanSo();
            break;
        case 0: printf("Thoat chuong trinh.\n");
            break;
        default: printf("Lua chon khong hop le. Xin long chon lai [1-10] hoac 0 de thoat chuong trinh.\n");
            break;
        } while (chonChucNang != 0);
        return 0;
    }
}
int main()
{
    int choice;
    do {
        printf("\n---------- MENU ----------\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Uoc chung || Boi chung\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. tinh phan so\n");
        printf("0. Thoat chuong trinh\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1: kiemTraSoNguyen();
            break;
        case 2: UocChungBoiChung();
            break;
        case 3: TinhTienQuanKaraoke();
            break;
        case 4: TinhTienDien();
            break;
        case 5: ChucNangDoiTien();
            break;
        case 6: TinhLaiSuatVayNganHang();
            break;
        case 7: VayTienMuaXe();
            break;
        case 8: SapXepThongTinSV();
            break;
        case 9: GameFPOLYLOTT();
            break;
        case 10: TinhPhanSo();
            break;
        case 0: printf("Thoat chuong trinh.\n");
            break;
        default: printf("Lua chon khong hop le. Xin long chon lai [1-10] hoac 0 de thoat chuong trinh.\n");
            break;
        }
    } while (choice != 0);

    return 0;

}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184
