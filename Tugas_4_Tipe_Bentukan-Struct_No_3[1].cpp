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
13 	buah buah1; 
14 	 
15 	buah1.warna="merah"; 
16 	buah1.berat=250.50; 
17 	buah1.harga=10000; 
18 	buah1.rasa="manis"; 
19 	 
20 	cout<<"Warna buah : "<<buah1.warna<<endl; 
21 	cout<<"Berat buah : "<<buah1.berat<<endl; 
22 	cout<<"Harga buah : "<<buah1.harga<<endl; 
23 	cout<<"Rasa buah  : "<<buah1.rasa<<endl; 
24 
 
25 return 0; 
26 } 

