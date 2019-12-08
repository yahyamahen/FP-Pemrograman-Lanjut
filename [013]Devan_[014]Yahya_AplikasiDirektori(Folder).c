#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

<<<<<<< HEAD
//Deklarasi Struct
struct tanggalPembuatan{
	int tanggal;
	int bulan;
	char ketbulan[50];
	int tahun;
	char cari;
}; typedef struct tanggalPembuatan ttlpem;

struct jenis{
	char ekstensi[50];
	char jenis[50];
}; typedef struct jenis jns;

struct file{
	char id_file[50];
	char nama_file[50];
	char owner[50];
	jns jnsfl;
	ttlpem ttlfl; 
}; typedef struct file fl;
fl a[50];

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/
=======
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20

//Deklarasi Fungsi Prototipe
void splashscreen();
void menu_utama();
void tambah_data();
void view_data();
void cari_data();
void ubah_data();
void sort_data();

<<<<<<< HEAD
/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Pemrosesan Utama
=======
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
int main(){
	system("color B");
	splashscreen();
	menu_utama();	
	return 0;
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Splashscreen
void splashscreen(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t      ____________________________________________\n");
	printf("\t\t\t\t\t\t\t     |              PEMROGRAMAN LANJUT A          |\n");
	printf("\t\t\t\t\t\t\t     |         -Aplikasi Direktori (Folder)-      |\n");
	printf("\t\t\t\t\t\t\t     |____________________________________________|\n");
	printf("\t\t\t\t\t\t\t     |         Nama : Devan Cakra Mudra Wijaya    |\n");
	printf("\t\t\t\t\t\t\t     |         NPM  : 18081010013                 |\n");
	printf("\t\t\t\t\t\t\t     |                                            |\n");
	printf("\t\t\t\t\t\t\t     |         Nama : Rizqi Yahya Mahendra        |\n");
	printf("\t\t\t\t\t\t\t     |         NPM  : 18081010014                 |\n");
	printf("\t\t\t\t\t\t\t     |____________________________________________|\n\n");
	printf("\n\t\t\t\t\t\t\t          Tekan [ENTER] untuk memulai program!!!");
	getch();
	system("cls");
}

<<<<<<< HEAD
/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Deklarasi Variabel Global
int pilihan,n=0;

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Input Data
void input(int i){
	printf("[File ke-%d] \n", i+1);
	printf("- Masukan ID File         	  : "); fflush (stdin); gets(a[i].id_file);
	printf("- Masukan Nama File      	  : "); fflush (stdin); gets(a[i].nama_file);
	printf("- Masukan Owner File        	  : "); fflush (stdin); gets(a[i].owner);
	printf("- Masukan Jenis File    	  : "); fflush (stdin); gets(a[i].jnsfl.jenis);
	printf("- Masukan Ekstensi File   	  : "); fflush (stdin); gets(a[i].jnsfl.ekstensi);
	do{
		printf("- Masukan Tanggal Pem File (1-31) : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tanggal);
	}while(a[i].ttlfl.tanggal < 1 || a[i].ttlfl.tanggal > 30);
	do{
		printf("- Masukan Bulan Pem File(1-12)    : "); fflush (stdin); scanf("%d",&a[i].ttlfl.bulan);
		if(a[i].ttlfl.bulan == 1)
			strcpy(a[i].ttlfl.ketbulan,"Januari");
		else if(a[i].ttlfl.bulan == 2)
			strcpy(a[i].ttlfl.ketbulan,"Februari");
		else if(a[i].ttlfl.bulan == 3)
			strcpy(a[i].ttlfl.ketbulan,"Maret");
		else if(a[i].ttlfl.bulan == 4)
			strcpy(a[i].ttlfl.ketbulan,"April");
		else if(a[i].ttlfl.bulan == 5)
			strcpy(a[i].ttlfl.ketbulan,"Mei");
		else if(a[i].ttlfl.bulan == 6)
			strcpy(a[i].ttlfl.ketbulan,"Juni");
		else if(a[i].ttlfl.bulan == 7)
			strcpy(a[i].ttlfl.ketbulan,"Juli");
		else if(a[i].ttlfl.bulan == 8)
			strcpy(a[i].ttlfl.ketbulan,"Agustus");
		else if(a[i].ttlfl.bulan == 9)
			strcpy(a[i].ttlfl.ketbulan,"September");
		else if(a[i].ttlfl.bulan == 10)
			strcpy(a[i].ttlfl.ketbulan,"Oktober");
		else if(a[i].ttlfl.bulan == 11)
			strcpy(a[i].ttlfl.ketbulan,"November");
		else if(a[i].ttlfl.bulan == 12)
			strcpy(a[i].ttlfl.ketbulan,"Desember");
	}while(a[i].ttlfl.bulan < 1 || a[i].ttlfl.bulan > 13);
	printf("- Masukan Tahun Pem File    	  : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tahun);
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Output (View Data)
void view(int i){
	printf("\n[File ke-%d]", i+1);
	printf("\n- ID File          : %s", a[i].id_file);
	printf("\n- Nama File        : %s", a[i].nama_file);
	printf("\n- Owner File       : %s", a[i].owner);
	printf("\n- Jenis File       : %s", a[i].jnsfl.jenis);
	printf("\n- Ekstensi File    : %s", a[i].jnsfl.ekstensi);
	printf("\n- Tanggal Pem File : %d %s %d", a[i].ttlfl.tanggal, a[i].ttlfl.ketbulan, a[i].ttlfl.tahun);
	printf("\n");
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Ubah Data
void updatefile(int i){
	printf("\n[File ke-%d] \n", i+1);
	printf("- Ubah Nama File        : "); fflush (stdin); gets(a[i].nama_file);
	printf("- Ubah Owner File       : "); fflush (stdin); gets(a[i].owner);
	printf("- Ubah Jenis File       : "); fflush (stdin); gets(a[i].jnsfl.jenis);
	printf("- Ubah Ekstensi File    : "); fflush (stdin); gets(a[i].jnsfl.ekstensi);
	do{
		printf("- Ubah Tanggal Pem File : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tanggal);
	}while(a[i].ttlfl.tanggal < 1 || a[i].ttlfl.tanggal > 30);
	
	do{
		printf("- Ubah Bulan Pem File   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.bulan);
		if(a[i].ttlfl.bulan == 1)
			strcpy(a[i].ttlfl.ketbulan,"Januari");
		else if(a[i].ttlfl.bulan == 2)
			strcpy(a[i].ttlfl.ketbulan,"Februari");
		else if(a[i].ttlfl.bulan == 3)
			strcpy(a[i].ttlfl.ketbulan,"Maret");
		else if(a[i].ttlfl.bulan == 4)
			strcpy(a[i].ttlfl.ketbulan,"April");
		else if(a[i].ttlfl.bulan == 5)
			strcpy(a[i].ttlfl.ketbulan,"Mei");
		else if(a[i].ttlfl.bulan == 6)
			strcpy(a[i].ttlfl.ketbulan,"Juni");
		else if(a[i].ttlfl.bulan == 7)
			strcpy(a[i].ttlfl.ketbulan,"Juli");
		else if(a[i].ttlfl.bulan == 8)
			strcpy(a[i].ttlfl.ketbulan,"Agustus");
		else if(a[i].ttlfl.bulan == 9)
			strcpy(a[i].ttlfl.ketbulan,"September");
		else if(a[i].ttlfl.bulan == 10)
			strcpy(a[i].ttlfl.ketbulan,"Oktober");
		else if(a[i].ttlfl.bulan == 11)
			strcpy(a[i].ttlfl.ketbulan,"November");
		else if(a[i].ttlfl.bulan == 12)
			strcpy(a[i].ttlfl.ketbulan,"Desember");
	}while(a[i].ttlfl.bulan < 1 || a[i].ttlfl.bulan > 13);
	printf("- Ubah Tahun Pem File   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tahun);
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Insertion Sort
void InsertionSort1(fl arr[], int n) // ID File
{
    int i, j;
    fl key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while((j >= 0) && (strcmp(arr[j+1].id_file, arr[j].id_file)<0)){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void InsertionSort2(fl arr[], int n) // Nama File
{
    int i, j;
    fl key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; (j >= 0) && (strcmp(arr[j+1].nama_file, arr[j].nama_file)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort3(fl arr[], int n) // Owner
{
    int i, j;
    fl key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; (j >= 0) && (strcmp(arr[j+1].owner, arr[j].owner)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort4(fl arr[], int n) // Jenis File
{
    int i, j;
    fl key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; (j >= 0) && (strcmp(arr[j+1].jnsfl.jenis, arr[j].jnsfl.jenis)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort5(fl arr[], int n) // Ekstensi File
{
    int i, j;
    fl key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; (j >= 0) && (strcmp(arr[j+1].jnsfl.ekstensi, arr[j].jnsfl.ekstensi)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort7(fl arr[], int n) // Bulan File
{
    int i, j;
    fl key;

    for(i = 1; i < n; i++){
        key = arr[i];
        for (j = i - 1; (j >= 0) && (arr[j].ttlfl.tahun > arr[j+1].ttlfl.tahun); j--){
            arr[j + 1] = arr[j];
            	for (j = i - 1; (j >= 0) && (arr[j].ttlfl.tahun == arr[j+1].ttlfl.tahun) && (arr[j].ttlfl.bulan > arr[j+1].ttlfl.bulan); j--){
            		arr[j + 1] = arr[j];
        		 	    for (j = i - 1; (j >= 0) && (arr[j].ttlfl.tahun == arr[j+1].ttlfl.tahun) && (arr[j].ttlfl.bulan == arr[j+1].ttlfl.bulan) && (arr[j].ttlfl.tanggal > arr[j+1].ttlfl.tanggal); j--){
         				   arr[j + 1] = arr[j];
       					}
        		}
        }
        arr[j + 1] = key;
    }
}

=======
//Deklarasi Variabel Global
int pilihan;

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
//Menu Utama
void menu_utama(){
	do{
		menu:
		printf("\n\t __________________________________________");
		printf("\n\t|                 MENU UTAMA               |");    
		printf("\n\t|__________________________________________|"); 
		printf("\n\t|  1. Tambah Data                          |");
		printf("\n\t|  2. View Data                            |");
		printf("\n\t|  3. Cari Data                            |");
		printf("\n\t|  4. Ubah Data                            |");
		printf("\n\t|  5. Sort Data                            |");
		printf("\n\t|  6. Keluar                               |");
		printf("\n\t|__________________________________________|");
		printf("\n\tMasukkan pilihan menu [1-6] = ");
		scanf("%d", &pilihan);
		system("cls");
		
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			
		switch(pilihan){
		case 1 :
		{
			system("cls");
			tambah_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 2 :
		{
			system("cls");
			view_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 3 :
		{
			system("cls");
			cari_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 4 :
		{
			system("cls");
			ubah_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 5 :
		{
			system("cls");
			sort_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 6 :
		{
			printf("\n\t\t\t\t\t     +=============================================================================+");
			printf("\n\t\t\t\t\t     |          Terimakasih telah menggunakan Aplikasi Direktori (Folder)....      |");
			printf("\n\t\t\t\t\t     +=============================================================================+");
			printf("\n\t\t\t\t\t                    COPYRIGHT : DEVAN CAKRA M.W, RIZQI YAHYA MAHENDRA");
			printf("\n\t\t\t\t\t                         - TEKNIK INFORMATIKA UPN VETERAN V JATIM - \n\n\n");
			getch();
			exit(0);
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		default :
		{
			printf("\n\n[Keterangan] :");
			printf("\n ______________________________________________________ ");
			printf("\n| Pilihan menu tidak ditemukan...                      |");
			printf("\n|______________________________________________________|");
			printf("\nPress [ENTER] to back to menu\n");
			getch();
			system("cls");
			menu_utama();
		}
	}
	}while(pilihan>=1 && pilihan<=6);
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Tambah Data
void tambah_data(){
	system("cls");
	printf("\n--- Input data file ---\n\n");
<<<<<<< HEAD
	input(n);
	n++;
	printf("\n\n[Keterangan] :");
	printf("\n ______________________________________________________ ");
	printf("\n| Data file berhasil ditambahkan...                    |");
	printf("\n|______________________________________________________|");
=======
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
	printf("\n>> Press [ENTER] to back to menu\n");
	getch();
	system("cls");
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//View Data
void view_data(){
	int i;
	system("cls");
	printf("\n--- View data file ---\n");
<<<<<<< HEAD
	if(n==0){
		printf("\n\n[Keterangan] :");
		printf("\n ______________________________________________________ ");
		printf("\n| Masukan data file terlebih dahulu...                 |");
		printf("\n|______________________________________________________|");
		printf("\n>> Press [ENTER] to back to menu\n");
		getch();
		system("cls");
	}
	else{
		for(i=0;i<n;i++){
			view(i);					
		}
		printf("\n\n[Keterangan] :");
		printf("\n ______________________________________________________ ");
		printf("\n| Data file berhasil ditampilkan...                    |");
		printf("\n|______________________________________________________|");
		printf("\n>> Press [ENTER] to back to menu\n");
		getch();
		system("cls");
	}
=======
	printf("\n>> Press [ENTER] to back to menu\n");
	getch();
	system("cls");
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Cari Data (Id,Nama,Jenis Ekstensi,Owner,Dll)
void cari_data(){
<<<<<<< HEAD
=======
	int i, hasil;
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
	printf("\n\t __________________________________________");
	printf("\n\t|             SUB MENU CARI DATA           |");     
	printf("\n\t|__________________________________________|"); 
	printf("\n\t|  1. Cari (ID File)                       |");
	printf("\n\t|  2. Cari (Nama File)                     |");
	printf("\n\t|  3. Kembali Ke Menu Utama                |");
	printf("\n\t|__________________________________________|");
	printf("\n\t Masukkan pilihan menu [1-3] = ");
	scanf("%d", &pilihan);
	system("cls");
	
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	
	switch(pilihan){
		case 1 :
		{
			system("cls");
			printf("\n--- Cari ID data file ---\n");
			printf("\n>> Press [ENTER] to back to menu\n");
			printf("\n\n");
			getch();
			system("cls");
			cari_data();
		}
<<<<<<< HEAD
=======

>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 2 :
		{
			system("cls");
			printf("\n--- Cari nama data file ---\n");
			printf("\n>> Press [ENTER] to back to menu\n");
			printf("\n\n");
			getch();
			system("cls");
			cari_data();
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 3 :
		{
			system("cls");
			menu_utama();
		}
		default :
		{
			printf("\n\n[Keterangan] :");
			printf("\n ______________________________________________________ ");
			printf("\n| Pilihan menu tidak ditemukan...                      |");
			printf("\n|______________________________________________________|");
			printf("\nPress [ENTER] to back to menu\n");
			getch();
			system("cls");
			cari_data();
		}
	}
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Ubah Data
void ubah_data(){
<<<<<<< HEAD
=======
	system("cls");
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
	printf("\n--- Ubah data file ---\n");
	printf("\n>> Press [ENTER] to back to menu\n");
	printf("\n\n");
	getch();
	system("cls");
	menu_utama();
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Sort Data
void sort_data(){
	int i;
	printf("\n\t __________________________________________");
	printf("\n\t|          SUB MENU SORT DATA FILE         |");     
	printf("\n\t|__________________________________________|"); 
	printf("\n\t|  1. Sort (ID File)                       |");
	printf("\n\t|  2. Sort (Nama File)                     |");
	printf("\n\t|  3. Sort (Owner File)                    |");
	printf("\n\t|  4. Sort (Jenis File)                    |");
	printf("\n\t|  5. Sort (Ekstensi File)                 |");
	printf("\n\t|  6. Sort (Tanggal File)                  |");
	printf("\n\t|  7. Kembali Ke Menu Utama                |");
	printf("\n\t|__________________________________________|");
	printf("\n\t Masukkan pilihan menu [1-9] = ");
	scanf("%d", &pilihan);
	system("cls");
	
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	switch(pilihan){
		case 1 :
		{
			system("cls");
			printf("\n--- Sort (ID File) ---\n");
<<<<<<< HEAD
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort1(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 2 :
		{
			system("cls");
			printf("\n--- Sort (Nama File) ---\n");
<<<<<<< HEAD
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort1(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 3 :
		{
			system("cls");
<<<<<<< HEAD
			printf("\n--- Sort (Jenis File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort3(a,n);
				};
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){

					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			printf("\n--- Sort (Owner File) ---\n");
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 4 :
		{
			system("cls");
			printf("\n--- Sort (Jenis File) ---\n");
<<<<<<< HEAD
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort4(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 5 :
		{
			system("cls");
			printf("\n--- Sort (Ekstensi File) ---\n");
<<<<<<< HEAD
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort5(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){	
					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 6 :
		{
			system("cls");
			printf("\n--- Sort (Tanggal File) ---\n");
<<<<<<< HEAD
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort7(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				getch();
				system("cls");
				sort_data();
			}
=======
			getch();
			system("cls");
			sort_data();
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
		}
		case 7 :
		{
			system("cls");
			menu_utama();
		}
		default :
		{
			printf("\n\n[Keterangan] :");
			printf("\n ______________________________________________________ ");
			printf("\n| Pilihan menu tidak ditemukan...                      |");
			printf("\n|______________________________________________________|");
			printf("\nPress [ENTER] to back to menu\n");
			getch();
			system("cls");
			sort_data();
		}
	}
}
<<<<<<< HEAD
//Copyright (c) Aplikasi Direktori (Folder) by NPM [013] & [014] All Rights Reserved
=======
//Copyright (c) Aplikasi Direktori (Folder) by NPM [013] & [014] All Rights Reserved
>>>>>>> d9b5a4bad49215cb97be11ad11aec44178eeab20
