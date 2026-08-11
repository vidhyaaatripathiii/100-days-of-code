//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    double principal = 5000.0;  // Initial principal amount
    double rate = 5.0;          // Annual interest rate (in percentage)
    double time = 3.0;          // Time period in years
    double n = 4.0;             // Number of times interest compounds per year (e.g., Quarterly)

    // Convert interest rate to decimal format
    double r_decimal = rate / 100.0;

    // Calculate total amount using pow(base, exponent)
    double amount = principal * pow((1 + r_decimal / n), (n * time));
    
    // Calculate total interest earned
    double compound_interest = amount - principal;

    // Display the results
    printf("Total Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}