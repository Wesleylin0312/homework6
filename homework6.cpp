#include<iostream> 
#include<cstdlib> 
using namespace std; 
int main(void){ 
int year; 
cout<<"��J�@�Ӧ褸�~��"<<endl; 
while(cin>>year){ 
if(year%4==0){ 
if(year%100!=0){ 
cout<<"�|�~"<<endl; 
}else{ 
if(year%400==0){ 
cout<<"�|�~"<<endl; 
}else{ 
cout<<"���O�|�~"<<endl; 
} 
} 
}else{ 
cout<<"���~"<<endl; 
} 
} 
system("pause"); 
return 0 ; 
}
