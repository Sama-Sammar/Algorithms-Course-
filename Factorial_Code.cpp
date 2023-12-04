#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
//Iterative function to find factorial of a number.
long long iterativeFactorial( long long n)
{
 long long fact =1;
 for( int i=1; i<=n; i++)
 {
 fact=fact*i;
 }
 return fact;
}
//Recursive function to find factorial of a number.
long long recursiveFactorial (long long n)
{
 if (n==0)
 {
 return 1;
 }
 return n*recursiveFactorial(n-1);
}
int main()
{
 long long n;
 cout<<"Inter a number n to find n!"<<endl;
 cin>>n;
 auto start = high_resolution_clock::now();
 cout<<"The Factorial of n by Iterative Method is "
<<iterativeFactorial(n)<<endl;
 
 //cout<<"The Factorial of n by Recursive Method is "
<<recursiveFactorial(n)<<endl;
 auto finish = high_resolution_clock::now();
 // Calculating execution time taken by the program.
 auto duration= duration_cast<microseconds>(finish - start);
 cout << "Time taken in microseconds : "<< 
(double)(duration.count() / 1000.0) << endl;
 return 0;
}

