1 #include<iostream> 
2 using namespace std; 
3 
 
4 void fungsi(int *b){	//fungsi dengan pointer 
5 	cout<<"Alamat b = "<<b<<endl;	//menampilkan alamat dari b 
6 	cout<<"Nilai b = "<<*b<<endl;	//menampilkan nilai dari b 
7 } 
8 
 
9 int main(){ 
10 	int a=5;	//nilai variabel a = 5 
11 	cout<<"Alamat a = "<<&a<<endl;	//menampilkan alamat dari a 
12 	cout<<"Nilai a = "<<a<<endl;	//menampilkam nilai dari a 
13 	fungsi(&a);	//memamnggil fungsi pointer 
14 	 
15 	return 0; 
16 } 

