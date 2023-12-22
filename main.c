//
//  main.c
//  1230505007klu
//
//  Created by Emirhan on 22.12.2023.
//

#include <stdio.h>

// Teklif verenin bilgilerini içeren struct
struct Teklif {
    int teklifveren_no;  // Teklif verenin numarası
    double teklif;       // Teklif miktarı
};

int main(void) {
    // En fazla 10 teklifin bilgisini saklamak için bir dizi oluştur
    struct Teklif teklifler[10];

    // Sayacı başlat
    int i = 0;

    // Teklifleri ve teklif veren numaralarını topla (en fazla 10 teklif)
    while (i < 10) {
        printf("Teklif veren %d, teklifinizi girin: ", i + 1);
        scanf("%lf", &teklifler[i].teklif);
        teklifler[i].teklifveren_no = i + 1; // Teklif veren numarasını sakla
        i++;

        // Kontrol et ve döngüyü sonlandır
        if (i == 10) {
            break;
        }
    }

    // Kazanan teklifi ve teklif veren numarasını bul
    double en_yuksek_teklif = teklifler[0].teklif;
    int kazanan_teklifveren_no = teklifler[0].teklifveren_no;

    // Sayacı sıfırla
    i = 1;

    while (i < 10) {
        // En yüksek teklifi bulmak için teklifleri karşılaştır
        if (teklifler[i].teklif > en_yuksek_teklif) {
            en_yuksek_teklif = teklifler[i].teklif;
            kazanan_teklifveren_no = teklifler[i].teklifveren_no;
        }
        i++;
    }

    // Kazananı ve kazanan teklifi yazdır
    printf("Kazanan teklif veren: %d\n", kazanan_teklifveren_no);
    printf("Ödeme: %.2f TL\n", en_yuksek_teklif);

    return 0;
}
