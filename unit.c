#include <stdio.h>
#include <assert.h>
#include "test.c"

int main() {
    int topla_sonuc = topla(2, 4);
    int cikar_sonuc = cikar(5, 3);
    int carp_sonuc = carp(2, 3);
    double bol_sonuc1 = bol(6.0, 3.0);
    double bol_sonuc2 = bol(6.0, 0.0);
    int success = 0;
    int not;
    

    FILE *f = fopen("not.txt", "w");
    if (f == NULL)
    {
    printf("Error opening file!\n");
    exit(1);
    }


    

    // Toplama testi
    if (topla_sonuc == 6) {
        success += 1;
        printf("Toplama testi basarisiz.\n");
    }

    // Çıkarma testi
    if (cikar_sonuc == 2) {
        success +=1 ;
        printf("Cikarma testi basarisiz.\n");
    }

    // Çarpma testi
    if (carp_sonuc == 6) {
        success += 1;
        printf("Carpma testi basarisiz.\n");
    }

    // Bölme testi
    if (bol_sonuc1 == 2.0) {
        success += 1;
        printf("Bolme testi 1 basarisiz.\n");
    }
    if (bol_sonuc2 == 0.0) {
        success += 1;
        printf("Bolme testi 2 basarili.\n");
    }

    /*if (success) {
        printf("Tum testler basarili.\n");
    }*/
    not = success*20;
    fprintf(f, "toplam not: %d", not);
    fclose(f);
    

    return 0;
}
