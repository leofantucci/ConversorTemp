#include <iostream>

using namespace std;

void temperaturas(){
    cout << "Celcius (C)" << endl;
    cout << "Fahrenheit (F)"<< endl;
    cout << "Kelvin (K)" << endl;
}

int main(){
    float temp;
    char To, Tc;
    cout << "Qual a escala da sua temperatura original?" << endl;
    temperaturas();
    cin >> To;
    cout << "Insira a temperatura: ";
    cin >> temp;
    cout << "Escolha para qual temperatura você deseja converter" << endl;
    temperaturas();
    cin >> Tc;
    return 0;
}