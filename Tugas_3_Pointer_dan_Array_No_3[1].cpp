#include<iostream> 
2 using namespace std; 
3 
 
4 void susunan(int *q){ 
5 	int p[3][3]={{2,4,6},{8,10,12},{14,16,18}};	 
6 	int x,y; 
7 	int z=1; 
8 	int *pa; 
9 	pa=p; 
10 	for(int a=0;a<=8;a++){ 
11 		cout<<(a+1)*2<<" "; 
12 	} 
13 	cout<<"\n"; 
14 	for(x=0;x<3;x++){ 
15 		for(y=0;y<3;y++){ 
16 			cout<<"Nomor dus "<<z++<<" : "<<p[x][y]<<endl; 
17 		} 
18 	} 
19 	cout<<q<<endl; 
20 } 
21 
 
22 int main(){ 
23 	int p; 
24 	cout<<"Jumlah dus = 9"<<endl;	 
25 	cout<<"nomor dus = "; 
26 	susunan(&p); 
27 	cout<<&p; 
28 } 

