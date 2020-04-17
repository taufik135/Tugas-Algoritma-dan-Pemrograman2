1 #include<iostream> 
2 using namespace std; 
3 
 
4 void tukar(int *x, int *y){ 
5 	int temp; 
6 	temp=*x; 
7 	*x=*y; 
8 	*y=temp; 
9 } 
10 
 
11 int main(){ 
12 	int a; 
13 	int b; 
14 	cout<<"Masukkan bilangan 1 : "; cin>>a; 
15 	cout<<"Masukkan bilangan 2 : "; cin>>b; 
16 	cout<<"Sebelum ditukar\nbilangan 1 = "<<a<<"\nbilangan 2 = "<<b<<endl; 
17 	tukar(&a,&b); 
18 	cout<<"Setelah ditukar\nbilangan 1 = "<<a<<"\nbilangan 2 = "<<b<<endl; 
19 	 
20 	return 0; 
21 } 

