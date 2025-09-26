#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define Sexo 0
#define Nacimiento 1
#define Pais 2
#define Masculino 1
#define Femenino 0

int DetalleCliente[10000][3];

void MostrarDetalleCliente() {
    srand((unsigned)time(NULL)); 

    for(int i = 0; i < 10000; i++) {
        // Sexo aleatorio 0 = F, 1 = M
        DetalleCliente[i][Sexo] = rand() % 2;

        // Año nacimiento entre 1943 y 2025
        DetalleCliente[i][Nacimiento] = 1943 + rand() % (2025 - 1943 + 1);

        // País aleatorio, por ejemplo máximo 10 países
        DetalleCliente[i][Pais] = rand() % 10;

        // Mostrar fila
        for(int j = 0; j < 3; j++) {
            cout << DetalleCliente[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    MostrarDetalleCliente();
    return 0;
}
