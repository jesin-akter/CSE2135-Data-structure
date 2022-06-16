#include <stdio.h>
#include <math.h>    
int main() {
	double x, y, z, pr1;  	
	printf("\nInput the first number(x): "); 
    scanf("%lf", &x);
    printf("\nInput the second number(y): "); 
    scanf("%lf", &y);
    printf("\nInput the third number(z): "); 
    scanf("%lf", &z);
    
	pr1 = (y*y) - (4*(x)*(z));
		
    if(pr1 > 0 && x != 0) {
		double a, b;
		pr1 = sqrt(pr1);
		a = (-y + pr1)/(2*x);
		b = (-y - pr1)/(2*x);
		printf("Root1 = %.5lf\n", a);
		printf("Root2 = %.5lf\n", b);
	} 
	else
	 {
		printf("\nCann't to find the roots.\n");
	}
	
	return 0;
}