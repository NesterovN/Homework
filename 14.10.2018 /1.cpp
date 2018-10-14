//Задание 1
/*Проверить составное или простое число*/
#include <iostream>
#include<math.h>
using namespace std;
int main() {
int a;
cin>> a;
if (a==1){
cout<<"Unite" ;
return 0;
}
for (int i=2;i<=sqrt(a);i++){
if( a%i==0) {
cout <<"Composite";
return 0; 
}
}
cout<< "Prime";
return 0;
}
