#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char kalimat[100];
	char kalimat2[100];
	
	cout<<"masukkan kalimat:";
	gets(kalimat);
	
	cout<<"masukkan kalimat pengganti:";
	gets(kalimat2);
	
	strcpy(kalimat,kalimat2);
	cout<<kalimat;
}

