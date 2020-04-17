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
13 
 
14 	buah apel; 
15 	apel.warna="merah"; 
16 	apel.berat=250.50f; 
17 	apel.harga=10000; 
18 	apel.rasa="manis"; 
19 	 
20 	cout<<apel.warna<<endl; 
21 	cout<<apel.berat<<endl; 
22 	cout<<apel.harga<<endl; 
23 	cout<<apel.rasa<<endl; 
24 		 
25 	return 0; 
26 } 

