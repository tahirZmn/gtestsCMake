#include <iostream>
#include <string>
#include "strings.h"

using namespace std;

bool strcmpr(string s1, string s2){
   if (s1.compare(s2)==0){
    return true;
   }
   else 
   return false;
}