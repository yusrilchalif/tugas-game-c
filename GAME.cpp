#include<iostream.h>
#include<conio.h>
void main()
{
	char tanya,amn;
	int jwb;
	long int nilai=100000 uang=0,jlh;
	gotoxy(25,10);cout<<"================================\n";
	gotoxy(25,11);cout<<"Kuis Siapa mau jadi jutawan\n";
	gotoxy(25,12);cout<<"================================\n";
	gotoxy(25,14);cout<<"Anda ingin bermain?[Y/T]:";cin>>tanya;
	if(tanya=='y' || tanya=='Y')
	{
		for(int hsl=1; hsl<=5; hsl++)
		{
			clrscr();
		gotoxy(3,3);cout<<"====================================="; 
		gotoxy(3,4);cout<<"Pertanyaan No."<<hsl<<"Bernilai Rp."<<nilai;
		gotoxy(3,5);cout<<"====================================="; 
		gotoxy(50,16);cout<<"-----------------------------";
		gotoxy(50,17);cout<<"Pertanyaan No.1 : Rp.  100000";
		gotoxy(50,18);cout<<"Pertanyaan No.2 : Rp.  500000";
		gotoxy(50,19);cout<<"Pertanyaan No.3 : Rp. 1000000";
		gotoxy(50,20);cout<<"Pertanyaan No.4 : Rp. 5000000";
		gotoxy(50,21);cout<<"Pertanyaan No.5 : Rp.10000000";
		gotoxy(50,22);cout<<"-----------------------------";
		if(jwb==1)
		{
			gotoxy(3,7);cout<<"Warna bendera negara polandia";
			gotoxy(3,9);cout<<"1. Merah Putih";
			gotoxy(3,10);cout<<"2. Putih Merah";
			gotoxy(3,12);cout<<"jawaban[1/2]:";cin>>jwb;
			if(jwb==2)
			{
				jlh=nilai;
			nilai=nilai+400000;}
			clrscr();
			gotoxy(30,10);cout<<"jawaban salah, permainan berakhir";
			gotoxy(30,12);cout<<"Terima Kasih Telah Bermain"; 
			getch(); 
			break; }
			}
			else if(hsl==2)
			{
				gotoxy(3,7);cout<<"nama presiden rusia";
				gotoxy(3,9);cout<<"1. Usman";
				gotoxy(3,10);cout<<"2. Putin";
				gotoxy(3,12);cout"jawaban[1/2]:";cin>>jwb;
				if(jwb==2)
				{
					clrscr();
					jlh=nilai;
					nilai=nilai*2;
				}
				else if(hsl==3)
				{
					clrscr();
					gotoxy(30,10);cout<<"jawaban salah, permainan berakhir";
					gotoxy(30,12);cout<<"anda mendapatkan Rp."<<jlh;
					getch();
					break;
				}
				{
					gotoxy(3,7);cout<<"salah satu parpol terbesar di indonesia";
					gotoxy(3,9);cout<<"1. golkar";
					gotoxy(3,10);cout<<"2. federal";
					gotoxy(3,12);cout<<"jawaban[1/2]:";cin>>jwb;
					if(jwb==1)
					{
						uang=jlh+nilai;
						nilai=nilai*5;
					}
					else
					{
						clrscr();
						gotoxy(25,10);cout<<"selamat anda di titik aman";
						gotoxy(25,12);cout<<"anda ingin melanjutkan[Y/T]:";cin>>amn;
						if(amn=='t' || amn=='T')
						{
							clrscr();
							gotoxy(25,10);cout<<"Selamat, Anda Telah Memasuki Titik AMAN"; 
							gotoxy(25,12);cout<<"Anda Ingin Melanjutkan ? [Y/T] : ";cin>>amn; 
							if(amn=='t' || amn=='T') 
							{
								clrscr(); gotoxy(36,10);cout<<"G A M E  O V E R"; 
								gotoxy(30,12);cout<<"Terima Kasih Telah Bermain"; 
								gotoxy(30,14);cout<<"Anda Mendapat Uang Rp. "<<jlh;
								getch();
								break;
							}
							else
							{
								gotoxy(3,3);cout<<"====================================="; 
								gotoxy(3,4);cout<<"Pertanyaan No."<<hsl<<"Bernilai Rp."<<nilai;
								gotoxy(3,5);cout<<"====================================="; 
								gotoxy(50,16);cout<<"-----------------------------";
								gotoxy(50,17);cout<<"Pertanyaan No.1 : Rp.  100000";
								gotoxy(50,18);cout<<"Pertanyaan No.2 : Rp.  500000";
								gotoxy(50,19);cout<<"Pertanyaan No.3 : Rp. 1000000"; 
								gotoxy(50,20);cout<<"Pertanyaan No.4 : Rp. 5000000";
								gotoxy(50,21);cout<<"Pertanyaan No.5 : Rp.10000000"; 
								gotoxy(50,22);cout<<"-----------------------------";
								gotoxy(3,7);cout<<"Lambang kota surabaya";
								gotoxy(3,9);cout<<"1. sura & buaya"; 
								gotoxy(3,10);cout<<"2. harimau & elang"; 
								gotoxy(3,12);cout<<"Jawaban [1/2] : ";cin>>jwb;
								if(jwb==1)
								{
									uang=jlh+nilai;
									nilai=nilai*2;
								}
							else
							{
								clrscr(); 
								gotoxy(30,10);cout<<"Jawaban Salah, Permainan Berakhir"; 
								gotoxy(30,12);cout<<"Terima Kasih Telah Bermain";
								gotoxy(30,14);cout<<"anda mendapatkan uang Rp."<<jlh;
								getch();
								break;
							}
							else if(hsl==5)
							{
								gotoxy(3,7);cout<<"game buatan anak indonesia ";
								gotoxy(3,9);cout<<"1. dreadout "; 
								gotoxy(3,10);cout<<"2. final fantasy";
								gotoxy(3,12);cout<<"Jawaban [1/2] : ";cin>>jwb; 
								if(jwb==1) 
								{
									uang=nilai; 
									nilai=nilai*2; 
									clrscr();
									gotoxy(30,10);cout<<"SELAMAT ANDA MENJADI JUTAWAN BARU"; 
									gotoxy(30,12);cout<<"Anda Mendapat Uang Rp. "<<jlh;
									getch();
									break;
								}
							}
							else
								getch();
							}
						}


