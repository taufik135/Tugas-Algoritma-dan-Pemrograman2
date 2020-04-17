#include<iostream>
#include<string.h>
using namespace std;

void binari (int desimal){
	int sisa,hasil;
	if(desimal<=1){
		cout<<desimal;
		return;
	}
	sisa=desimal %2;
	hasil=desimal /2;
	binari(hasil);
	cout<<sisa;
}

int main(){
	int angka,biner,sisa,n,hasil;
	
	cout<<"masukkan angka desimal:";
	cin>>angka;
	cout<<"angka binarinya adalah:";
	binari(angka);
	
	
}

