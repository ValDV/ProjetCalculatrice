/*
Projet calculatrice

Créer 6 fonctions

main() => fonction principale
ShowMenu() => Afficher les choix d'opérations
addition()
soustraction()
multiplication()
division()
puissance()

Contraintes
Librairies : uniquement  iostream
Utilisation de double pour les nombres sauf pour l'exposant
Retour du résultat par les fonctions

Attention
Penser à la sortie dans le menu (Arret du programme)
Division par 0 impossible

Bonus
Clear la console entre chaque opération
=> Laisser l'utilisateur voir le résultat
*/

#include <iostream>

double addition(double nombre1, double nombre2);
double soustraction(double nombre1, double nombre2);
double multiplication(double nombre1, double nombre2);
double division(double nombre1, double nombre2);
double puissance(double nombre1, int exposant);
void ShowMenu();

int main()
{
	ShowMenu();

	int choix, exposant;
	double nombre1, nombre2;

	std::cin >> choix;

	std::cout << "Donner un premier nombre :";

	std:cin >> nombre1;

	if (choix != 5)
	{
		std::cout << "Donner un deuxième nombre :";
		
		std::cin >> nombre2;
	}
	else
	{
		std::cout << "Donner un exposant :";
		std::cin >> exposant;
	}

	switch (choix)
	{
	case 1:
		std::cout << addition(double nombre1, double nombre2);
		break;

	case 2:
		std::cout << soustraction(double nombre1, double nombre2);
		break;

	case 3:
		std::cout << multiplication(double nombre1, double nombre2);
		break;

	case 4:
		std::cout << division(double nombre1, double nombre2);
		break;

	case 5:
		std::cout << puissance(double nombre1, int exposant);
		break;

	case 6:
		break;
	}
}

double addition(double nombre1, double nombre2)
{
	return nombre1 + nombre2;
}

double soustraction(double nombre1, double nombre2)
{
	return nombre1 - nombre2;
}

double multiplication(double nombre1, double nombre2)
{
	return nombre1 * nombre2;
}

double division(double nombre1, double nombre2)
{
	return nombre1 / nombre2;
}

double puissance(double nombre1, int exposant)
{
	double result = nombre1;
	for(int i = 1; i < exposant; i++)
	{
		result = result * nombre1;
	}
	return result;
}

void ShowMenu()
{
	std::cout << "(1) Addition" << std::endl;
	std::cout << "(2) Soustraction" << std::endl;
	std::cout << "(3) Multiplication" << std::endl;
	std::cout << "(4) Division" << std::endl;
	std::cout << "(5) Puissance" << std::endl;
	std::cout << "(6) Quitter" << std::endl;
	std::cout << "Choisir une opération :";
}
