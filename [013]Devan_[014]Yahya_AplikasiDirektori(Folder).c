#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

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

//Deklarasi Void
void splashscreen();
void menu_utama();
void tambah_data();
void view_data();
void cari_data();
void ubah_data();
void sort_data();
void delete_data();

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Pemrosesan Utama
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

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Deklarasi Variabel Global
int pilihan,n=0;

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/
void InsertionSort1(fl arr[], int n);
int binary_search1(fl arr[], char cari[], int n);

//Input Data
void input(int i){
	int c;
	for(c=0;c<=n;c++){
		InsertionSort1(a,c);
	}
	char id_temp[50];
	int hasil;
	int exit = 0;
	printf("File ke-%d\n", i+1);
	while(exit==0){
		printf(">> Masukan ID File         	   : "); fflush (stdin); gets(id_temp);
		hasil = binary_search1(a, id_temp, i);
		if(hasil==-1){
			strcpy(a[i].id_file,id_temp);
			exit++;
		} else {
			printf("| ID File %s sudah digunakan \n|",id_temp);
		}
	}
	printf(">> Masukan Nama File      	   : "); fflush (stdin); gets(a[i].nama_file);
	printf(">> Masukan Owner File        	   : "); fflush (stdin); gets(a[i].owner);
	printf(">> Masukan Jenis File    	   : "); fflush (stdin); gets(a[i].jnsfl.jenis);
	printf(">> Masukan Ekstensi File   	   : "); fflush (stdin); gets(a[i].jnsfl.ekstensi);
	do{
		printf(">> Masukan Tanggal Pem File (1-31) : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tanggal);
	}while(a[i].ttlfl.tanggal < 1 || a[i].ttlfl.tanggal > 31);
	do{
		printf(">> Masukan Bulan Pem File (1-12)   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.bulan);
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
	}while(a[i].ttlfl.bulan < 1 || a[i].ttlfl.bulan > 12);
	printf(">> Masukan Tahun Pem File    	   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tahun);
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Output (View Data)
void view(int i){
	printf("\nFile ke-%d", i+1);
	printf("\n>> ID File          : %s", a[i].id_file);
	printf("\n>> Nama File        : %s", a[i].nama_file);
	printf("\n>> Owner File       : %s", a[i].owner);
	printf("\n>> Jenis File       : %s", a[i].jnsfl.jenis);
	printf("\n>> Ekstensi File    : %s", a[i].jnsfl.ekstensi);
	printf("\n>> Tanggal Pem File : %d %s %d", a[i].ttlfl.tanggal, a[i].ttlfl.ketbulan, a[i].ttlfl.tahun);
	printf("\n");
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Ubah Data
void updatefile(int i){
	printf("\nFile ke-%d\n", i+1);
	printf(">> Ubah Nama File        : "); fflush (stdin); gets(a[i].nama_file);
	printf(">> Ubah Owner File       : "); fflush (stdin); gets(a[i].owner);
	printf(">> Ubah Jenis File       : "); fflush (stdin); gets(a[i].jnsfl.jenis);
	printf(">> Ubah Ekstensi File    : "); fflush (stdin); gets(a[i].jnsfl.ekstensi);
	do{
		printf(">> Ubah Tanggal Pem File : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tanggal);
	}while(a[i].ttlfl.tanggal < 1 || a[i].ttlfl.tanggal > 31);
	do{
		printf(">> Ubah Bulan Pem File   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.bulan);
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
	}while(a[i].ttlfl.bulan < 1 || a[i].ttlfl.bulan > 12);
	printf(">> Ubah Tahun Pem File   : "); fflush (stdin); scanf("%d",&a[i].ttlfl.tahun);
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Binary Search
int binary_search1(fl arr[], char cari[], int n) // ID File
{
    int t, hasil;
    int k = n - 1;
    int l = 0;
  
    while ( l <= k )
    {
        t = (l + k) / 2;
        hasil = strcmp(arr[t].id_file, cari);

        if (hasil == -1)
            l = t + 1;
        else if (hasil == 1)
            k = t - 1;
        else
            return t;
    }       
    return -1;  
}

int binary_search2(fl arr[], char cari[], int n) // Nama FIle
{
    int t, hasil;
    int k = n - 1;
    int l = 0;
  
    while ( l <= k )
    {
        t = (l + k) / 2;
        hasil = strcmp(arr[t].nama_file, cari);

        if (hasil == -1)
            l = t + 1;
        else if (hasil == 1)
            k = t - 1;
        else
            return t;
    }       
    return -1;  
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

void InsertionSort7(fl arr[], int n) // Date File
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

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

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
		printf("\n\t|  6. Delete Data                          |");
		printf("\n\t|  7. Keluar                               |");
		printf("\n\t|__________________________________________|");
		printf("\n\tMasukkan pilihan menu [1-7] = ");
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
		case 6 :
		{
			system("cls");
			delete_data();
			break;
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 7 :
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
	printf("\n--- Tambah data file ---\n\n");
	input(n);
	n++;
	printf("\n\n[Keterangan] :");
	printf("\n ______________________________________________________ ");
	printf("\n| Data file berhasil ditambahkan...                    |");
	printf("\n|______________________________________________________|");
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
	if(n==0){
		printf("\n\n[Keterangan] :");
		printf("\n ______________________________________________________ ");
		printf("\n| Masukan data file terlebih dahulu...                 |");
		printf("\n|______________________________________________________|");
		printf("\n>> Press [ENTER] to back to menu\n");
		getch();
		system("cls");
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Cari Data (Id,Nama,Jenis Ekstensi,Owner,Dll)
void cari_data(){
	int i, hasil;
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
			cari_id:
			system("cls");
			printf("\n--- Cari ID data file ---\n");
			char cariid[50];
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				cari_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			} else{
				for(i=0;i<=n;i++){
					InsertionSort1(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data yang terdaftar :");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				printf("\n\n<--------------------------------->");
				printf("\nCari ID File : ");fflush(stdin);gets(cariid);
				printf("<--------------------------------->\n\n");
				hasil = binary_search1(a,cariid,n);
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(hasil==-1){
					printf("[Keterangan] :");
					printf("\n ______________________________________________________ ");
					printf("\n| Tidak ditemukan ID File %s                           |",cariid);
					printf("\n|______________________________________________________|");
	   				printf("\n>> Press [ENTER] to back to menu\n");
	   				getch();
					system("cls");
					cari_data();
					/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				}else {
					printf("[Hasil Pencarian] :\n");
		           	for(i=hasil; i<=hasil; i++){
						view(i);	
					}
					printf("\n\n[Keterangan] :");
					printf("\n ______________________________________________________ ");
					printf("\n| Data file berhasil ditemukan...                      |");
					printf("\n|______________________________________________________|");
					printf("\n>> Press [ENTER] to back to menu\n");
					getch();
					system("cls");
					cari_data();
				}
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 2 :
		{
			cari_nama:
			system("cls");
			printf("\n--- Cari nama data file ---\n");
			char cariNama[50];
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				cari_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort2(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data yang terdaftar :");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){
					view(i);								
				}
				printf("\n\n<--------------------------------->");
				printf("\nCari Nama File : ");fflush(stdin);gets(cariNama); 
				printf("<--------------------------------->\n\n");
				hasil=binary_search2(a,cariNama,n);
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
				if(hasil==-1){
					printf("[Keterangan] :");
					printf("\n ______________________________________________________ ");
					printf("\n| Tidak ditemukan Nama File atas nama %s               |",cariNama);
					printf("\n|______________________________________________________|");
	   				printf("\n>> Press [ENTER] to back to menu\n");
	   				getch();
					system("cls");
					cari_data();
					/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	   			}
				else{
					printf("[Hasil Pencarian] :\n");
	           		for(i=hasil; i<=hasil; i++){
						view(i);	
					}
					printf("\n\n[Keterangan] :");
					printf("\n ______________________________________________________ ");
					printf("\n| Data file berhasil ditemukan...                      |");
					printf("\n|______________________________________________________|");
					printf("\n>> Press [ENTER] to back to menu\n");
					getch();
					system("cls");
					cari_data();
				}
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 3 :
		{
			system("cls");
			menu_utama();
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
			cari_data();
		}
	}
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/

//Ubah Data
void ubah_data(){
	int i,hasil;
	char cariid[50];
	system("cls");
	printf("\n--- Ubah data file ---\n");
	if(n==0){
		printf("\n\n[Keterangan] :");
		printf("\n ______________________________________________________ ");
		printf("\n| Masukan data file terlebih dahulu...                 |");
		printf("\n|______________________________________________________|");
		printf("\n>> Press [ENTER] to back to menu\n");
		getch();
		system("cls");
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	}else{
		InsertionSort1(a,n);
		printf("\n\n<--------------------------------->");
		printf("\n Data yang terdaftar :");
		printf("\n<--------------------------------->\n");
		for(i=0; i<n; i++){
			view(i);								
		}
		printf("\n\n<--------------------------------->");
		printf("\nCari ID File : ");fflush(stdin);gets(cariid);
		printf("<--------------------------------->\n");
		hasil = binary_search1(a,cariid,n);
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		if(hasil==-1){
			printf("[Keterangan] :");
			printf("\n __________________________________________________ ");
			printf("\n| Tidak ditemukan ID File %s                        |",cariid);
			printf("\n|__________________________________________________|");
	   		printf("\n>> Press [ENTER] to back to menu\n");
	   		getch();
			system("cls");
			ubah_data();
			/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		}else{			
			printf("\n[Masukkan perubahan data file] :\n");
			updatefile(hasil);
			/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			printf("\n\n[Hasil ubah data file] :\n");
			view(hasil);
			/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			printf("\n\n[Keterangan] :");
			printf("\n ______________________________________________________ ");
			printf("\n| Ubah data file berhasil...                           |");
			printf("\n|______________________________________________________|");
			printf("\n>> Press [ENTER] to back to menu\n");
			printf("\n\n");
			getch();
			system("cls");
			menu_utama();
		}
	}
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
	printf("\n\t|  6. Sort (Date File)                     |");
	printf("\n\t|  7. Kembali Ke Menu Utama                |");
	printf("\n\t|__________________________________________|");
	printf("\n\t Masukkan pilihan menu [1-7] = ");
	scanf("%d", &pilihan);
	system("cls");
	
	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	switch(pilihan){
		case 1 :
		{
			system("cls");
			printf("\n--- Sort (ID File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 2 :
		{
			system("cls");
			printf("\n--- Sort (Nama File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 3 :
		{
			system("cls");
			printf("\n--- Sort (Owner File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			}
			else{
				for(i=0;i<=n;i++){
					InsertionSort3(a,n);
				}
				printf("\n\n<--------------------------------->");
				printf("\n Data setelah diurutkan");
				printf("\n<--------------------------------->\n");
				for(i=0; i<n; i++){

					view(i);								
				}
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 4 :
		{
			system("cls");
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
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 5 :
		{
			system("cls");
			printf("\n--- Sort (Ekstensi File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 6 :
		{
			system("cls");
			printf("\n--- Sort (Date File) ---\n");
			if(n==0){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Masukan data file terlebih dahulu...                 |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
				/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
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
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Data file berhasil diurutkan...                      |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				getch();
				system("cls");
				sort_data();
			}
		}
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		case 7 :
		{
			system("cls");
			menu_utama();
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
			sort_data();
		}
	}
}

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/
	
void delete_data(){
	int i,hasil;
	char cariid[50];
	system("cls");
	printf("\n--- Delete data file ---\n");
	if(n==0){
		printf("\n\n[Keterangan] :");
		printf("\n ______________________________________________________ ");
		printf("\n| Masukan data file terlebih dahulu...                 |");
		printf("\n|______________________________________________________|");
		printf("\n>> Press [ENTER] to back to menu\n");
		getch();
		system("cls");
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
	} else{
		InsertionSort1(a,n);
		printf("\n\n<--------------------------------->");
		printf("\n Data yang terdaftar :");
		printf("\n<--------------------------------->\n");
		for(i=0; i<n; i++){
			view(i);								
		}
		printf("\n\n<--------------------------------->");
		printf("\nCari ID File yg ingin di-delete : ");fflush(stdin);gets(cariid);
		printf("<--------------------------------->\n");
		hasil = binary_search1(a,cariid,n);
		/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		if(hasil==-1){
			printf("[Keterangan] :");
			printf("\n __________________________________________________ ");
			printf("\n| Tidak ditemukan ID File %s                        |",cariid);
			printf("\n|__________________________________________________|");
	   		printf("\n>> Press [ENTER] to back to menu\n");
	   		getch();
			system("cls");
			menu_utama();
			/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
		} else {		
			printf("\n[Data file yang ingin di-delete] :\n");
			view(hasil);
			char phapus;
			printf("\n[Delete data file (y/n) ?] : "); scanf("%s", &phapus);
			if(phapus == 'y' || phapus == 'Y'){
				a[hasil] = a[n-1];
	        	n--;
	        	printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Delete data file berhasil...                         |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				printf("\n\n");
				getch();
				system("cls");
	        	/*++++++++++++++++++++++++++++++++++++++++[ PEMISAH DALAM ]++++++++++++++++++++++++++++++++++++++++*/
			}else if(phapus == 'n' || phapus == 'N'){
				printf("\n\n[Keterangan] :");
				printf("\n ______________________________________________________ ");
				printf("\n| Delete data file dibatalkan...                       |");
				printf("\n|______________________________________________________|");
				printf("\n>> Press [ENTER] to back to menu\n");
				printf("\n\n");
				getch();
				system("cls");
				menu_utama();
			}else{
				system("cls");
				delete_data();
			}
		}
	}
}
//Copyright (c) Aplikasi Direktori (Folder) by NPM [013] & [014] All Rights Reserved
