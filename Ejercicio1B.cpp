#include <iostream>
#include <chrono>
using namespace std;

double PrecioMinLlamada[5]; //Arreglo de plan

void CargarPlan(){ //Función de carga de plan
    PrecioMinLlamada[0] = 0.2;
    PrecioMinLlamada[1] = 0.5;
    PrecioMinLlamada[2] = 0.7;
    PrecioMinLlamada[3] = 0.1;
    PrecioMinLlamada[4] = 1.2;
}

void ImprimirPlan(){ //Función imprimir plan
    cout << "Plan 0: " << PrecioMinLlamada[0] << endl;
    cout << "Plan 1: " << PrecioMinLlamada[1] << endl;
    cout << "Plan 2: " << PrecioMinLlamada[2] << endl;
    cout << "Plan 3: " << PrecioMinLlamada[3] << endl;
    cout << "Plan 4: " << PrecioMinLlamada[4] << endl;
}

int main() {
    auto start = std::chrono::system_clock::now();
    CargarPlan();
    auto medio = std::chrono::system_clock::now();
    ImprimirPlan();
    auto end = std::chrono::system_clock::now();
    
    std::chrono::duration<float,std::milli> 
            duration1 = end - medio;
    std::chrono::duration<float,std::milli> 
            duration2 = medio - start;
    
    std::cout <<"Tiempo de carga: "<< 
            duration2.count() << "s" << std::endl;
    std::cout <<"Tiempo de impresion: " << 
            duration1.count() << "s" << std::endl;
    return 0;
}



