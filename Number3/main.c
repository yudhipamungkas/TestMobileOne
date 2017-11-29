#include <stdio.h>
#include <stdlib.h>
//Judul : MEMBUAT CONTOH KASUS PERCABANGAN BERSARANG
//Nama : YUDHI TRI PAMUNGKAS
//NIM : A11.2017.10160

///CONTOH KASUS PERCABANGAN BERSARANG
///Contoh : Pemilihan Paket Menu Sarapan Pada Sebuah Restoran
int main()
{
    printf("YUDHI TRI PAMUNGKAS\n");
    printf("A11.2017.10160\n\n");

    printf("===== MEMBUAT CONTOH KASUS PERCABANGAN BERSARANG =====\n\n");
    //KAMUS
    int pilihan1, pilihan_Nasi, pilihan_Ayam, pilihan_Bubur, harga, jumlah;//INPUT
    //ALGORITMA
    printf("=======>>> PAKET MENU SARAPAN <<<=======\n\n");
    printf("1. Nasi Goreng + Teh Hangat\n");
    printf("2. Ayam Goreng + Es Jeruk\n");
    printf("3. Bubur Ayam + Es Teh\n");
    printf("\n>>>Pilih paket yang akan dipesan : ");scanf("%d",&pilihan1);

    switch(pilihan1){//PERCABANGAN PERTAMA
    case 1 : {
    printf("\n>>Anda memesan paket Nasi Goreng + Teh Hangat\n");
    printf(">Pilih Variasi : \n");
    printf("1. Nasi Goreng Ayam \n");
    printf("2. Nasi Goreng Telur \n");
    printf("Masukkan Pilihan anda   : ");scanf("%d",&pilihan_Nasi);
        switch(pilihan_Nasi){//PERCABANGAN KEDUA
        case 1 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*12000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;
        case 2 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*10000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;}}break;//OUTPUT
    case 2 :{
    printf("\n>>Anda memesan paket Ayam Goreng + Es jeruk\n");
    printf(">Pilih Variasi : \n");
    printf("1. Ayam Goreng Sayap \n");
    printf("2. Ayam Goreng Paha Atas \n");
    printf("Masukkan Pilihan anda   : ");scanf("%d",&pilihan_Ayam);
        switch(pilihan_Ayam){
        case 1 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*11000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;
        case 2 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*14000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;}}break;
    case 3 :{
    printf("\n>>Anda memesan paket Bubur Ayam + Es Teh\n");
    printf(">Pilih Variasi : \n");
    printf("1. Bubur Ayam biasa \n");
    printf("2. Bubur Ayam spesial \n");
    printf("Masukkan Pilihan anda   : ");scanf("%d",&pilihan_Bubur);
        switch(pilihan_Bubur){
        case 1 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*13000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;
        case 2 :{printf("Masukkan Jumlah pesanan : ");scanf("%d",&jumlah);
                 harga=jumlah*15000;
                 printf("\nHarganya adalah         :Rp.%d \n",harga);}break;}}break;
    }
    return 0;//AKHIR PROGRAM
}
