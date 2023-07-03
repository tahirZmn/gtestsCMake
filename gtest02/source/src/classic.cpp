//#include "classic.h"
#include <iostream>


 int fact(int n){
if (n<=1)
{
    return 1;
}
   return n * fact(n-1);
}

bool compare(int x, int y){

if (x==y)
return true;
else 
return false;

}