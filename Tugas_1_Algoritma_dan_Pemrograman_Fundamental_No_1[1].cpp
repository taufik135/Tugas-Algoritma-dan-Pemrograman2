1 #include <iostream> 
2 using namespace std; 
3 
 
4 int main() 
5 { 
6 	int jumlah_bilangan; 
7 	int bilangan[100]; 
8 	int jumlah=0; 
9 	cout<<"Jumlah Bilangan : "; 
10 	cin>>jumlah_bilangan; 
11 	for(int a=1;a<=jumlah_bilangan;a++){ 
12 		cin>>bilangan[a]; 
13 	} 
14 	for(int a=1;a<=jumlah_bilangan;a++){ 
15 		jumlah=jumlah+bilangan[a]; 
16 	} 
17 	cout<<"Hasil Penjumlahan : "<<jumlah; 
18 } 

