//But :Réaliser un programme qui affiche un nombre a 5 chiffres verticalement
//Auteur : Vincent Trépanier
//Date : 2021-09-01

#include <iostream>;

void main()
{
	int nbEntrer;
	
	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrée un nombre à 5 chiffres: "; //On prend le nombre que l'utilisateur souhaite entrer

	std::cin >> nbEntrer;

	if (nbEntrer > 9999 && nbEntrer < 100000) {
		//On divise par 10 000 pour avoir le chiffre du
		std::cout << nbEntrer / 10000 % 10 << "\n";
		std::cout << nbEntrer / 1000 % 10 << "\n";
		std::cout << nbEntrer / 100 % 10 << "\n";
		std::cout << nbEntrer / 10 % 10 << "\n";
		std::cout << nbEntrer % 10 << "\n";
	}
	else {
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
}