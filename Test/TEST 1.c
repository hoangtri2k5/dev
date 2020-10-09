#include <stdio.h>
#include <stdlib.h>


int main() {
	int sum, sub, mul, di;
	float x, y;
	sub = x + y;
	sub = x - y;
	mul = x * y;
	di = x/y;
	
	printf("Calculation:");
	printf("\n1.Enter first number: %f",x);
	scanf("%f",&x);
	printf("Enter second number: %f",y);
	scanf("%f",&y);
	printf("\n2.Sum = %d",sum);
	printf("\n3.Substraction = %d",sub);
	printf("\n4.Multiplication = %d",mul);
	printf("\n5.Division = %d",di);
	printf("\n6.Exit");
	return 0;
}
