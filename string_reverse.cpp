#include<iostream>
#include<string.h>
using namespace std;

int main(){

char a[]="syamalarao";
char b[11];
int i=0;
int j=strlen(a)-1;

for(i=0;i<strlen(a);i++,j--){

cout<<&a[i]<<endl;
b[j]=a[i];


}

cout<<b<<endl;
cout<<strlen(a-1)<<endl;

}

