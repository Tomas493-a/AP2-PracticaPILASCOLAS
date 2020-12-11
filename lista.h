#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


class lista {
	private: 
		int info;
		struct nodo	*ante;
		struct nodo *sgte;
	
	public: 
		lista (nodo *ante, nodo *sgte);
		~lista ();
		int Getinfo ();
		void Setinfo (int D);
		struct Getante ();
		void Setante (struct nodo *p);
		struct Getsgte ();
		void Setsgte (struct nodo *q);
		struct nodo *crearLista ();
		void ordenarLista();
		void insertarInicio();
		void mostrarListaD();
};

int lista :: Getante()
{
	return ante;
}

void lista :: Setinfo (int D)
{
	info = D;
}

struct lista :: Getante (	){
	return ante;
}

void lista :: Setante (struct nodo *p){
	
	p->Setante();
}

struct lista :: Getsgte (){
	return sgte;
}

void lista :: Setsgte (struct nodo *q){
	sgte = q;
}


lista::lista (nodo *ante, nodo *sgte){
	sgte = NULL;
	ante = NULL;
}

lista::~lista(){
	
}

struct nodo
{
    int info; 
	struct nodo *ante;       
	struct nodo *sgte;
};


struct nodo lista :: *crearLista ()
{
	struct nodo *cabeza;
    cabeza = new(struct nodo);
    cabeza->sgte=NULL;
    cabeza->ante=NULL;
    return cabeza;
}




/*
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
*/


void lista :: ordenarLista(struct nodo *cabeza)
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


void lista :: insertarInicio(struct nodo *cabeza, int valor)
{
    struct nodo *nuevo, *p;
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

/*
PUEDE IMPRIMIR LA COLA CON mostrarListaD SI HACE EL METODO DE INSERTAR AL INICIO, VUELVA METODO EL MOSTRARLISTAD O INTENTE VOLVER TODO POO, LA LOGICA YA ESTA
FALTA ORDENAR LA LISTA, Y SI PUEDE TODO CON POO 
*/

void lista :: mostrarListaD(struct nodo *cabeza)
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

