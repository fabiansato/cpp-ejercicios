#include <iostream>
#include <wchar.h>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, ""); //para poner los acentos
	char nombre[25];
    cout << "Escribe tu nombre:\n";
    cin >> nombre;
    cout << "Hola: " << nombre <<  " bienvenido al mundo de la programación" << endl;
  
    return 0;
}
