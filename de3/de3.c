#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhap_thong_tin_nhan_vien();
void chinh_sua_thong_tin();
void xoa_nhan_vien();
void tim_kiem_nhan_vien_theo_ma();
void tim_kiem_nhan_vien_theo_ten();
int main()
{
    struct NhanVien a[100];
    printf("nhap so luong nhan vien: \n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        nhap_thong_tin_nhan_vien(&a[i], i + 1);
} 