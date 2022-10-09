#include<stdio.h>
#include<math.h>
float fun(float x){
    return pow(x,3)-4*x-9;
}
int main(){
    float x0=2,x1=3;
    int i=1; 
    float x2=(x0+x1)/2;
    do{
		printf("%d th  iteration \t% f \n",i,x2);
        if(fun(x0)*fun(x2)<0){
            x1=x2;
        }
        else
            x0=x2;
        x2=(x0+x1)/2;
		i++;
        }while(fabs(x2-x0)>=0.0001 || fabs(x2-x1)>=0.0001);
    }
