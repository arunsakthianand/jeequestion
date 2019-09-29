#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int  main() //main function begins
{
	double a=3, b=2, e, area, sum;
	int i;
    
    //Option A is false because eccentricity of all ellipse will be equal
    printf("Option A");
    e = pow((1-pow(b,2)/pow(a,2)),0.5);
    printf("\nEccentricity is %lf", e);
    printf("\nINCORRECT\n\n");
	
	//Option B is true
	printf("\nOption B");
	area = 12;
	sum=0;
	for (i=0;i<10;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\narea = %lf", sum);
	
	area = 12;
	sum=0;
	for (i=0;i<20;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\narea = %lf", sum);
	
	area = 12;
	sum=0;
	for (i=0;i<50;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\narea = %lf", sum);
	
	area = 12;
	sum=0;
	for (i=0;i<100;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\narea = %lf", sum);
	
	area = 12;
	sum=0;
	for (i=0;i<10000;i++)
	{
		sum = sum + area;
		area = area/2;
	}
	printf("\narea = %lf", sum);
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
