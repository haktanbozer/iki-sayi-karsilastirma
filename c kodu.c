#include <stdio.h>
 
int main() { 
    int birinci, ikinci;
    printf("Birinci Tam Sayiyi Giriniz: ");
    scanf_s("%d", &birinci);
    printf("Ikinci Tam Sayiyi Giriniz: ");
    scanf_s("%d", &ikinci);
 
    if (birinci > ikinci) {
        printf("Girilen Birinci %d Sayisi Buyuktur", birinci);
    }
    if (ikinci > birinci) {
        printf("Girilen Ikinci %d Sayisi Buyuktur", ikinci);
    }
    if (birinci == ikinci) {
        printf("Girilen Iki Sayi Birbirine Esittir");
    }
    return 0;
}
