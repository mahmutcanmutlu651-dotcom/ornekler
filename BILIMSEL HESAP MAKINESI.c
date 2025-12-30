#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define GECMIS_DOSYASI "hesap_gecmisi.txt"

// Faktöriyel fonksiyonu
long long faktoriyel(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * faktoriyel(n - 1);
}

int main() {
    int secim;
    double s1, s2, sonuc;
    FILE *dosya;

    while (1) {
        printf("\n========= BILIMSEL HESAP MAKINESI  =========\n");
        printf("1. Toplama (+)     2. Cikarma (-)     3. Carpma (*)\n");
        printf("4. Bolme (/)       5. Us Alma (x^y)   6. Karekok (sqrt)\n");
        printf("7. Mod Alma (%%)    8. Mutlak Deger    9. Faktoriyel (!)\n");
        printf("10. Logaritma      11. Trigonometri   12. Gecmisi Gor/Sil\n");
        printf("0. CIKIS\nSeciminiz: ");
        scanf("%d", &secim);

        if (secim == 0) break;

        // Geçmişi görüntüleme ve silme işlemleri özel durumdur, dosya 'a' modunda açılmaz
        if (secim == 12) {
            printf("1. Gor  2. Sil: ");
            int gSecim; scanf("%d", &gSecim);
            if (gSecim == 1) {
                FILE *oku = fopen(GECMIS_DOSYASI, "r");
                char satir[100];
                if (oku == NULL) printf("Gecmis bos.\n");
                else {
                    while (fgets(satir, sizeof(satir), oku)) printf("%s", satir);
                    fclose(oku);
                }
            } else {
                FILE *sil = fopen(GECMIS_DOSYASI, "w"); fclose(sil);
                printf("Gecmis temizlendi.\n");
            }
            continue;
        }

        // Diğer matematiksel işlemler için dosyayı ekleme (append) modunda açıyoruz
        dosya = fopen(GECMIS_DOSYASI, "a");

        switch (secim) {
            case 1: // Toplama
                printf("Iki sayi: "); scanf("%lf %lf", &s1, &s2);
                sonuc = s1 + s2;
                printf("\n>>> Sonuc: %.2f + %.2f = %.2f\n", s1, s2, sonuc);
                if (dosya) fprintf(dosya, "Toplama: %.2f + %.2f = %.2f\n", s1, s2, sonuc);
                break;

            case 2: // Çıkarma
                printf("Iki sayi: "); scanf("%lf %lf", &s1, &s2);
                sonuc = s1 - s2;
                printf("\n>>> Sonuc: %.2f - %.2f = %.2f\n", s1, s2, sonuc);
                if (dosya) fprintf(dosya, "Cikarma: %.2f - %.2f = %.2f\n", s1, s2, sonuc);
                break;

            case 3: // Çarpma
                printf("Iki sayi: "); scanf("%lf %lf", &s1, &s2);
                sonuc = s1 * s2;
                printf("\n>>> Sonuc: %.2f * %.2f = %.2f\n", s1, s2, sonuc);
                if (dosya) fprintf(dosya, "Carpma: %.2f * %.2f = %.2f\n", s1, s2, sonuc);
                break;

            case 4: // Bölme
                printf("Iki sayi: "); scanf("%lf %lf", &s1, &s2);
                if (s2 != 0) {
                    sonuc = s1 / s2;
                    printf("\n>>> Sonuc: %.2f / %.2f = %.2f\n", s1, s2, sonuc);
                    if (dosya) fprintf(dosya, "Bolme: %.2f / %.2f = %.2f\n", s1, s2, sonuc);
                } else printf("Hata: Sifira bolunemez!\n");
                break;

            case 5: // Üs Alma
                printf("Taban ve Us: "); scanf("%lf %lf", &s1, &s2);
                sonuc = pow(s1, s2);
                printf("\n>>> Sonuc: %.2f ^ %.2f = %.2f\n", s1, s2, sonuc);
                if (dosya) fprintf(dosya, "Us: %.2f ^ %.2f = %.2f\n", s1, s2, sonuc);
                break;

            case 6: // Karekök
                printf("Sayi: "); scanf("%lf", &s1);
                if (s1 >= 0) {
                    sonuc = sqrt(s1);
                    printf("\n>>> Sonuc: sqrt(%.2f) = %.2f\n", s1, sonuc);
                    if (dosya) fprintf(dosya, "Karekok: sqrt(%.2f) = %.2f\n", s1, sonuc);
                } else printf("Hata: Negatif sayi girilemez!\n");
                break;

            case 7: // Mod Alma
                printf("Iki tam sayi (x y): ");
                int m1, m2; scanf("%d %d", &m1, &m2);
                printf("\n>>> Sonuc: %d %% %d = %d\n", m1, m2, m1 % m2);
                if (dosya) fprintf(dosya, "Mod: %d %% %d = %d\n", m1, m2, m1 % m2);
                break;

            case 8: // Mutlak Değer
                printf("Sayi: "); scanf("%lf", &s1);
                sonuc = fabs(s1);
                printf("\n>>> Sonuc: |%.2f| = %.2f\n", s1, sonuc);
                if (dosya) fprintf(dosya, "Mutlak Deger: |%.2f| = %.2f\n", s1, sonuc);
                break;

            case 9: // Faktöriyel
                printf("Sayi: "); int f; scanf("%d", &f);
                if (f >= 0) {
                    long long fSonuc = faktoriyel(f);
                    printf("\n>>> Sonuc: %d! = %lld\n", f, fSonuc);
                    if (dosya) fprintf(dosya, "Faktoriyel: %d! = %lld\n", f, fSonuc);
                } else printf("Hata: Negatif sayi olmaz!\n");
                break;

            case 10: // Logaritma
                printf("1. Log10  2. Ln: ");
                int lSecim; scanf("%d", &lSecim);
                printf("Sayi: "); scanf("%lf", &s1);
                if (s1 > 0) {
                    sonuc = (lSecim == 1) ? log10(s1) : log(s1);
                    printf("\n>>> Sonuc: %s(%.2f) = %.2f\n", (lSecim==1?"log10":"ln"), s1, sonuc);
                    if (dosya) fprintf(dosya, "Logaritma: %s(%.2f) = %.2f\n", (lSecim==1?"log10":"ln"), s1, sonuc);
                } else printf("Hata: Pozitif sayi girilmeli!\n");
                break;

            case 11: // Trigonometri
                printf("1. Sin  2. Cos  3. Tan: ");
                int tSecim; scanf("%d", &tSecim);
                printf("Derece: "); scanf("%lf", &s1);
                double rad = s1 * (M_PI / 180.0);
                if (tSecim == 1) sonuc = sin(rad);
                else if (tSecim == 2) sonuc = cos(rad);
                else sonuc = tan(rad);
                printf("\n>>> Sonuc: %s(%.2f deg) = %.2f\n", (tSecim==1?"sin":tSecim==2?"cos":"tan"), s1, sonuc);
                if (dosya) fprintf(dosya, "Trigo: %s(%.2f deg) = %.2f\n", (tSecim==1?"sin":tSecim==2?"cos":"tan"), s1, sonuc);
                break;

            default:
                printf("Gecersiz secim!\n");
        }

        if (dosya) fclose(dosya);
    }
    return 0;
}
