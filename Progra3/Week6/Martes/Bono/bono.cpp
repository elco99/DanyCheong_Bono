#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char** argv){
	srand(time(0));
	int tama1,tama2;
	cout << "Que tan grande quiere el 1er arreglo?";
	cin >> tama1;
	cout << "Que tan grande quiere el segundo arreglo?";
	cin >> tama2;

	char** palabra = new char*[tama1];
	char** respuesta = new char*[tama2];
	char ingreso[80];
	bool seguir=true;
	int a,b;
	char** resp = new char*[tama1*tama2];
	int ans;
	int cont=0,cont2=0;
	cout << "Palabras de columna A:"<<endl;
	for(int i=0;i<tama1;i++){
		cout << i << ") ";
		cin >> ingreso;
		palabra[i] = new char[strlen(ingreso)+1];
		strcpy(palabra[i],ingreso);
	}
	char** palabra2 = new char*[tama1];
	char** respuesta2 = new char*[tama2];

	cout << "Palabras de columna B:"<<endl;
	for(int i=0;i<tama2;i++){
		cout << i << ") ";
		cin >> ingreso;
		respuesta[i] = new char[strlen(ingreso)+1];
		strcpy(respuesta[i],ingreso);
	}
	int cc=0;
	
	do{
		cout << "cA: ";
		cin >>a;
		cout << "cb: ";
		cin >> b;
		palabra2[cont] = palabra[a];
		respuesta2[cont2] = respuesta[b];
		cont++;
		cont2++;

		char* p;
		char* y;
		string s,x;
		stringstream strs,strss;
		strs<<a;
		strss<<b;
		s = strs.str();
		p= (char*)s.c_str();
		x = strss.str();
		y= (char*)x.c_str();
		resp[cc] = new char[4];
		strcat(resp[cc],p);
		strcat(resp[cc],"-");
		strcat(resp[cc],y);
		cc++;

		cout << "Desea seguir ingresando respuestas?[1-si/2-no]";
		cin >> ans;
	}while(ans==1);
	for(int i=tama1;i>0;i--){
		int r1 = rand()%tama1;
		char* temp = palabra[i-1];
		palabra[i-1] = palabra[r1];
		palabra[r1] = temp;////Shuffle primera columna
	}

	for(int i=tama2;i>0;i--){////Shuffle segunda columna
		int r2 = rand()%tama2;
		char* temp = respuesta[i-1];
		respuesta[i-1] = respuesta[r2];
		respuesta[r2] = temp;
	}
	cout << endl<<endl;
	
	int continuar,a1,b1;
	int win = 0;
	do{
		//Imprimir el arreglo desordenado
		for(int i=0;i < tama1;i++){
			cout << i<<")" <<palabra[i]<<endl;
		}
		cout << endl;
		for(int i=0;i < tama2;i++){
			cout << i<<")" <<respuesta[i]<<endl;
		}
		
		cout << "cA: ";
		cin >>a1;
		cout << "cb: ";
		cin >> b1;

		char* pch;
		for(int i= 0;i<cc;i++){
			pch = strtok(resp[i],"-");
			int p1,p2;
			p1 = (int)pch[0];
			switch(p1){
				case 48:{
					p1 = 0;
				break;}
				case 49:{
					p1 = 1;
				break;}
				case 50:{
					p1 = 2;
				break;}
				case 51:{
					p1 = 3;
				break;}
				case 52:{
					p1 = 4;
				break;}
				case 53:{
					p1 = 5;
				break;}
				case 54:{
					p1 = 6;
				break;}
				case 55:{
					p1 = 7;
				break;}
				case 56:{
					p1 = 8;
				break;}
				case 57:{
					p1 = 9;
				break;}
			}
			p2 = (int)pch[2];
			switch(p2){
				case 48:{
					p2 = 0;
				break;}
				case 49:{
					p2 = 1;
				break;}
				case 50:{
					p2 = 2;
				break;}
				case 51:{
					p2 = 3;
				break;}
				case 52:{
					p2 = 4;
				break;}
				case 53:{
					p2 = 5;
				break;}
				case 54:{
					p2 = 6;
				break;}
				case 55:{
					p2 = 7;
				break;}
				case 56:{
					p2 = 8;
				break;}
				case 57:{
					p2 = 9;
				break;}
			}
			if(palabra[a1] == palabra2[p1]){
				if(respuesta[b1] == respuesta2[p2]){
					win++;
				}
			}

		}
		cout << "Quiere Seguir?[1-si/2-no]";
		cin >> continuar;
	}while(continuar == 1);

	double porcentaje;
	porcentaje = win/cc;
	porcentaje = porcentaje*100;

	cout << "Saco " << porcentaje << '%' << " correcto."<<endl;
	/////////////////Delete de todo
	for(int i=0;i<tama1;i++){
		delete[] palabra[i];
	}
	delete[] palabra;

	for(int i=0;i<tama2;i++){
		delete[] respuesta[i];
	}
	delete[] respuesta;

	for(int i=0;i<tama1;i++){
		delete[] palabra2[i];
	}
	delete[] palabra2;

	for(int i=0;i<tama2;i++){
		delete[] respuesta2[i];
	}
	delete[] respuesta2;

	for(int i=0;i<tama1*tama2;i++){
		delete[] resp[i];
	}
	delete[] resp;
	return 0;
}