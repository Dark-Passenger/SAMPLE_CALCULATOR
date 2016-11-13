#include <iostream>
#include "../include/shared.h"     //we include the class that is compiled into the shared library.

int main()
{
  sharedclass libshare;     //object of the shared library class.
  int a, b = 0;
  int choice;

  std::cout << "Enter first number : ";
  std::cin >> a;
  std::cout << "Enter second number : ";
  std::cin >> b;

  do
  {

    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter selection : ";
    std::cin  >>  choice;

    switch(choice)
        {
          case 1 :
                std::cout << "Result is : " << libshare.add(a,b) << std::endl;
                break;
          case 2 :
                std::cout << "Result is : " << libshare.subtract(a,b) << std::endl;
                break;
          case 3 :
                std::cout << "Result is : " << libshare.multiply(a,b) << std::endl;
                break;
          case 4 :
                std::cout << "Result is : " << libshare.divide(a,b) << std::endl;
                break;
          case 5 :
                break;

          default :
                std::cout << "Wrong choice try again" << std::endl;
        }

  } while(choice != 5);

  return 0;

}
