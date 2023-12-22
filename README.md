 int n;
  printf("Açık artırma için teklif sayısını giriniz: ");
  scanf("%d", &n);
açık arttırmadaki teklif sayısını alır




  Teklif teklifler[n];
  for (int i = 0; i < n; i++) {
    printf("Teklif %d numarasını giriniz: ", i + 1);
    scanf("%d", &teklifler[i].numara);
    printf("Teklif %d tutarını giriniz: ", i + 1);
    scanf("%d", &teklifler[i].teklif);
  teklifi verenin numarasını ve teklif tutarlarını alır


  Teklif enYuksekTeklif = teklifler[0];
  for (int i = 1; i < n; i++) {
    if (teklifler[i].teklif > enYuksekTeklif.teklif) {
      enYuksekTeklif = teklifler[i];
    en yüksek teklifi bulur


      printf("Açık artırmayı %d numaralı kişi kazandı.\n", enYuksekTeklif.numara);
  printf("Kazanan teklif: %d\n", enYuksekTeklif.teklif);
en yüksek teklifi ve kazananın numarasını yazdırır
