#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define Telefono 0
#define Plan 1

int ServicioTelefonico[12000][2];

void ServiciosTelefonicos() {
    srand((unsigned)time(NULL)); // semilla aleatoria

    for(int i = 0; i < 12000; i++) {
        int primer;
        //Para variar el 1er digito entre 6 o 7
        if(rand()%2 == 0){
            primer = 6;
        }
        else{
            primer = 7;
        }
        int resto = rand() % 1000000;  //7 numeros aleatorios entre 0 y 999999
        int numero = primer * 1000000 + resto; //Para asegurar que el 7 o 6 este a la izquierda lo multiplicamos por un numero estático de 7 cifras y le sumamos el resto
        ServicioTelefonico[i][Telefono] = numero;
        ServicioTelefonico[i][Plan] = rand() % 3;
        for(int j = 0; j < 2; j++) {
            cout << ServicioTelefonico[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ServiciosTelefonicos();
    return 0;
}
