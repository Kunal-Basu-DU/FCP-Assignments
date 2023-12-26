//Calculating simple interest using functions
#include <stdio.h>

float calculate_simple_interest(float principal, float rate, float time)
{
    float rate_decimal = rate / 100.0;
    float simple_interest = principal * rate_decimal * time;
    return simple_interest;
}

int main()
{

    float principal_amount, interest_rate, time_period;

    printf("Enter Principal: ");
    scanf("%f", &principal_amount);

    printf("Enter Rate of Interest: ");
    scanf("%f", &interest_rate);

    printf("Enter Time(in yrs): ");
    scanf("%f", &time_period);

    float result_simple_interest = calculate_simple_interest(principal_amount, interest_rate, time_period);
    printf("Simple interest is: %.2f\n", result_simple_interest);

    return 0;
}
