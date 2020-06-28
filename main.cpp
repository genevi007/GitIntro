#include <iostream>

int main() {
  int nb_valeurs = 0;
  int* valeurs;
  int minimum;
  int maximum;

  if (nb_valeurs <= 0) {
    std::cout << "Petit comique !";
    std::cout << std::endl;
    return 1;
  }

  valeurs = new int[nb_valeurs];

  for (int i=0 ; i<nb_valeurs ; i++) {
    std::cout << "Entrez une valeur : ";
    std::cin >> valeurs[i];
  }

  minimum = valeurs[0];
  maximum = valeurs[0];
  for (int i=1 ; i<nb_valeurs ; i++) {
    if (valeurs[i] < minimum)
      minimum = valeurs[i];
    if (valeurs[i] > maximum)
      maximum = valeurs[i];
  }

  std::cout << "Min = " << minimum;
  std::cout << std::endl;
  std::cout << "Max = " << maximum;
  std::cout << std::endl;

  delete[] valeurs;
}
