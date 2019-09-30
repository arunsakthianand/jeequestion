#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

void fun(int X);

void fun(int X)
{
	double area = 12;
	double sum=0;
	for (int i=0;i<X;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\n\tarea for %d terms = %lf",X, sum);
}

int  main() //main function begins
{
	double a=3, b=2, e;
	int i;
	
	printf(" For area of rectangle to be maximum 24 x SinX x CosX should be maximum\n\n");
    
    //Option A is false because eccentricity of all ellipse will be equal
    printf("    Option A");
    e = pow((1-pow(b,2)/pow(a,2)),0.5);
    printf("\n\tEccentricity is %lf", e);
    printf("\n\tINCORRECT\n");
	
	//Option B is true
	printf("\n    Option B");
	
	fun(5);
	fun(10);
	fun(20);
	fun(30);
	fun(50);
	fun(10000);
	
	printf("\n\tCORRECT\n");
	
	//Option C is true
	printf("\n    Option C");
	printf("\n\tFor 9th ellipse");
	for (i=0;i<8;i++)
	{
		a=a/pow(2,0.5);
		b=b/pow(2,0.5);
	}
	printf("\n\ta = %lf , b = %lf", a,b);
	printf("\n\tLength of latus rectum = %lf", 2*pow(b,2)/a);
	printf("\n\tCORRECT\n");
	
	//Option D is true
	printf("\n    Option D");
	printf("\n\tDistance of focus from center in E9 is = %lf", a*e);
	printf("\n\tINCORRECT");
	
	
return 0;
}
