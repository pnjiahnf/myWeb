#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

	string pass="panji";
	char lagi;
	int menu,harga,jumlahb,bayar,kembalian,tot_bayar,tot_harga,kurang,tot_semua,tot_jumlah;
	
void room(){
	
do{
		cout<<"====================================================="<<endl;
		cout<<"NAMA KASIR : "<<pass; //strupr(variabel)
		cout<<endl;
		cout<<"|=================== MENU MAK ECHO ==================|"<<endl;
		cout<<"|1.Rendang				    Rp 10.000|"<<endl;
		cout<<"|2.ayam geprek				     Rp 8.000|"<<endl;
		cout<<"|3.bebek 			  	    Rp 12.000|"<<endl;
		cout<<"|4.lele					     Rp 8.000|"<<endl;
		cout<<"|====================================================|"<<endl;
		
		cout<<"masukkan nomor :";
		cin>>menu;
		cout<<endl;
	
		switch(menu){
			case 1:
				cout<<"|1.Rendang				    Rp 10.000|"<<endl;
				harga=10000;
				cout<<"Jumlah Beli : ";
				cin>>jumlahb;
				tot_semua+=jumlahb*harga;
				tot_jumlah+=jumlahb;
				break;
			case 2:
				cout<<"|2.ayam geprek				     Rp 8.000|"<<endl;
				harga=8000;
				cout<<"Jumlah Beli : ";
				cin>>jumlahb;
				tot_semua+=jumlahb*harga;
				tot_jumlah+=jumlahb;
				break;
			case 3:
				cout<<"|3.bebek 			  	    Rp 12.000|"<<endl;
				harga=12000;
				cout<<"Jumlah Beli : ";
				cin>>jumlahb;
				tot_semua+=jumlahb*harga;
				tot_jumlah+=jumlahb;
				break;
			case 4:
				cout<<"|4.lele					     Rp 8.000|"<<endl;
				harga=8000;
				cout<<"Jumlah Beli : ";
				cin>>jumlahb;
				tot_semua+=jumlahb*harga;
				tot_jumlah+=jumlahb;
				break;
			default :
				cout<<"nomor yang anda masukkan salah!"<<endl;
				break;
			}
		cout<<"apakah anda ingin membeli lagi ? (y/t) : ";
		cin>>lagi;
		cout<<endl;

	}while(lagi=='y'||lagi=='Y');

	tot_harga+=tot_semua;
	cout<<"total harga beli : "<<tot_harga<<" "<<endl;
	cout<<"total pembayaran : ";
	cin>>bayar;
	
	
	if (bayar==tot_harga){
		cout<<"====================================================="<<endl;
		cout<<"kembali : -"<<endl;
	}
	else if(bayar<=tot_harga){
		kurang-=tot_harga-bayar;
		cout<<"====================================================="<<endl;
		cout<<"kurang : "<<kurang<<endl;
	}
	else if(bayar>=tot_harga){
		kembalian=bayar-tot_harga;
		cout<<"====================================================="<<endl;
		cout<<"kembali : "<<kembalian<<endl;
	}
	cout<<"_______________________________________________________"<<endl;
	cout<<"jadi anda membeli sebanyak "<<tot_jumlah<<" makanan seharga "<<"Rp."<<tot_harga<<endl;
	cout<<"TERIMA KASIH ";
}

