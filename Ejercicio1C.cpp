#include <iostream>
#include <string> // Aunque ya está incluido indirectamente con iostream en muchos casos, es buena práctica
using namespace std;

// 1. Array con países como elementos individuales
string Pais[] = {
    "Afganistán", "Albania", "Alemania", "Andorra", "Angola", "Antigua y Barbuda", "Arabia Saudita", 
    "Argelia", "Argentina", "Armenia", "Australia", "Austria", "Azerbaiyán", "Bahamas", "Bahréin", 
    "Bangladés", "Barbados", "Bielorrusia", "Bélgica", "Belice", "Benín", "Bhután", "Bolivia", 
    "Bosnia y Herzegovina", "Botsuana", "Brasil", "Brunéi Darussalam", "Bulgaria", "Burkina Faso", 
    "Burundi", "Cabo Verde", "Camboya", "Camerún", "Canadá", "Catar", "Chad", "Chile", "China", 
    "Chipre", "Colombia", "Comoras", "Congo (República del)", "Congo (República Democrática del)", 
    "Corea (República de)", "Corea (República Popular Democrática de)", "Costa de Marfil", "Costa Rica", 
    "Croacia", "Cuba", "Dinamarca", "Dominica", "Ecuador", "Egipto", "El Salvador", "Emiratos Árabes Unidos", 
    "Eritrea", "Eslovaquia", "Eslovenia", "España", "Estados Unidos", "Estado de la Ciudad del Vaticano", 
    "Estado de Palestina", "Estonia", "Esuatini", "Etiopía", "Filipinas", "Finlandia", "Fiyi", "Francia", 
    "Gabón", "Gambia", "Georgia", "Ghana", "Granada", "Grecia", "Guatemala", "Guinea", "Guinea-Bisáu", 
    "Guinea Ecuatorial", "Guyana", "Haití", "Honduras", "Hungría", "India", "Indonesia", "Irán (República Islámica del)", 
    "Irak", "Irlanda", "Islandia", "Israel", "Italia", "Jamaica", "Japón", "Jordania", "Kazajistán", 
    "Kenia", "Kirguistán", "Kiribati", "Kuwait", "Laos (República Democrática Popular Lao)", "Lesoto", 
    "Letonia", "Líbano", "Liberia", "Libia", "Liechtenstein", "Lituania", "Luxemburgo", "Macedonia del Norte", 
    "Madagascar", "Malasia", "Malaui", "Maldivas", "Malí", "Malta", "Marruecos", "Islas Marshall", 
    "Mauricio", "Mauritania", "México", "Micronesia (Estados Federados de)", "Moldavia", "Mónaco", 
    "Mongolia", "Montenegro", "Mozambique", "Birmania (Myanmar)", "Namibia", "Nauru", "Nepal", "Nicaragua", 
    "Níger", "Nigeria", "Noruega", "Nueva Zelanda", "Omán", "Países Bajos", "Pakistán", "Palaos", 
    "Panamá", "Papúa Nueva Guinea", "Paraguay", "Perú", "Polonia", "Portugal", "Reino Unido", 
    "República Centroafricana", "República Checa", "República Dominicana", "Ruanda", "Rumania", 
    "Rusia (Federación de)", "Samoa", "San Cristóbal y Nieves", "San Marino", "San Vicente y las Granadinas", 
    "Santa Lucía", "Santo Tomé y Príncipe", "Senegal", "Serbia", "Seychelles", "Sierra Leona", 
    "Singapur", "Siria (República Árabe Siria)", "Somalia", "Sri Lanka", "Sudáfrica", "Sudán", 
    "Sudán del Sur", "Suecia", "Suiza", "Surinam", "Tailandia", "Tanzania (República Unida de)", 
    "Tayikistán", "Timor Oriental (Timor-Leste)", "Togo", "Tonga", "Trinidad y Tobago", "Túnez", 
    "Turkmenistán", "Turquía", "Tuvalu", "Ucrania", "Uganda", "Uruguay", "Uzbekistán", "Vanuatu", 
    "Venezuela", "Vietnam", "Yemen", "Yibuti", "Zambia", "Zimbabue"
};

void ImprimirPaises(){

    for (int i = 0; i < sizeof(Pais)/sizeof(Pais[0]); ++i) {
        cout << Pais[i] << endl;
    }
}

int main() {
    ImprimirPaises(); 
    return 0;
}
