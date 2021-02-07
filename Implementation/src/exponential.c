#include<stdio.h>
#include<math.h>
#include <exponential.h>
long long result=1;
float expo(int n,float x)

{
    int i;
	float sum = 1.0;
    for(i=n-1;i>0;--i)
    {

    	sum = 1 + (x*sum/i);
    }
    return sum;
}

float power(int base,int x1)

{
	
	if(x1>=0){
	
		while(x1!=0){
			result *= base;
			--x1;
		}
	return result;
}

	else if (x1<0){
		return (pow(base,x1));
}
}

void exponential()
{
    int n=100;
    int base;
    printf("Enter base: ");
    scanf("%d",&base);
    float x;
    printf("Enter x: ");
    scanf("%f",&x);
    int x1;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("e^x = %f", expo(n,x));
    printf("\na^x = %f",power(base,x1));
}
