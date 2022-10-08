#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "ESTUDIANTES" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Pedro Estrada" << endl;
		cout << "\t2 .- Karla Garcia" << endl;
		cout << "\t3 .- Perla Sanchez" << endl;
		cout << "\t4 .- Antonio Perez" << endl;
		cout << "\t5 .- Ana Valdez" << endl;
		cout << "\t6 .- SALIR" << endl << endl;
		cout << "Introduzca el numero de estudiante: ";
		cin >> tecla;

		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elegido a Pedro Estrada" << endl;
			cout << "El alumno pertenece a 3A" << endl;
			cout << "El correo electronico del alumno es pedroe@ucol.mx" << endl;
			pausa();
			break;

		case '2':
			system("cls");
			cout << "Has elegido a Karla Garcia" << endl;
			cout << "El alumno pertenece a 3C" << endl;
			cout << "El correo electronico del alumno es garciakarla@ucol.mx" << endl;
			pausa();
			break;

		case '3':
			system("cls");
			cout << "Has elegido a Perla Sanchez" << endl;
			cout << "El alumno pertenece a 3D" << endl;
			cout << "El correo electronico del alumno es sanchezp@ucol.mx" << endl;
			pausa();
			break;

		case '4':
			system("cls");
			cout << "Has elegido a Antonio Perez" << endl;
			cout << "El alumno pertenece a 3B" << endl;
			cout << "El correo electronico del alumno es perezantonio@ucol.mx" << endl;
			pausa();
			break;

		case '5':
			system("cls");
			cout << "Has elegido a Ana Valdez" << endl;
			cout << "El alumno pertenece a 3A" << endl;
			cout << "El correo electronico del alumno es valdezaa@ucol.mx" << endl;
			pausa();
			break;

		case '6':
			bandera = true;
			break;

		default:
			system("cls");
			cout << "Valor no valido.\a\n";
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
