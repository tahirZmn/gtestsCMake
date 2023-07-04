#include <iostream>
#include <string>
#include "classic.h"
#include "strings.h"

int main(){

int i =0;
std::cout << "Enter your number : ";
std:: cin >> i;
int result = fact (i);
std::cout<< "factorial is : "<< result << std::endl;
bool z = compare(5,5);
std::cout << std::boolalpha;
std::cout<< "the two values are equal : "<< z << std::endl;
bool y = strcmpr("tahir","tahir");
std::cout<< "the two strings are equal : "<< y << std::endl;

return 0;

}
