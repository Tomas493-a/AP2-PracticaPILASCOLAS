#include <fstream>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo
{
       int info; 
	   struct nodo *ante;       
       struct nodo *sgte;
}*primero, *ultimo;


nodo * crearLista()
{
	struct nodo *cabeza;
    cabeza = new(struct nodo);
    cabeza->sgte=NULL;
    cabeza->ante=NULL;
    return cabeza;
}

void insertarFinal(struct nodo *cabeza, int valor)
{
	struct nodo *t, *q;
	
	q = new(struct nodo);
    q->info  = valor;
    q->sgte = NULL;
    q->ante = NULL;
    
        t = cabeza;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
        q->ante=t;
}

void ordenarLista(struct nodo *cabeza)
{
    struct nodo *actual, *siguiente;
    int t;
    
    actual = cabeza->sgte;
    while(actual->sgte != NULL)
    {
        siguiente = actual->sgte;
          
        while(siguiente!=NULL)
        {
            if(actual->info > siguiente->info)
            {
                t = siguiente->info;
                siguiente->info = actual->info;
                actual->info = t;          
            }
            siguiente = siguiente->sgte;                    
        }   
        actual = actual->sgte;
        siguiente = actual->sgte;
           
    }
}

/* USAR ESTE CODIGO PARA EL ENCOLADO MODIFICANDO EL METODO, PARA INSERTAR LA COLA
void insertarInicio(struct nodo *cabeza, string valor)
{
    struct nodo nuevo,p;
    nuevo = new(struct nodo);
    nuevo->info = valor;
    nuevo->sgte = cabeza->sgte;
    nuevo->ante = cabeza;
    p=cabeza->sgte;
    cabeza->sgte=nuevo;
    if(p!=NULL) {
        p->ante=nuevo;

    }
}

PUEDE IMPRIMIR LA COLA CON mostrarListaD SI HACE EL METODO DE INSERTAR AL INICIO, VUELVA METODO EL MOSTRARLISTAD O INTENTE VOLVER TODO POO, LA LOGICA YA ESTA
FALTA ORDENAR LA LISTA, Y SI PUEDE TODO CON POO 
*/

void mostrarListaD(struct nodo *cabeza)
{
    int i = 0;
     
 	struct nodo *p;
 	p=cabeza->sgte;
    while(p != NULL)
	{
		cout <<' '<< i+1 <<") "<< p->info <<endl;
        p = p->sgte;
        i++;
    }
}

