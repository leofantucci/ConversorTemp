#include <iostream>

using namespace std;

void Temperaturas(){
    cout << endl;
    cout << "Celcius (C)" << endl;
    cout << "Fahrenheit (F)"<< endl;
    cout << "Kelvin (K)" << endl;
}

char Maiuscula(char C){
    C = toupper(C);
    return C;
}

double Conversor(double temp, char to, char tc){
    double temp_final;
    switch(to){
            case 'C':
                switch(tc){
                    case 'C':
                        temp_final = temp;
                        break;

                    case 'F':
                        temp_final = ((9 * temp)/5) + 32;
                        break;

                    case 'K':
                        temp_final = temp + 273.15;
                        break;
                }
            break;

            case 'F':
                switch(tc){
                    case 'C':
                        temp_final = (((temp - 32)*5)/9);
                        break;

                    case 'F':
                        temp_final = temp;
                        break;

                    case 'K':
                        temp_final = (((temp - 32) * 5)/9) + 273.15;
                        break;
                }
            break;

            case 'K':
                switch(tc){
                    case 'C':
                        temp_final = temp - 273.15;
                        break;
                    case 'F':
                        temp_final = ((((temp - 273.15) * 9)/5) + 32);
                        break;

                    case 'K':
                        temp_final = temp;
                        break;
                }
            break;
        }
    return temp_final;
}

int menu(){
    int ret;
    cout << endl;
    cout << "Ler temperatura (1)" << endl;
    cout << "Sair (0)" << endl;
    cin >> ret;
    return ret;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    double temp, temp_final;
    char temp_ori, temp_conv;

    while(menu() != 0){
        cout << endl;
        cout << "Qual a escala da sua temperatura original?" << endl;
        Temperaturas();
        cin >> temp_ori;
        cout << endl;
        cout << "Insira a temperatura: ";
        cin >> temp;
        cout << endl;
        cout << "Escolha para qual temperatura você deseja converter" << endl;
        Temperaturas();
        cin >> temp_conv;
        temp_final = Conversor(temp, Maiuscula(temp_ori), Maiuscula(temp_conv));
        cout << endl;
        cout << "Temperatura convertida: " << temp_final << "°" << endl;
    }
    return 0;
}