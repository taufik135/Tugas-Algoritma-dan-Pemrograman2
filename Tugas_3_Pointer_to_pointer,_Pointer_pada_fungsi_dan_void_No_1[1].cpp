#include<iostream>  
2 using namespace std; 
3 
 
4 int main (){ 
5    int  x;    //variabel x 
6    int  *px;    //pointer ke variabel 
7    int  **ppx;    //pointer ke pointer 
8     
9    x = 100;    //nilai variabel x = 100 
10    px = &x;    //px mengambil nilai dari alamat x 
11    ppx = &px;    //ppx mengambil nilai dari alamat px 
12 
 
13     cout<<"Nilai dari x   = "<<x<<endl;    //menampilkan nilai dari x 
14     cout<<"Nilai dari px  = "<<*px<<endl ;    //menampilkan nilai dari px 
15     cout<<"Nilai dari ppx = "<< **ppx;    //menampilkan nilai dari ppx 
16 
 
17    return 0; 
18 } 

