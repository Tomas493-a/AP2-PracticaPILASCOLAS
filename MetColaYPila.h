#include <iostream>
#include <conio.h>
#include "ClaseColaYPila.h"

using namespace std;

ColaYPila::ColaYPila(int n)
{
	Limite = n-1;
	Tope = -1;
	vec = new int[n];
}


ColaYPila::~ColaYPila(){
}


void ColaYPila::Apilar(int d)
{
	bool b = PilaLlena();
	if(b==false)
	{
		Tope++;
		vec[Tope] = d;
	}
	else
	{
		cout<<"La pila esta llena";
	}
}


int ColaYPila::desapilar()
{
	int r = vec[Tope];
	Tope--;
	return (r);
}



bool ColaYPila::PilaLlena()
{
	if(Tope>=Limite)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}


bool ColaYPila::PilaVacia()
{
	bool b = false;
	if(Tope==-1)
	{
		b = true;
	}
	return (b);
}
	
void ColaYPila::MostrarPila()
{
	int r;
	ColaYPila Aux(Limite+1);
	while(PilaVacia()==false)
	{
		r = desapilar();
		cout<<"\t\t\t\t|"<<r<<"|"<<endl;
		Aux.Apilar(r);
		
	}
	LlenarPila(Aux);
}

	
void ColaYPila::LlenarPila(ColaYPila A)
{
	while(A.PilaVacia() == false)
	{
		Apilar(A.desapilar());
	}
}

int ColaYPila::GetLimite()
{
	return Limite;
}

void ColaYPila::SetLimite(int l)
{
	Limite = l;
}

int ColaYPila::GetTope()
{
	return Tope;
}

void ColaYPila::SetTope(int t)
{
	Tope = t;
}

int ColaYPila::GetVector()
{
	return *vec;
}

void ColaYPila::SetVector(int v)
{
	*vec=v;
}

void ColaYPila::Encolar(int d)
{
	bool b = ColaLlena();
	if(b==false)
	{
		Tope++;
		vec[Tope] = d;
	}
	else
	{
		cout<<"La pila esta llena";
	}

}


int ColaYPila::Desencolar()
{
	int r = vec[Tope];
	Tope--;
	return (r);
}


bool ColaYPila::ColaLlena()
{
	if(Tope>=Limite)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}



bool ColaYPila::ColaVacia()
{
	bool b = false;
	
	if(Tope == -1)
	{
		b = true; 
	} 
	return (b);

}
	
void ColaYPila::MostrarCola()
{
	int r;
	ColaYPila Aux(Limite+1);
	while(ColaVacia()==false)
	{
		r = Desencolar();
		cout<<"\t\t\t\t\t|"<<r<<"|"<<endl;
		Aux.Encolar(r);
		
	}
	LlenarCola(Aux);
}


	
void ColaYPila::LlenarCola(ColaYPila A)
{
	while(A.ColaVacia() == false)
	{
		Encolar(A.Desencolar());
	}
}


void ColaYPila::InvertirCola()
{
	int r;
	ColaYPila Aux1(Limite+1),Aux2(Limite+1);
	while(ColaVacia()==false)
	{
		r = Desencolar();
		Aux1.Encolar(r);
	}
	while(Aux1.ColaVacia()==false)
	{
		r = Aux1.Desencolar();
		Aux2.Encolar(r);
	}
	LlenarCola(Aux2);
}



