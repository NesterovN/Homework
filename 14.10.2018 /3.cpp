//Задание 3
/*Вычисление среднего арифметического последовательности*/
#include <iostream>
using namespace std;
int main() {
int a,i=0;
float sum;
while(a!=0){
cin>>a;
sum+=a;
i++;
}
cout<<"Среднее арифметическое = "<<(sum/i)<<endl;
return 0;
}
