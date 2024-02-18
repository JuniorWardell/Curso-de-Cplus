/*Ejercicio 3: Realice un programa que pida al usuario el nombre o ubicacion 
de un fichero de texto y, a continuacion agrege texto en el hasta que el 
usuario lo decida.*/ 
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void agregar();

int main()
{
	agregar();
	
	return 0;
}

void agregar()
{
	ofstream archivo;
	string nombreArchivo, texto;
	char rpt;
	
	cout<<"Digite el nombre o ubicacion del archivo: ";
	getline(cin, nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::app); //Abrimos el archivo en modo a�adir
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin, texto);

		archivo<<texto<<endl; //agregando info al archivo
		
		cout<<"Desea agregar otra frase? (s/n): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close();
}