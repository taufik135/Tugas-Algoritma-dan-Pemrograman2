1 #include<iostream> 
2 #include<string.h> 
3 using namespace std; 
4 
 
5 int main(){ 
6 	struct buah{ 
7 	string warna; 
8 	float berat; 
9 	int harga; 
10 	string rasa; 
11 }; 
12 	buah buah1, buah2; 
13 		 
14 	buah1.warna="Merah"; 
15 	buah1.berat=27.8; 
16 	buah1.harga=10000; 
17 	buah1.rasa="Asam"; 
18 	 
19 	buah2=buah1; 
20 	 
21 	cout<<buah1.warna<<endl; 
22 	cout<<buah1.berat<<endl; 
23 	cout<<buah1.harga<<endl; 
24 	cout<<buah1.rasa<<endl<<endl; 
25 	 
26 	cout<<buah2.warna<<endl; 
27 	cout<<buah2.berat<<endl; 
28 	cout<<buah2.harga<<endl; 
29 	cout<<buah2.rasa<<endl; 
30 } 

