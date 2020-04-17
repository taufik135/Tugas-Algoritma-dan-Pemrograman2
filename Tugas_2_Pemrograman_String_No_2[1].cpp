1 #include<iostream> 
2 #include<string.h> 
3 using namespace std; 
4 
 
5 int main(){ 
6 	char kalimat[100]; 
7 	int hasil; 
8 	 
9 	cout<<"Masukkan kalimat : "; 
10 	cin.getline(kalimat,100); 
11 
 
12 	hasil=strlen(kalimat); 
13 	for(int i=hasil-1;i>=0;i--){ 
14 		cout<<kalimat[i]; 
15 	} 
16 } 

