#include<iostream> 
#include<cstdlib> 
using namespace std; 
int main(void){ 
int year; 
cout<<"輸入一個西元年份"<<endl; 
while(cin>>year){ 
if(year%4==0){ 
if(year%100!=0){ 
cout<<"閏年"<<endl; 
}else{ 
if(year%400==0){ 
cout<<"閏年"<<endl; 
}else{ 
cout<<"不是閏年"<<endl; 
} 
} 
}else{ 
cout<<"平年"<<endl; 
} 
} 
system("pause"); 
return 0 ; 
}
