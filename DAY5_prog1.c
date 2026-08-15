//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> //Required for pow()

int main()
{
    double principal = 5000.0;  // Initial principal amount
    double rate = 5.0;          // Annual interest rate in percentage
    double time = 3.0;          // Time in years
    
    // Calculate simple interest
    double simpleInterest = (principal * rate * time) / 100.0;
    
    // Calculate compound interest
    double compoundInterest = principal * (pow(1 + rate / 100.0, time) - 1);
    
    // Display the results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);
    
    return 0;       
}