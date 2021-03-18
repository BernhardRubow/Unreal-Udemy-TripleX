#include <iostream>

int main()
{
  std::cout << "You are a secret agent breaking into a secure server room...";
  std::cout << std::endl;
  std::cout << "Enter the correct code to continue..." << std::endl
            << std::endl;

  int codeA = 4;
  int codeB = 3;
  int codeC = 2;

  int codeSum = codeA + codeB + codeC;
  int codeProduct = codeA * codeB * codeC;

  std::cout << "There are 3 numbers in the code" << std::endl;
  std::cout << "They sum up to " << codeSum << std::endl;
  std::cout << "The product of these numbers is " << codeProduct << std::endl;
  std::cout << std::endl;

  int guessA, guessB, guessC;
  std::cout << "Your input: (separate by space)" << std::endl;
  std::cin >> guessA;
  std::cin >> guessB;
  std::cin >> guessC;

  int playerSum = guessA + guessB + guessC;
  int playerProdukt = guessA * guessB * guessC;

  std::cout << "Player Sum : " << playerSum << std::endl;
  std::cout << "Player Product : " << playerProdukt << std::endl;

  return 0;
}