#include <stdio.h>
#include <tgmath.h>
#include <stdbool.h>

bool kiemTraDK(float canhGocVuong1, float canhGocVuong2){
    if(canhGocVuong1<0 || canhGocVuong2<0){
        return false;
    }
    return true;
}

float tinhCanhHuyen(float canhGocVuong1, float canhGocVuong2){
    float canhHuyen;
    return canhHuyen = sqrt(canhGocVuong1*canhGocVuong1+canhGocVuong2*canhGocVuong2);
}
int main() {
    float canhGocVuong1,canhGocVuong2;
    printf("Nhập độ dài dài canh góc vuông thứ nhất :\n");
    scanf("%f",&canhGocVuong1);
    printf("Nhập độ dài dài canh góc vuông thứ hai :\n");
    scanf("%f",&canhGocVuong2);
    if (kiemTraDK(canhGocVuong1,canhGocVuong2)==true){
        printf("Độ dài cạnh góc vuông là :%f",tinhCanhHuyen( canhGocVuong1,canhGocVuong2));
    }


    return 0;
}