	/*
	Name: Punto 3 Tipo 1 ALG2 PRÁCTICA
	Copyright: POLI JIC
	Author: POR: Santiago Olmedo, David Londoño, Tomás Pineda, Carlos González.
	Description: 
	Usando los conocimientos sobre estructuras dinámicas listas, pilas y colas, escriba un programa
	que permita al usuario seleccionar entre las siguientes opciones: a) ingresar datos numéricos en
	una pila A, b) ingresar datos numéricos en una pila B, c) generar una lista doblemente enlazada
	con los datos contenidos en ambas estructuras y al tiempo generar una cola  simplemente enlazada,
	sacando de cada pila de manera intercalada los datos, las pilas deberán quedar vacías. d) ordenar lista
*/
#include <iostream>
#include <conio.h>
#include "lista.h"
#include "MetColaYPila.h"

using namespace std;

int main(){
	system ("cls");
	
	int op, lim,lim2,lim3,n,i, r, ciclo, Cent1, Cent2, Cent3, Cent4;
	struct nodo *cabeza = NULL;
	cabeza=crearLista();
	cout<<"\n\n\t\t\t\t  PUNTO 3 - TIPO 1"<<endl;
	cout<<"\n\t\t\t************** MENU **************\n"<<endl;
	do{
		cout<<"\t\t\tDigite el limite de la pila #1: ";
		cin>>lim;
	}while(lim < 1);
	ColaYPila P(lim);
	cout<<"\n";
	do{
		cout<<"\t\t\tDigite el limite de la pila #2: ";
		cin>>lim2;
	}while(lim2 < 1);
	ColaYPila P2(lim2);
	ColaYPila Cola(lim+lim2);
	Cent1 = 0;
	Cent2 = 0;
	Cent3 = 0;
	Cent4 = 0;
	system("cls");
	do
	{
		cout<<"\n\n\n \t\t___________________________________________________ \n";
  		cout<<"         	        _____________________________________	 "<<endl; 
  		cout<<" \t\t|       |				    |     |"; 
  	  	cout<<"\n\t\t|       | 	     MENU PUNTO 3           |     |"<<endl; 	 
 		cout<<" \t\t|       |___________________________________|     |"<<endl; 
 		cout<<"\t\t___________________________________________________ \n";
 		cout<<" \t\t|   | 					          |"<<endl;
  		cout<<" \t\t|___|_____________________________________________| \n";
  		cout<<" \t\t|1. | \tINSERTAR ELEMENTOS EN LA PILA 1  	  |"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|2. | \tINSERTAR ELEMENTOS EN LA PILA 2           |"<<endl;
  		cout<<" \t\t|___|_____________________________________________| \n";
  		cout<<" \t\t|3. | \tMOSTRAR ELEMENTOS DE LA PILA 1            |"<<endl;
  		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|4. | \tMOSTRAR ELEMENTOS DE LA PILA 2            |"<<endl;
  	 	cout<<" \t\t|___|_____________________________________________| \n";
  		cout<<" \t\t|5. | \tDESAPILAR Y METER EN UNA LISTA INTERCALADO|"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|6. | \tMOSTRAR LISTA ENLAZADA	           	  |"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|7. | \tMOSTRAR COLA INTERCALADA                  |"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|8. | \tORDENAR LISTA ENLAZADA                    |"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|9. | \tTERMINAR...	           		  |"<<endl;
   		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|   | 					          |"<<endl;
 		cout<<" \t\t|___|_____________________________________________| \n";
   		cout<<" \t\t|   | \tESPERANDO A INGRESO DE OPCION....         |"<<endl;
		cout<<" \t\t|___|_____________________________________________| \n";
		cout<<"\n";
		do{
			cout << "Ingrese la opcion: "; 
			cin >> op;
			
		}while(op < 1 && op > 9);
		cout<<"\n";
		switch (op){
			case 1: if(Cent3 == 1)
					{
						cout<<"Ya realizo el debido proceso con la Pila, para volver a ingresar"<<endl;
						cout<<"reinicie el programa para proseguir con nuevos datos.\n"<<endl;
					}
					else
					{
						if(Cent1 == 1)
						{
							cout<<"La Pila 1 ya posee elementos\n"<<endl;

						}
						else
						{
							for(i = 0 ; i < lim ; i++)
							{
								do{
									cout<<"Para la pila 1, Digite el dato entero #"<<i+1<<": ";
									cin>>n;
									}while(n < 1);
								P.Apilar(n);
								Cent1 = 1;
							}
							cout<<"\n\tDatos ingresados correctamente.\n"<<endl;
						}
					}
					system("pause");
					system("cls");
					break;
			case 2: 
					if(Cent3 == 1)
					{
						cout<<"Ya realizo el debido proceso con la Pila, para volver a ingresar"<<endl;
						cout<<"reinicie el programa para proseguir con nuevos datos.\n"<<endl;
					}
					else
					{
						if(Cent2 == 1)
						{
							cout<<"La Pila 2 ya posee elementos\n"<<endl;

						}
						else
						{
							for(i = 0 ; i < lim2 ; i++)
							{
								do{
									cout<<"Para la pila 2, Digite el dato entero #"<<i+1<<": ";
									cin>>n;
								}while(n < 1);
								P2.Apilar(n);
								Cent2 = 1;
							}
							cout<<"\n\tDatos ingresados correctamente.\n"<<endl;
						}
					}
					system("pause");
					system("cls");
					break;
			case 3: if(Cent1 == 0){
						cout<<"La Pila 1 no posee elementos.\n"<<endl;	
					}
					else
					{
						cout<<"\t\t\tMOSTRANDO PILA 1: "<<endl;
						cout<<"\n";
						P.MostrarPila();
						cout<<"\n";
					}
					system("pause");
					system("cls");
					break;
			case 4: if(Cent2 == 0){
						cout<<"La Pila 2 no posee elementos.\n"<<endl;
					}
					else
					{
						cout<<"\t\t\tMOSTRANDO PILA 2: "<<endl;
						cout<<"\n";
						P2.MostrarPila();
						cout<<"\n";
					}
					system("pause");
					system("cls");
					break;
				
			case 5: 
					if(Cent1 == 1 && Cent2 == 1){
						ciclo = (lim + lim2);
						while(ciclo != 0)
						{
							if(ciclo != 0 )
							{
								if(lim != 0)
								{		
									r = P.desapilar();
									insertarFinal(cabeza, r);
									Cola.Encolar(r);
									lim--;
									ciclo--;	
								}
							}
							if(ciclo != 0)
							{
								if(lim2 != 0)
								{
									r = P2.desapilar();
									insertarFinal(cabeza, r);
									Cola.Encolar(r);		
									lim2--;
									ciclo--;
								}
							}
						}
						cout<<"Datos de la Pila 1 y Pila 2 encolados en la Cola y puestos en la lista correctamente.\n"<<endl;
						Cent1 = 0;
						Cent2 = 0;
						Cent3 = 1;
					}
					else
					{
						if(Cent1 != 1 && Cent2 != 1){
							cout<<"La Pila 1 y la Pila 2 no tienen datos para intercalar...\n"<<endl;
						}
						else if(Cent1 != 1){
							cout<<"La Pila 1 todavia no tiene datos para intercalar con la Pila 2...\n"<<endl;
						}
						else if(Cent2 != 1){
							cout<<"La Pila 2 todavia no tiene datos para intercalar con la Pila 1...\n"<<endl;
						}
					}
					system("pause");
					system("cls");
					break;
			case 6:	if(Cent3 == 0){
						cout<<"No se han desapilado las pilas, por lo tanto:"<<endl;
						cout<<"La lista no se ha generado para mostrarla. \n"<<endl;
					}
					else
					{
						if(Cent4 == 0){
							cout<<"MOSTRANDO LISTA INTERCALADA: \n"<<endl;
						}
						else if(Cent4 == 1){
							cout<<"MOSTRANDO LISTA ORDENADA: \n"<<endl;
						}
						mostrarListaD(cabeza);
						cout<<"\n";
					}
					system("pause");
					system("cls");
					break;
			case 7: if(Cent3 == 0){
						cout<<"No se han desapilado las pilas, por lo tanto:"<<endl;
						cout<<"Cola no Generada para mostrarla. \n"<<endl;
					}
					else if(Cent3 == 1)
					{
						cout<<"\t\t\t\tMOSTRANDO COLA: \n"<<endl;
						Cola.MostrarCola();
						cout<<"\n";
					}
					system("pause");
					system("cls");
					break;
			case 8: if(Cent4 == 1){
						cout<<"Ya se han ordenado los Datos en la lista.\n"<<endl; 
					}
					else
					{
						if(Cent3 == 0){
							cout<<"No se han desapilado las pilas, por lo tanto:"<<endl; 
							cout<<"Lista no Generada, no hay datos para ordenar. \n"<<endl;
						}
						else if(Cent3 == 1)
						{
							ordenarLista(cabeza);
							cout<<"Lista Ordenada eficazmente, volver a mostrar LA LISTA para visualizar. \n"<<endl;
							Cent4 = 1;
						}
					}
					system("pause");
					system("cls");
					break;
			case 9: P.~ColaYPila();
					cout<<"Destruyendo Pila 1....\n";
					P2.~ColaYPila();
					cout<<"Destruyendo Pila 2....\n";
					Cola.~ColaYPila();
					cout<<"Destruyendo Cola....\n";
					cout<<"\nSaliendo del Programa... ";
					exit(EXIT_FAILURE);
		}
	}while (op!=9);
	return 0;
}
