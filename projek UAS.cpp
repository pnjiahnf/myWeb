#include <iostream>
#include <string.h>
#include <conio.h>
#include "uas.h"

using namespace std;

main(){

	string pass="panji";
	string sandi;
	bool benar;
	int ulang;

	cout<<"\t\t*LOGIN*"<<endl;
	ulang = 1;
	while (!benar && ulang <=3){ //boolean untuk menampung kondisi benar dan salah
		cout<<"masukkan nama : ";
		cin>>sandi;
		
		if(sandi==pass){
			benar= true;
			cout<<" NAMA SESUAI "<<endl;
		}
		else{
			ulang = ulang+1; //jika salah
			
			//jika ulang lebih dari 3 kali keluar
			if(ulang==4){
				cout<<"--------------------------------"<<endl;
				cout<<"NAMA TIDAK SESUAI !"<<endl;
				exit(0); 
			}
		}
	}
	system("cls");
	room();
	
	return 0;
}
