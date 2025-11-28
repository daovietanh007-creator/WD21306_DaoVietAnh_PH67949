// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool laSoChinhPhuong(int n) {
    if (n < 0) return false;
    int can = sqrt(n);
    return can * can == n;
}
void kiemTraSoNguyen() {
    float soNhap;
    int kiemTra = 1;
    int flag = 1;

    while (kiemTra) {
        printf(" Moi ban nhap so: \n");
        scanf("%f", &soNhap);
        if (soNhap - (int)soNhap == 0) {
            if (laSoNguyenTo(soNhap)) {
                printf(" %2f la so nguyen to. \n ", soNhap);
            }
            else if (laSoChinhPhuong(soNhap)) {
                printf(" %2f la so chinh phuong. \n", soNhap);
            }
            else {
                printf("So vua nhap la so nguyen.\n");
            }
        }
        else {
            printf("So vua nhap khong phai la so nguyen.\n");
        }
        do {
            printf(" Ban co muon tiep tuc khong?\n");
            printf("1. Co\n");
            printf("2. Khong[Hay bam phim 0]\n");
            scanf("%d", &flag);

            switch (flag) {
            case 1: kiemTraSoNguyen();
                break;
            case 0: flag = 0;
                break;
            default:
                printf("Ban nhap loi[Vui long chon 1 hoac 0] \n");
                break;
            }
        } while (flag);
        break;
    }
}
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}
void UocChungBoiChung() {
    int choice = 1;
    int a, b;
    while (choice) {
        printf("\n=====Menu=====\n");
        printf("1. Tim Uoc chung lon nhat(UCLN)\n");
        printf("2. Tim Boi chung nho nhat(BCNN)\n");
        printf("3. Quay ve Menu chinh(Chon phim 0)\n");
        printf("Moi ban chon: \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Moi nhap so a: \n");
            scanf("%d", &a);
            printf("Moi nhap so b: \n");
            scanf("%d", &b);
            printf("Uoc chung lon nhat cua %d vaf %d la: %d\n", a, b, UCLN(a, b));
            break;
        case 2:
            printf("Moi nhap so a: \n");
            scanf("%d", &a);
            printf("Moi nhap so b: \n");
            scanf("%d", &b);
            printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, BCNN(a, b));
            break;
        case 0:
            break;
        default: printf("Ban nhap loi, vui long chon lai!\n");
            break;
        }
    }
}
float tienHat(int gioVao, int gioRa) {
    int soGio;
    float tienThanhToan;
    soGio = gioRa - gioVao;
    if (soGio <= 3) {
        if (gioVao >= 14 && gioVao <= 17) {
            return tienThanhToan = soGio * 150000 * 0.9;
        }
        return  tienThanhToan = soGio * 150000;
    }
    else {
        if (gioVao >= 14 && gioVao <= 17) {
            return tienThanhToan = (3 * 150000 + (soGio - 3) * 150000 * 0.7) * 0.9;
        }
        return tienThanhToan = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
}
void TinhTienKaraoke() {
    int gioVao, gioRa;
    int flag = 1, choice = 1, flag1 = 1;
    while (choice) {
        printf("Moi ban nhap gio vao [12-23]: \n");
        scanf("%d", &gioVao);
        while (flag) {
            if (gioVao < 12 || gioVao > 23) {
                printf("Nhap khong hop le! Quan chi hoat dong tu 12 - 23h. Vui long nhap lai gio vao: \n");
                break;
            }
            else {
                printf("Moi ban nhap gio ra [12-23]: \n");
                scanf("%d", &gioRa);
                for (int i = 1; i > 0; i++) {
                    if (gioRa < 13 || gioRa > 24) {
                        printf("Nhap khong hop le! Quan chi hoat dong tu 12 - 23h. \n");
                        break;
                    }
                    else if (gioRa <= gioVao) {
                        printf("Nhap khong hop le! Gio ra > gio vao. \n");
                        break;
                    }
                    else {
                        printf("So gio hat: %d\n", gioRa - gioVao);
                        printf("Tien thanh toan: %.2f VND\n", tienHat(gioVao, gioRa));
                        do {
                            printf("Ban co muon tiep tuc tinh tien hat khong? \n");
                            printf("Co.[bam phim 1] \n");
                            printf("Khong.[bam phim 0] \n");
                            scanf("%d", &flag1);

                            switch (flag1) {
                            case 1: TinhTienKaraoke();
                                break;
                            case 0:
                                flag1 = 0; flag = 0;
                                choice = 0; i = 0;
                                break;
                            default: printf("Ban nhap loi![Vui long chon 1 hoac 0] \n");
                                break;
                            }
                        } while (flag1);

                    }
                }
                break;
            }
            break;
        }
    }
}
    int kwh;
    long long tien = 0;

    printf("Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        tien = kwh * 1678;
    }
    else if (kwh <= 100) {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("So tien phai tra: %lld dong\n", tien);
    int money;
    int menhgia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int soluong[9] = { 0 }; // luu so luong tung menh gia

    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    for (int i = 0; i < 9; i++) {
        soluong[i] = money / menhgia[i];   // so to menh gia nay
        money = money % menhgia[i];        // so tien con lai
    }

    printf("Ket qua doi tien:\n");
    for (int i = 0; i < 9; i++) {
        if (soluong[i] > 0) {
            printf("%d to %d\n", soluong[i], menhgia[i]);
        }
    }
    int main() {
        double tien_vay;
        double lai_suat = 0.05; // 5%/thang
        int ky_han = 12;

        printf("Nhap so tien muon vay: ");
        scanf("%lf", &tien_vay);

        // Tien goc tra moi thang 
        double goc_thang = tien_vay / ky_han;

        printf("\nBang tra gop trong %d thang:\n", ky_han);
        printf("Thang\tGoc\t\tLai\t\tTong tra\n");

        double tong_tien = 0;
        double du_no = tien_vay;

        for (int i = 1; i <= ky_han; i++) {
            double lai_thang = du_no * lai_suat;
            double tong_thang = goc_thang + lai_thang;
            tong_tien += tong_thang;

            printf("%2d\t%.0f\t\t%.0f\t\t%.0f\n", i, goc_thang, lai_thang, tong_thang);

            du_no -= goc_thang; // giam du no sau khi tra goc
        }

        printf("\nTong so tien phai tra sau %d thang: %.0f\n", ky_han, tong_tien);
        int main() {
            double phan_tram_vay;
            double gia_tri_xe = 500000000; // 500 triệu VNĐ
            int thoi_han_nam = 24;
            double lai_suat_nam = 0.072; // 7.2%/năm

            printf("Nhap phan tram vay toi da (vd: 80): ");
            scanf("%lf", &phan_tram_vay);

            // Tinh so tien tra truoc va so tien vay
            double so_tien_vay = gia_tri_xe * phan_tram_vay / 100.0;
            double tra_truoc = gia_tri_xe - so_tien_vay;

            // Lai xuat thang
            double lai_suat_thang = lai_suat_nam / 12.0;
            int tong_thang = thoi_han_nam * 12;

            // Cong thuc tinh tra gop deu (EMI)
            double monthly_payment = so_tien_vay * lai_suat_thang * pow(1 + lai_suat_thang, tong_thang)
                / (pow(1 + lai_suat_thang, tong_thang) - 1);

            printf("\nSo tien phai tra lan dau (tra truoc): %.0f VND\n", tra_truoc);
            printf("So tien phai tra hang thang trong %d thang: %.0f VND\n", tong_thang, monthly_payment);
void TinhTienDien() {}
void DoiTien() {}
void TinhLaiNganHang() {}
void VayTienMuaXe() {}
void SapXepThongTinSV() {}
void GameFPOLYLOTT() {}
void TinhPhanSo() {}
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
        case 3: TinhTienKaraoke();
            break;
        case 4: TinhTienDien();
            break;
        case 5: DoiTien();
            break;
        case 6: TinhLaiNganHang();
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
        default: printf("Lua chon khong hop le. Vui long chon lai [1-10] hoac 0 de thoat.\n");
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