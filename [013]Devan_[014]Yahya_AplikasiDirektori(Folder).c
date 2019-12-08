#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*----------------------------------<PEMISAH LUAR>-----------------------------------------*/


//Deklarasi Fungsi Prototipe
void splashscreen();
void menu_utama();
void tambah_data();
void view_data();
void cari_data();
void ubah_data();
void sort_data();

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

//Deklarasi Variabel Global
int pilihan;

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
	printf("\n>> Press [ENTER] to back to menu\n");
	getch();
	system("cls");
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
			system("cls");
			printf("\n--- Cari ID data file ---\n");
			printf("\n>> Press [ENTER] to back to menu\n");
			printf("\n\n");
			getch();
			system("cls");
			cari_data();
		}

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
	system("cls");
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
			getch();
			system("cls");
			sort_data();
		}
		case 2 :
		{
			system("cls");
			printf("\n--- Sort (Nama File) ---\n");
			getch();
			system("cls");
			sort_data();
		}
		case 3 :
		{
			system("cls");
			printf("\n--- Sort (Owner File) ---\n");
			getch();
			system("cls");
			sort_data();
		}
		case 4 :
		{
			system("cls");
			printf("\n--- Sort (Jenis File) ---\n");
			getch();
			system("cls");
			sort_data();
		}
		case 5 :
		{
			system("cls");
			printf("\n--- Sort (Ekstensi File) ---\n");
			getch();
			system("cls");
			sort_data();
		}
		case 6 :
		{
			system("cls");
			printf("\n--- Sort (Tanggal File) ---\n");
			getch();
			system("cls");
			sort_data();
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
//Copyright (c) Aplikasi Direktori (Folder) by NPM [013] & [014] All Rights Reserved