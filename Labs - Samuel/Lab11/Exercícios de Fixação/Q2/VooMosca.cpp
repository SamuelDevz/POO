#include "Vetor.h"
#include <iostream>
#include <fstream>
#include <random>
using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> angulo_dist(0, 359);
	uniform_real_distribution<> magnitude_dist(0, 9);
	
	cout << "Entre com a distância desejada: ";
	double distancia;
	cin >> distancia;
	
	Vetor vetor;
	int passos{};

	ofstream fout("simulacao_voo_mosca.txt");
	
	while (vetor.Magnitude() < distancia) 
	{
		double angulo = angulo_dist(gen);
		double magnitude = magnitude_dist(gen);
		Vetor movimento(magnitude, angulo);

		passos++;

		fout << passos << ": (x,y) = (" << movimento.X() << ',' << movimento.Y() << ")\n";

		vetor = vetor + movimento;
	}
	
	cout << "----------------------------------------------\n";
	cout << "Foram " << passos << " passos de simulação para chegar em:\n";
	cout << vetor;
	cout << "----------------------------------------------\n";
	cout << "Distância média por passo: " << vetor.Magnitude() / passos << endl;
	
	fout.close();
}