
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

main() {
	char dato[20];
	string capsula[20][20];
   	char opcion='s';
    char ca;
                       
    while(opcion=='s'){
		cout<<"\n    Ingrese datos y presione [ENTER]: \n\n     dato: ";
   		cin>>dato;
   		system("cls");
   		for(int i=0;i<strlen(dato);i++){
   			int segmento=(1025 + rand() % 4096);
   			cout<<"\n\n      [Aplicacion]\n\n";
   			cout<<"       | "<<dato[i]<<" |\n\n\n";
   			std::system("pause");
   			
   			cout<<"\n\n      [Transporte][Segmento]\n\n";
			cout<<"       | 80 | "<<segmento<<" | "<<dato[i]<<" |\n\n\n";
        	std::system("pause");
        	
        	cout<<"\n\n      [Internet][Paquete]\n\n";
			cout<<"       | 192.168.1.2 | 60.15.16.2 | 80 | "<<segmento<<" | "<<dato[i]<<" |\n\n";
			cout<<"      ACCESO A LA RED Trama\n\n";
			cout<<"       | AA:AA:AA:AA:AA:AA | BB:BB:BB:BB:BB:BB | 192.168.1.2 | 60.15.16.2 | 80 | "<<segmento<<" | "<<dato[i]<<" |\n\n\n";
			std::system("pause");
        	system("cls");
		}
		cout<<"\n\n\n\n\n\n\n\n\n\n         Desea seguir enviando datos s/n: ";
		cin>>opcion;
		system("cls");
	}
	
    
}
