#include <stdio.h>
#include <stdlib.h>
//Judul : sistem  kasir  pada  perusahaannya CAT
//Nama : YUDHI TRI PAMUNGKAS
//NIM : A11.2017.10160

int main()
{
    printf("YUDHI TRI PAMUNGKAS\n");
    printf("A11.2017.10160\n\n");

    printf("===== SISTEM KASIR PADA PERUSAHAAN CAT =====\n\n");
    //KAMUS
    char nama[20],bulan[15];
    int luas_dinding, jml_cat, biaya, tanggal, tahun, pilihan;
    //ALGORITMA
    printf("Masukkan : >Nama Pembeli      : ");gets(nama);
    printf("           >Tanggal Pembelian : ");scanf("%d %s %d", &tanggal, &bulan, &tahun);
    printf("\n\n >>>>>>>>   PILIHAN CAT   <<<<<<<< \n");
    printf("1. Dulux\n");
    printf("2. Catylac\n");
    printf("3. Nippon Paint\n");
    printf("4. Avitex\n");
    printf("5. Mowilex\n");
    printf(">>>Masukkan Nomor Pilihan Cat : ");scanf("%d",&pilihan);

    switch(pilihan){
case 1 :
    printf("\n\n>>DULUX\n");
    printf("Masukkan luas dinding : ");scanf("%d", &luas_dinding);
    if(luas_dinding%10!=0){
        jml_cat=(luas_dinding/10)+1;
    }else{jml_cat=luas_dinding/10;}
    printf("Jumlah cat yang dibutuhkan: %d \n",jml_cat);
    if(jml_cat>=1 && jml_cat<=25)
    {
            biaya=jml_cat*24500;
    }
    else if(jml_cat>=26 && jml_cat<=50)
    {
            biaya=jml_cat*23000;
    }
    else if(jml_cat>50){biaya=jml_cat*22000;}
    else{printf("Input Tidak Valid");}
    break;
case 2 :
    printf("\n\n>>CATYLAC\n");
    printf("Masukkan luas dinding : ");scanf("%d", &luas_dinding);
    if(luas_dinding%10!=0){
        jml_cat=(luas_dinding/10)+1;
    }else{jml_cat=luas_dinding/10;}
    printf("Jumlah cat yang dibutuhkan: %d \n",jml_cat);
    if(jml_cat>=1 && jml_cat<=25) {biaya=jml_cat*23500;}
    else if(jml_cat>=26 && jml_cat<=50){biaya=jml_cat*22500;}
    else if(jml_cat>50){biaya=jml_cat*21000;}
    else{printf("Input Tidak Valid");}
    break;
case 3 :
    printf("\n\n>>NIPPON PAINT\n");
    printf("Masukkan luas dinding : ");scanf("%d", &luas_dinding);
    if(luas_dinding%10!=0){
        jml_cat=(luas_dinding/10)+1;
    }else{jml_cat=luas_dinding/10;}
    printf("Jumlah cat yang dibutuhkan: %d \n",jml_cat);
    if(jml_cat>=1 && jml_cat<=25) {biaya=jml_cat*23500;}
    else if(jml_cat>=26 && jml_cat<=50){biaya=jml_cat*22000;}
    else if(jml_cat>50){biaya=jml_cat*20500;}
    else{printf("Input Tidak Valid");}
    break;
case 4 :
    printf("\n\n>>AVITEX\n");
    printf("Masukkan luas dinding : ");scanf("%d", &luas_dinding);
    if(luas_dinding%10!=0){
        jml_cat=(luas_dinding/10)+1;
    }else{jml_cat=luas_dinding/10;}
    printf("Jumlah cat yang dibutuhkan: %d \n",jml_cat);
    if(jml_cat>=1 && jml_cat<=25) {biaya=jml_cat*20000;}
    else if(jml_cat>=26 && jml_cat<=50){biaya=jml_cat*19000;}
    else if(jml_cat>50){biaya=jml_cat*17500;}
    else{printf("Input Tidak Valid");}
    break;
case 5 :
    printf("\n\n>>MOWILEX\n");
    printf("Masukkan luas dinding : ");scanf("%d", &luas_dinding);
    if(luas_dinding%10!=0){
        jml_cat=(luas_dinding/10)+1;
    }else{jml_cat=luas_dinding/10;}
    printf("Jumlah cat yang dibutuhkan: %d \n",jml_cat);
    if(jml_cat>=1 && jml_cat<=25) {biaya=jml_cat*18500;}
    else if(jml_cat>=26 && jml_cat<=50){biaya=jml_cat*17000;}
    else if(jml_cat>50){biaya=jml_cat*16000;}
    else{printf("Input Tidak Valid");}
    break;

    }
    printf("\n\n==========>>NOTA PEMBELIAN<<==========\n");
    printf("> Nama Konsumen              : %s \n",nama);
    printf("> Tanggal Pembelian          : %d %s %d \n",tanggal, bulan, tahun);
    printf("> Jumlah Cat yang diperlukan : %d \n",jml_cat);
    printf("> Biaya                      : Rp.%d",biaya);
    return 0;
}
