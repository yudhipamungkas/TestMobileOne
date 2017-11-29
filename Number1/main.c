#include <stdio.h>
#include <stdlib.h>
//Judul : ANALISA KASUS PERCABANGAN BERSARANG SEDERHANA
//Nama : YUDHI  TRI PAMUNGKAS
//NIM : A11.2017.10160

int main()
{
    printf("YUDHI TRI PAMUNGKAS\n");
    printf("A11.2017.10160\n\n");

    printf(" ===== ANALISA KASUS PERCABANGAN BERSARANG SEDERHANA =====\n\n");
    //KAMUS
        char nama [20], nim [20], nama_ortu[20], pekerjaan_ortu[20], pekerjaan_ortu_p[20], alamat[30];
        int semester, gaji_ortu;
        float ipk;
    //ALGORITMA
        printf("Masukkan: Nama anda                     : ");gets(nama);
        printf("          NIM anda                      : ");scanf("%s",&nim);
        fflush(stdin);
        printf("          Alamat anda                   : ");gets(alamat);
        printf("          Semester anda sekarang        : ");scanf("%d",&semester);
        fflush(stdin);
        printf("          Nama orang tua anda           : ");gets(nama_ortu);
        printf("          Pekerjaan orang tua anda      : ");gets(pekerjaan_ortu);
        printf("          Pekerjaan orang tua perempuan : ");gets(pekerjaan_ortu_p);
        printf("          Gaji orang tua anda per bulan : ");scanf("%d",&gaji_ortu);
        printf("          IPK anda                      : ");scanf("%f",&ipk);
        if(ipk>3.00)
        {
            if(gaji_ortu<=3000000 && semester>=5){printf("\nSelamat, Anda Berhak Menerima Beasiswa");}
            else{printf("\nMaaf Anda Belum Diterima");}
        }else{printf("\nMaaf Anda Belum Diterima");}
    return 0;
}
