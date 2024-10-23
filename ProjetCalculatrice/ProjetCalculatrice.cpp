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
	int choix, exposant;
	double nombre1, nombre2;

	while (true)
	{
		ShowMenu();

		std::cin >> choix;

		if (choix == 6)
		{
			break;
		}

		std::cout << "Donner un premier nombre :";

		std::cin >> nombre1;

		if (choix != 5)
		{
			std::cout << "Donner un deuxieme nombre :";

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
			std::cout << nombre1 << " + " << nombre2 << " = " << addition(nombre1, nombre2) << std::endl;
			break;

		case 2:
			std::cout << nombre1 << " - " << nombre2 << " = " << soustraction(nombre1, nombre2) << std::endl;
			break;

		case 3:
			std::cout << nombre1 << " * " << nombre2 << " = " << multiplication(nombre1, nombre2) << std::endl;
			break;

		case 4:
			std::cout << nombre1 << " / " << nombre2 << " = " << division(nombre1, nombre2) << std::endl;
			break;

		case 5:
			std::cout << nombre1 << " ^ " << exposant << " = " << puissance(nombre1, exposant) << std::endl;
			break;

		case 6:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
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
	std::cout << "Choisir une operation :";
}
