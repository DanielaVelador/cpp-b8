#include <iostream>
#include <cstdlib>
using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	int val1, val2, sum, res, mul, div;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Sumar" << endl;
		cout << "\t2 .- Restar" << endl;
		cout << "\t3 .- Multiplicar" << endl;
		cout << "\t4 .- Dividir" << endl;
		cout << "\t5 .- Salir" << endl << endl;
		cout << "Introduce el primer valor: ";
		cin >> val1;
		cout << "Introduce el segundo valor: ";
		cin >> val2;
		cout << "Introduzca la opcion que desea realizar: ";
		cin >> tecla;

		switch (tecla)
		{
		case '1':
			system("cls");
			sum=val1 + val2;
			cout << "El resultado de la suma es: " << sum;
			pausa();
			break;

		case '2':
			system("cls");
			res = val1 - val2;
			cout << "El resultado de la resta es: " << res;
			pausa();
			break;

		case '3':
			system("cls");
			mul = val1 * val2;
			cout << "El resultado de la multiplicacion es: " << mul;
			pausa();
			break;

		case '4':
			system("cls");
			div = val1 / val2;
			cout << "El resultado de la división es: ";
			pausa();
			break;

		case '5':
			bandera = true;
			//exit(1);
			break;

		default:
			system("cls");
			cout << "Opcion no valida.\a\n";
			pausa();
			break;
		}
	} while (bandera != true);

	return 0;
}

void pausa()
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}
