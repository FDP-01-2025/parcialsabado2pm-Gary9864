#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ingresa hasta cuanto quieres potenciar el 2(toma en cuenta la posicion 0)" << endl;
    cin >> n;
    
    
    
    
    cout << "las potencias de 2"<< endl;
    for (int i = 1; i < n; i++) {
        cout << "2^" << i << " = " << (1 << i) << endl;
    }








    return 0;
}