// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) {
  if(x%2==0){
    return false;
  }
  return true;
}
bool isEven(int x){ 
  if(x%2==0){
    return true; 
  }
  return false;
}
bool isPrime(int x) { 
  int count=0;
  for(int i=1;i<x+1;i++){
    if(x%i==0){
      count++;
    }
  }
  if(x==1){
    return false;
  }
  if(count==2){
    return true;
  }
  return false; 
}
