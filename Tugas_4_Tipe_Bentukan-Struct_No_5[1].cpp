1 #include<iostream> 
2 #include<stdio.h> 
3 #include<string.h> 
4 using namespace std; 
5 
 
6 int main(){ 
7 	struct data_tanggal{ 
8 	int tanggal; 
9 	int bulan; 
10 	int tahun; 
11 }; 
12 
 
13 struct data_mahasiswa{ 
14 	char stambuk[11]; 
15 	char nama[30]; 
16 	char fakultas[30]; 
17 	data_tanggal tanggal_lahir; 
18 }; 
19 
 
20 data_mahasiswa mahasiswa, data_tanggal, tanggal_lahir; 
21 
 
22 return 0; 
23 } 

