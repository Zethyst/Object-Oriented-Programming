#include <stdio.h>
double func(double x){
    double val=(x*x)-4*x-10;
    return val;
}
int main (void){
    double x,a;
printf("\nEnter the value of x: ");
scanf("%f",&x);
printf("\nThe value of f(%f) is %f",x,func(x));
printf("\nEnter the value of x one more time: ");
scanf("%f",&a);
printf("\nThe value of f(%f) is %f",a,func(a));
double sum=0,t1=func(x),t2=func(a);
    // printf("\nNow, root lies between %d and %d ",x,a);
for (int i = 0; i < 5; i++)
{

    printf("\nNow, root lies between %f and %f ",x,a);
    if(t1<0){
     sum=(x+a)/2;
     printf("\nsum: %f");
     if(func(sum)<0)
    {
    t1=func(sum);
    x=sum;
    }
    else if(func(sum)>0)
    {
    t2=func(sum);
    a=sum;
    }
    printf("\nf(%f): %f",x,t1);
    }
    if(t2>0){
    printf("\nNow, root lies between %d and %d ",x,a);
    sum=(x+a)/2;
     printf("\nsum: %f");
    if(func(sum)>0)
    {
     t2=func(sum);
    a=sum;
    }
    else if(func(sum)<0)
    {
    t1=func(sum);
    x=sum;
    }
     printf("\nf(%f): %f",a,t2);
    
    }

}

return 0;
}