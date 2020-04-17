1 #include<iostream> 
2 #include<string.h> 
3 using namespace std; 
4 
 
5 int main(){ 
6   char kalimat[100]; 
7 	int jum_kata; 
8 	 
9 	cout<<"Masukkan kalimat : "; 
10 	cin.getline(kalimat,sizeof(kalimat)); 
11 	 
12 	jum_kata=0; 
13 	for(int x=0;kalimat[x];x++) 
14 		jum_kata++; 
15 		 
16 	cout<<jum_kata<<endl; 
17 	//bisa juga menggunakan 
18 	cout<<cin.gcount()-1; 
19 } 

