 #include <iostream> 
using namespace std; 
 
// Function prototype 
bool isPrime(int); 
 
int main() 
{ 
   int n;    //  Variable for user entered number
    
   // Get a number from the user. 
   cout <<  "Enter a number and I'll tell you whether it is prime: "
        <<  endl;
   cin >>  n;
    
   // Determine whether it is prime. 
   if (isPrime(n)) 
      cout <<  n << " is prime.\n";
   else 
      cout <<  n << " is NOT prime.\n";
 
   return 0; 
} 
 
// ******************************************************** 
// The isPrime function takes an integer as an argument   * 
// and returns true if the argument is a prime number,    * 
// or false otherwise.                                    * 
// ******************************************************** 
 
bool isPrime(int num) 
{ 
   if (num < 2) 
      return false; 
 
   // divisorFound is a flag that indicates 
   // whether num has a divisor. 
   bool divisorFound = false; 
    
   // div is the divisor. We start at 2. 
   int div = 2; 
    
   // Let div take on the values from 2 
   // up to num, or until divisorFound is true. 
   while(div < num && !divisorFound) 
   { 
      // If div divides evenly into num, then 
      // we have found a divisor and this is 
      // not a prime number. 
      if ((num % div) == 0) 
         divisorFound = true; 
       
      // Increment to the next divisor. 
      div++; 
    } 
    
    // If divisorFound is still false, then 
    // we have a prime number. Otherwise, num 
    // is not prime. 
    return !divisorFound; 
}