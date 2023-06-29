#include <iostream>

int main(){


//milk

char mango;
char brown_sugar;
char taro;
char strawberry;
char thai; 

// toppings

char boba;
char popping_pearls;
char pudding;
char jelly;

// ice

int ice = 0;

//sugar

int sugar= 0;

//questions

int answer1; int answer2; int answer3; int answer4;

std::cout<< "Make your bubble tea\n";
std::cout<< "Choose your base\n" << "1) Mango\n" << "2) Brown Sugar\n" << "3) Taro\n" << "4) Strawberry\n" << "5) Thai\n";
std::cout << "Enter your answer (1-5): ";
std::cin >> answer1;

if (answer1 == 1)
    mango ++;

else if (answer1 == 2)
    brown_sugar++;
 else if (answer1 == 3)
    taro++;
else if (answer1 == 4)
    strawberry++;
 else if (answer1 == 5)
    thai++;
else {
    std::cout << "Invalid input.\n";
  }


}