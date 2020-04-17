1 #include<iostream> 
2 using namespace std; 
3 
 
4 int main(){ 
5 	int x;	//variabel x 
6 	int *p;	//cara mengakses pointer itu dengan cara menambah '*' di awal variabel / tipe_data *nama_variabel 
7 	 
8 	x=100;	//nilai dari a x = 100 
9 	p=&x;	//p mmengambil alamat dari x 
10 	cout<<"Nilai x  = "<<x<<endl;	//menampilkan nilai x 
11 	cout<<"Alamat x = "<<&x<<endl;	//manampilkan alamat x 
12 	cout<<"Nilai p  = "<<*p<<endl;	//menampilkan nilai p 
13 	cout<<"Alamat p = "<<p;	//menampilkan alamat p 
14 	 
15 	return 0; 
16 } 

