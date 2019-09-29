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
	printf("\narea = %lf", sum);
}

int  main() //main function begins
{
	double a=3, b=2, e;
	int i;
	
	printf("\nFor area of rectangle to be maximum 12 x SinA x CosA should be maximum\n\n");
    
    //Option A is false because eccentricity of all ellipse will be equal
    printf("Option A");
    e = pow((1-pow(b,2)/pow(a,2)),0.5);
    printf("\nEccentricity is %lf", e);
    printf("\nINCORRECT\n\n");
	
	//Option B is true
	printf("\nOption B");
	
	fun(5);
	fun(10);
	fun(20);
	fun(30);
	fun(50);
	fun(10000);
	
	printf("\nCORRECT\n\n");
	
	//Option C is true
	printf("\nOption C");
	printf("\nFor 9th ellipse");
	for (i=0;i<8;i++)
	{
		a=a/pow(2,0.5);
		b=b/pow(2,0.5);
	}
	printf("\na = %lf , b = %lf", a,b);
	printf("\nLength of latus rectum = %lf", 2*pow(b,2)/a);
	printf("\nCORRECT\n\n");
	
	//Option D is true
	printf("\nOption D");
	printf("\nDistance of focus from center in E9 is = %lf", a*e);
	printf("\nINCORRECT");
	
	
return 0;
}
