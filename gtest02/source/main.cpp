#include <iostream>
#include <string>
#include "classic.h"

int main(){

int i =0;
std::cout << "Enter your number : ";
std:: cin >> i;
int result = fact (i);
std::cout<< "factorial is : "<< result << std::endl;
bool z = compare(5,5);
std::cout << std::boolalpha;
std::cout<< "the two values are  : "<< z << std::endl;

return 0;

}
