#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char paket[20];
    int harga;
    int subtotal;
    int kuantitas;
    int tanggal_selesai;
    int tanggal_mulai;
} pesanan;

pesanan order[10];

bool user_is_inside = false;

//Set jumlah pesanan untuk mengakses index array of struct yang akan diisi
int jumlah_pesanan = 0;
//Function Prototyping

void menu();
void tampilan_pilihan();
void back_to_menu();


//Fungsi Menu

void greeting_message(){
    printf("_____________________________________________\n");
    printf("Selamat Datang di agent traveller sederhana !\n");
    printf("_____________________________________________\n\n");
}

void menu(){
    if(user_is_inside == false){
        greeting_message();
    }

    int pilihan;
    int jumlah;
    char pilih;

    char menu_paket[3][30] = {"paket A tujuan kota A", "paket B tujuan kota B", "paket C tujuan kota C"};


    printf("Pilihan Menu : \n\n");
    printf("======================================\n");
    for (int i = 0; i < 3 ; i++){
        printf("%d. %s\n", i + 1, menu_paket[i]);
    printf("======================================\n");
    }

    printf("\nMasukkan pilihan : ");
    scanf("%i", &pilihan);
    user_is_inside = true;

    int pilihan_libur, waktu_libur, pilih_tanggal_mulai;
    int harga_hotel, tiket_bus, tiket_pesawat;
    char hotel;
    char pesan_tiket_wisata, beli_tiket, tiket_kendaraan;

    tiket_pesawat = 400000;
    tiket_bus = 200000;

    switch(pilihan){
        case 1 :
            printf("============================================================================================\n");
            printf("\n1. paket A tujuan kota A dengan waktu 3 hari dengan harga 1.200.000\n");
            printf("2. paket A tujuan kota A dengan harga dan tempat yang menyesuaikan\n");
            printf("3. paket A tujuan kota A dengan harga 500.000/hari, bisa milih waktu sesuai kebutuhan.\n\n");
            printf("============================================================================================\n");
            getchar();
            printf("apakah anda ingin memesan Y/N: ");
            scanf("%c", &pilih);
            printf("\n");
            if(pilih == 'Y' || pilih == 'y'){
                printf("pilih paket anda : ");
                scanf("%i", &pilihan_libur);

                if(pilihan_libur == 1){
                printf("pesan tiket anda : ");
                scanf("%i", &jumlah);
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 1200000 * jumlah;
                jumlah_pesanan += 1;
                }
                else if(pilihan_libur == 2){
                printf("-------------------------------------------------------------------------------\n");
                printf("1. pilihan tiket kendaraan : \n");
                printf("A. tiket kendaraan bus Rp. 200.000\nB. tiket kendaraan pesawat Rp. 400.000\n");
                printf("-------------------------------------------------------------------------------\n");
                getchar();
                printf("masukan pilihan : ");
                scanf("%c", &tiket_kendaraan);
                if (tiket_kendaraan == 'A' || tiket_kendaraan == 'a');{
                printf("----------------------------------------------\n");
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 150.000\nB. hotel bintang 4 dengan harga 200.000\nC. hotel bintang 5 dengan harga 250.000\n");
                printf("----------------------------------------------\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 150000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 150000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'b' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 2000000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                         order[jumlah_pesanan].subtotal = 250000 * jumlah + (tiket_bus + 170000);
                         order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                         order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                         jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                        }}
                break;}//switch
                }//tutup if bus
                else if (tiket_kendaraan == 'b' || tiket_kendaraan == 'B'){
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 150.000\nB. hotel bintang 4 dengan harga 200.000\nC. hotel bintang 5 dengan harga 250.000\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                    printf("berapa hari anda ingin mengambil waktu liburan : ");
                    scanf("%i", &jumlah);
                    printf("silahkan pilih tanggal berangkat : ");
                    scanf("%i", &pilih_tanggal_mulai);
                    getchar();
                    printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                    scanf("%c", &pesan_tiket_wisata);
                            if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 150000 * jumlah + tiket_pesawat + 170000;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;}

                            else{
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 150000 * jumlah + tiket_pesawat;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;
                }
                break;

                    case 'b' :
                    printf("berapa hari anda ingin mengambil waktu liburan : ");
                    scanf("%i", &jumlah);
                    printf("silahkan pilih tanggal berangkat : ");
                    scanf("%i", &pilih_tanggal_mulai);
                    getchar();
                    printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                    scanf("%c", &pesan_tiket_wisata);
                            if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 2000000 * jumlah + tiket_pesawat + 170000;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;}

                            else{
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_pesawat;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                    printf("berapa hari anda ingin mengambil waktu liburan : ");
                    scanf("%i", &jumlah);
                    printf("silahkan pilih tanggal berangkat : ");
                    scanf("%i", &pilih_tanggal_mulai);
                    getchar();
                    printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                    scanf("%c", &pesan_tiket_wisata);
                            if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_pesawat + 170000;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;}

                            else{
                            strcpy(order[jumlah_pesanan].paket, menu_paket[0]);
                            order[jumlah_pesanan].kuantitas = jumlah;
                            order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_pesawat;
                            order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                            order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                            jumlah_pesanan += 1;
                        }
                break;
                }
                }// tutup else if pil 2
                else{
                printf("dengan harga Rp. 550.000/hari anda sudah mendapatkan:\n1. tiket pulang balik.\n2. tiket kamar hotel.\n3. tiket wisata.\n\n");
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 550000 * jumlah;
                order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                jumlah_pesanan += 1;
                }
            }
            break;

        case 2 :
            printf("============================================================================================\n");
            printf("\n1. paket B tujuan kota B dengan waktu 4 hari dengan harga 1.300.000\n");
            printf("2. paket A tujuan kota A dengan harga dan tempat yang menyesuaikan\n");
            printf("3. paket B tujuan kota B dengan harga 550.000/hari, bisa milih waktu sesuai kebutuhan.\n");
            printf("============================================================================================\n");
            getchar();
            printf("apakah anda ingin memesan Y/N: ");
            scanf("%c", &pilih);
            printf("\n");
            if(pilih == 'Y' || pilih == 'y'){
                printf("pilih paket anda : ");
                scanf("%i", &pilihan_libur);

                if(pilihan_libur == 1){
                printf("pesan tiket anda : ");
                scanf("%i", &jumlah);
                strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 1300000 * jumlah;
                jumlah_pesanan += 1;
                }
                else if(pilihan_libur == 2){
                printf("-------------------------------------------------------------------------------\n");
                printf("1. pilihan tiket kendaraan : \n");
                printf("A. tiket kendaraan bus Rp. 200.000\nB. tiket kendaraan pesawat Rp. 400.000\n");
                printf("-------------------------------------------------------------------------------\n");
                getchar();
                printf("masukan pilihan : ");
                scanf("%c", &tiket_kendaraan);
                if (tiket_kendaraan == 'A' || tiket_kendaraan == 'a');{
                printf("----------------------------------------------\n");
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 300.000\nB. hotel bintang 4 dengan harga 350.000\nC. hotel bintang 5 dengan harga 400.000\n");
                printf("----------------------------------------------\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'b' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 350000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 350000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                         order[jumlah_pesanan].subtotal = 400000 * jumlah + (tiket_bus + 170000);
                         order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                         order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                         jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 400000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                        }}
                break;}//switch
                }//tutup if bus
                else if (tiket_kendaraan == 'b' || tiket_kendaraan == 'B'){
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 300.000\nB. hotel bintang 4 dengan harga 350.000\nC. hotel bintang 5 dengan harga 400.000\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_pesawat + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_pesawat;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;
                    case 'b' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                    strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                    order[jumlah_pesanan].kuantitas = jumlah;
                    order[jumlah_pesanan].subtotal = 350000 * jumlah + tiket_pesawat + 170000;
                    order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                    order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                    jumlah_pesanan += 1;}

                else{
                    strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                    order[jumlah_pesanan].kuantitas = jumlah;
                    order[jumlah_pesanan].subtotal = 350000 * jumlah + tiket_pesawat;
                    order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                    order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                    jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 400000 * jumlah + tiket_pesawat + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 400000 * jumlah + tiket_pesawat;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                }

                }
                else{
                printf("dengan harga Rp. 550.000/hari anda sudah mendapatkan:\n1. tiket pulang balik.\n2. tiket kamar hotel.\n3. tiket wisata.\n\n");
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 550000 * jumlah;
                order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                jumlah_pesanan += 1;
                }
            }
            break;
            case 3 :
            printf("============================================================================================\n");
            printf("\n1. paket C tujuan kota C dengan waktu 4 hari dengan harga 2.000.000\n");
            printf("2. paket C tujuan kota C dengan harga dan tempat yang menyesuaikan\n");
            printf("3. paket C tujuan kota C dengan harga 550.000/hari, bisa milih waktu sesuai kebutuhan.\n");
            printf("============================================================================================\n");
            getchar();
            printf("apakah anda ingin memesan Y/N: ");
            scanf("%c", &pilih);
            printf("\n");
            if(pilih == 'Y' || pilih == 'y'){
                printf("pilih paket anda : ");
                scanf("%i", &pilihan_libur);

                if(pilihan_libur == 1){
                printf("pesan tiket anda : ");
                scanf("%i", &jumlah);
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 2000000 * jumlah;
                jumlah_pesanan += 1;
                }
                else if(pilihan_libur == 2){
                printf("-------------------------------------------------------------------------------\n");
                printf("1. pilihan tiket kendaraan : \n");
                printf("A. tiket kendaraan bus Rp. 200.000\nB. tiket kendaraan pesawat Rp. 400.000\n");
                printf("-------------------------------------------------------------------------------\n");
                getchar();
                printf("masukan pilihan : ");
                scanf("%c", &tiket_kendaraan);
                if (tiket_kendaraan == 'A' || tiket_kendaraan == 'a');{
                printf("----------------------------------------------\n");
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 200.000\nB. hotel bintang 4 dengan harga 250.000\nC. hotel bintang 5 dengan harga 300.000\n");
                printf("----------------------------------------------\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'b' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_bus + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                         order[jumlah_pesanan].kuantitas = jumlah;
                         order[jumlah_pesanan].subtotal = 300000 * jumlah + (tiket_bus + 170000);
                         order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                         order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                         jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_bus;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                        }}
                break;}//switch
                }//tutup if bus
                else if (tiket_kendaraan == 'b' || tiket_kendaraan == 'B'){
                printf("2. pilihan hotel : \n");
                printf("A. hotel bintang 3 dengan harga 300.000\nB. hotel bintang 4 dengan harga 350.000\nC. hotel bintang 5 dengan harga 400.000\n");
                getchar();
                printf("silahkan masukan pilihan hotel : ");
                scanf("%c", &hotel);
                switch(hotel){
                    case 'a' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                        if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_pesawat + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                        else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 200000 * jumlah + tiket_pesawat;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;
                    case 'b' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y :");
                scanf("%c", &pesan_tiket_wisata);
                if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_pesawat + 170000;
                order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                jumlah_pesanan += 1;}

                else{
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 250000 * jumlah + tiket_pesawat;
                order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                jumlah_pesanan += 1;
                }
                break;

                    case 'c' :
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                getchar();
                printf("ingin membeli tiket wisata seharga Rp 170.000? jika iya ketik y : ");
                scanf("%c", &pesan_tiket_wisata);
                if (pesan_tiket_wisata == 'y' || pesan_tiket_wisata == 'Y'){
                        strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_pesawat + 170000;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;}

                else{
                        strcpy(order[jumlah_pesanan].paket, menu_paket[1]);
                        order[jumlah_pesanan].kuantitas = jumlah;
                        order[jumlah_pesanan].subtotal = 300000 * jumlah + tiket_pesawat;
                        order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                        order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                        jumlah_pesanan += 1;
                }
                break;
                }
                }
                else{
                printf("dengan harga Rp. 550.000/hari anda sudah mendapatkan:\n1. tiket pulang balik.\n2. tiket kamar hotel.\n3. tiket wisata.\n\n");
                printf("berapa hari anda ingin mengambil waktu liburan : ");
                scanf("%i", &jumlah);
                printf("silahkan pilih tanggal berangkat : ");
                scanf("%i", &pilih_tanggal_mulai);
                strcpy(order[jumlah_pesanan].paket, menu_paket[2]);
                order[jumlah_pesanan].kuantitas = jumlah;
                order[jumlah_pesanan].subtotal = 550000 * jumlah;
                order[jumlah_pesanan].tanggal_mulai = pilih_tanggal_mulai;
                order[jumlah_pesanan].tanggal_selesai = pilih_tanggal_mulai + jumlah;
                jumlah_pesanan += 1;
                }
            }
            break;
        default :
            printf("Pilihan anda tidak ada, ulangi lagi!\n\n");
            menu();
    }

    char pesanlagi;

    printf("Ingin memesan lagi ? input y jika ya : ");
    fflush(stdin);
    scanf("%c", &pesanlagi);

    if(pesanlagi == 'Y' || pesanlagi == 'y'){
        menu();
    }
    else{
        tampilan_pilihan();
    }
}


void tampilan_pilihan(){
    printf("Pesanan Kamu : \n\n");
    int total = 0;
    int diskon, diskon1, diskon2;
    printf("%-20s \t%-20s %-20s\t %-20s\t %-20s\n", "Pesanan", "Kuantitas", "Subtotal", "tanggal mulai", "tanggal selesai");
    for (int i = 0; i < jumlah_pesanan; i++){
        printf("%-20s \t%-20i %-20d\t %-20i\t %-20i\n", order[i].paket, order[i].kuantitas, order[i].subtotal, order[i].tanggal_mulai, order[i].tanggal_selesai);
        total += order[i].subtotal;
    }

    printf("\nTotal : Rp. %i\n", total);
    diskon = total * 10;
    diskon1 = diskon / 100;
    diskon2 = total - diskon1;
    if (total >= 5000000){
        printf("karena anda memesan paket lebih dari 5000000 maka anda mendapatkan diskon sebesar 10%%\n");
        printf("total harga yang harus dibayar %i\n", diskon2);
    }
    printf("Silahkan lakukan pembayaran!\n");
}
//Bagian Program Utama
int main(){

    menu();
}
