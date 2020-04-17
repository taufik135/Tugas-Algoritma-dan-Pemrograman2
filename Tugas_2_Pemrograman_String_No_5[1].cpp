#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
	int i,jum;
	char string[100];
	
	cout<<"masukkan kalimat:\n";
	cin.getline(string,100);
	
	if((string[0]>='a') && (string[0]<='z'))
	string[0]=(char)string[0]-32;
	
	jum=1;int d=0;
	for(i=0;i<(int)strlen(string);i++){
		if(i%2==0){
	if((string[jum]>='A')&& (string[jum]<='Z'))
	string[jum]=(char)string[jum]+32;
	jum++;}
	}
	
	for(i=1;string[i]!='\0';i++){
		if(string[i]==' ') d++;
	if((i-1-d)%2==0){
		if(string[i+1]>'a' && string[i+1]<='z')
		string[i+1]=(char)(string[i+1]-32);}	
	}
	cout<<"kata:"<<string<<endl;
}

