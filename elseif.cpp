#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<< "ingresa el primer numero"<< endl;
    cin >> num1;
    cout << "ingresa el segundo numero"<< endl;
    cin>> num2;

    if (num1 == num2)
    {
        cout << "estos numeros son iguales"<< endl;
    }else if (num1 > num2)
    {
        cout <<"el numero "<< num1 << " es mayor al "<< num2<< endl;
    }else if(num2 > num1)
    {
        cout << "el numero "<< num2 <<" es mayor al "<< num1 << endl;
    }
    
    






    return 0;
}