// Нахождение палиндромов
// Мы рассматриваем все числа длины n/2 и симметрично копируем их относительно центра, каждым шагом мы находим число
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int a, b = 1;
    cin>>a;
    if (a%2==0){
    for (int i = 0; i < a/2; i++){
        b*=10;
    }
    string bb = to_string (b);
    cout << b;
    for (int i = bb.lenght() - 1;i >= 0;i --){
        cout << bb[i];
    }
    cout << endl;
    while (b != pow(10,a/2+1)){
        b++;
        bb=to_string(b);
        cout << b;
         for (int i=bb.lenght() - 1;i >= 0; i--){
        cout << bb[i];
    }
    cout << endl;
    }
    }
    return 0;
}