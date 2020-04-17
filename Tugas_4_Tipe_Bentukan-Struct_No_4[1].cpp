1 #include<iostream> 
2 #include<string.h> 
3 using namespace std; 
4 
 
5 int main(){ 
6 	 
7 	struct buah{ 
8 	string warna; 
9 	float berat; 
10 	int harga; 
11 	string rasa; 
12 }; 
13 	buah data_buah; 
14 
 
15 	data_buah.warna="merah"; 
16 	data_buah.berat=250.50; 
17 	data_buah.harga=10000; 
18 	data_buah.rasa="manis"; 
19 	 
20 	cout<<"Warna buah : "<<data_buah.warna<<endl; 
21 	cout<<"Berat buah : "<<data_buah.berat<<endl; 
22 	cout<<"Harga buah : "<<data_buah.harga<<endl; 
23 	cout<<"Rasa buah  : "<<data_buah.rasa<<endl; 
24 
 
25 return 0; 
26 } 

