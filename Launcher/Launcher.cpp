#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Écrivez les déclarations de vos fonctions ici

void calculerMoyenne(); // Va poser les questions et faire les calcules


int main()
{

	calculerMoyenne();

	return 0;
}

// Écrivez les définitions de vos fonctions ici
void calculerMoyenne()
{
	float moyenneDesNotes;
	int noteAAjouter;
	int quantiteDeNote = 0;
	int totalEnCours = 0;
	bool sortirBoucle = false;

	cout << "Veuillez entrer les notes que dont vous désirez calculer la moyenne" << endl;
	cout << "(entrez -1 pour obtenir le résultat)" << endl;

	while (sortirBoucle == false)
	{
		cout << "Note a ajouter: ";
		cin >> noteAAjouter;

		if (noteAAjouter == -1)
		{
			sortirBoucle = true;
		}

		else
		{
			totalEnCours += noteAAjouter;
			quantiteDeNote++;
		}
	}
	moyenneDesNotes = (float)totalEnCours / quantiteDeNote;  // ici le (float) est pour transformer le int en float


	cout << "La moyenne des notes est de: " << moyenneDesNotes << endl;
	//return moyenneDesNotes;
}
