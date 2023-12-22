//
//  main.c
//  1230505007emirhan
//
//  Created by Emirhan on 22.12.2023.
//

#include <stdio.h>


typedef struct {
  int numara;
  int teklif;
} Teklif;

int main(void) {
  // açık artırma için teklif sayısını alın
  int n;
  printf("Açık artırma için teklif sayısını giriniz: ");
  scanf("%d", &n);

  // açık artırma için teklifleri okuyun
  Teklif teklifler[n];
  for (int i = 0; i < n; i++) {
    printf("Teklif %d numarasını giriniz: ", i + 1);
    scanf("%d", &teklifler[i].numara);
    printf("Teklif %d tutarını giriniz: ", i + 1);
    scanf("%d", &teklifler[i].teklif);
  }

  // en yüksek teklifi bulun
  Teklif enYuksekTeklif = teklifler[0];
  for (int i = 1; i < n; i++) {
    if (teklifler[i].teklif > enYuksekTeklif.teklif) {
      enYuksekTeklif = teklifler[i];
    }
  }

  // en yüksek teklifi ve kazananın numarasını yazdırın
  printf("Açık artırmayı %d numaralı kişi kazandı.\n", enYuksekTeklif.numara);
  printf("Kazanan teklif: %d\n", enYuksekTeklif.teklif);

  return 0;
}
