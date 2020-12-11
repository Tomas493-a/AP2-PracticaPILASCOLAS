#include <iostream>

using namespace std;

class ColaYPila{
	private:
		int Limite;
		int Tope;
		int *vec;
	
	public:
		ColaYPila(int n);
		ColaYPila();
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int v);
		void Apilar(int d);
		int desapilar();
		bool PilaLlena();
		bool PilaVacia();
		void LlenarPila(ColaYPila A);
		void MostrarPila();
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(ColaYPila A);
		void MostrarCola();
		void InvertirCola();
				
 };
