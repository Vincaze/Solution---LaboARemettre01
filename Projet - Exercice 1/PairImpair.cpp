//But :R�aliser un programme si le nombre entr�e dans la console est pair ou impair.
//Auteur : Vincent Tr�panier
//Date : 2021-09-01

#include <iostream>;

void main()
{
	int nbEntrer;
	int resultat;

	setlocale(LC_ALL, "");

	std::cout << "Veuillez entr�e un nombre : "; //On prend le nombre que l'utilisateur souhaite entrer
	
	std::cin >> nbEntrer;

	resultat = nbEntrer % 2; //Ce calcul permet de savoir si le nom,bre entrer est pair ou impair


	if (resultat == 0) {
		std::cout << nbEntrer << " est un nombre pair!";
	}
	else {
		std::cout << nbEntrer << " est un nombre impair!";
	}
	//std::cout << resultat;
}

/*
	plan de test?






*/