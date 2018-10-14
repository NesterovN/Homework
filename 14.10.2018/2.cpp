//Задание 2.
/*Найти по числам a и b такое число с чтобы остаток от деления a*c на b равнялся 1*/
#include <iostream>
using namespace std;
int main() {
int a, b, c;
cin>>a;
cin>>b;
for(int i=1;i<a;i++){
if((b*i+1)%a==0){
c=(b*i+1)/a;
cout<<"N="<<c<<endl;
return 0;
}
}
cout<<"None";
return 0;
}
