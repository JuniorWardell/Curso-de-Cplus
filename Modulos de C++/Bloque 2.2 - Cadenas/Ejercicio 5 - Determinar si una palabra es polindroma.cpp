//5. Hacer un programa que determine si una palabra es polindroma
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char palabra[20];
	char palabra2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra, 20, '\n');
	
	strcpy(palabra2, palabra);
	
	strrev(palabra2);
	
	if(strcmp(palabra, palabra2) == 0)
		cout<<"Es una palabra polindroma";
	else
		cout<<"No es una palabra polindroma";
	
	return 0;
}