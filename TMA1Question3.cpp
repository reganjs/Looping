//Regan Setter
//Student ID 3505894
//Computer Science 206
//January 12th, 2021

//Write a program that uses two nested for loops and the modulus operator (%) to detect and print the prime numbers from 1 to 10,000. (Prime numbers are natural numbers that are not evenly divisible by any other number except for themselves and one). Display all the primes found.

//Tests: Used outter loop for generating numbers from 1 to 10,000, the inner loop will check if the number is prime or not. In the outter loop if the number is prime a flag will represent 1 as the number is prime and displays that number to the user. If the flag is 0 then the number will not be displayed to the user.

#include <iostream>
using namespace std;

int main()
{
  int flag = 1; //flag is used here to check if the number is prime or not. 1 represents that the number is prime and 0 represents that the number is not prime.

  for(int i = 1; i <= 10000; i++) //looping from 1 to 10,000 numbers
  {
    flag = 1; // make is prime flag 1
    for(int j = 2; j <= (i / 2); j++) //looping to find the whether the number is prime or not
    {
      if(i % j == 0) //if the number is evenly divisible by any other number
      {
        flag = 0; //make is prime flag 0
        break; //breaks the inner loop
      }
    }

    if(flag == 1 && (i != 1)) //if the number is not equal to 1 then it will not be displayed to the user, if the flag is equal to 1 then its a prime number and the prime number will be displayed to the user.
    {
      cout << i <<" ";
    }
  }

  return 0;
}