#include <stdio.h>

// Toplama Fonksiyonu
int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

// Çıkarma Fonksiyonu
int cikar(int sayi1, int sayi2) {
    return sayi1 - sayi2;
}

// Çarpma Fonksiyonu
int carp(int sayi1, int sayi2) {
    return sayi1 * sayi2;
}

// Bölme Fonksiyonu
float bol(float sayi1, float sayi2) {
    if (sayi2 == 0) {
        printf("Hata: sifira bolme hatasi.\n");
        return 0;
    } else {
        return sayi1 / sayi2;
    }
}

int WinMain() {
    int secim;
    int sayi1, sayi2;
    int sonuc_int;
    float sonuc_float;

    printf("Hesap Makinesine Hosgeldiniz\n");
    printf("============================\n");

    // Kullanıcı seçim yapana kadar programın çalışmasını sağla
    while (1) {
        // Menüyü göster
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. carpma\n");
        printf("4. bolme\n");
        printf("5. Cikis\n");
        printf("seciminiz: ");
        scanf("%d", &secim);

        if (secim == 5) {
            break;
        }

        // İki sayıyı kullanıcıdan al
        printf("Birinci sayiyi girin: ");
        scanf("%d", &sayi1);
        printf("Ikinci sayiyi girin: ");
        scanf("%d", &sayi2);

        // Seçime göre işlem yap
        switch (secim) {
            case 1:
                sonuc_int = topla(sayi1, sayi2);
                printf("%d + %d = %d\n", sayi1, sayi2, sonuc_int);
                break;
            case 2:
                sonuc_int = cikar(sayi1, sayi2);
                printf("%d - %d = %d\n", sayi1, sayi2, sonuc_int);
                break;
            case 3:
                sonuc_int = carp(sayi1, sayi2);
                printf("%d * %d = %d\n", sayi1, sayi2, sonuc_int);
                break;
            case 4:
                sonuc_float = bol(sayi1, sayi2);
                printf("%d / %d = %.2f\n", sayi1, sayi2, sonuc_float);
                break;
            default:
                printf("Gecersiz secim.\n");
        }
    }

    printf("Hesap Makinesi kapatildi.\n");
    return 0;
}
