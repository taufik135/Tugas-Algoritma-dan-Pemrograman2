1 #include<iostream> 
2 using namespace std; 
3 
 
4 void penjumlahan(int *jmlbil){			//Fungsi pointer penjumlahan 
5 	int bilangan[100];					//variabel nama bilangan dengan batas 100 dengan tipe data integer  
6 	int jumlah=0;						//variabel dengan nama jumlah yang memiliki nilai 0 dengan tipe data integer 
7 	for(int a=1;a<=*jmlbil;a++){		//Perulangan untuk menginput bilangan 
8 		cin>>bilangan[a]; 
9 	} 
10 	for(int a=1;a<=*jmlbil;a++){		//Perulangan untuk menjumlahkan bilangan yang diinput 
11 		jumlah=jumlah+bilangan[a]; 
12 	} 
13 	cout<<jumlah;						//menampilkan jumlah 
14 } 
15 
 
16 int main(){ 
17 	int jmh;	//variabel dengan nama jmh dengan tipe data integer 
18 	cout<<"Masukkan jumlah bilangan : "; 
19 	cin>>jmh;							//menginput jumlah bilangan 
20 	penjumlahan(&jmh);					//memanggil fungsi penjumlahan 
21 	 
22 	return 0; 
23 } 

