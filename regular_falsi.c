#include<stdio.h>
#include<math.h>
float fun(float x){
    return cos(x)-x*exp(x);
}
int main(){
    float x0=0,x1=1;
    int i=1; 
    float x2=((x0*fun(x1))-(x1*fun(x1)))/(fun(x1)-fun(x0));
    do{
		printf("%d th  iteration \t% f \n",i,x2);
        if(fun(x0)*fun(x2)<0){
            x1=x2;
        }
        else
            x0=x2;
        x2=((x0*fun(x1))-(x1*fun(x0)))/(fun(x1)-fun(x0));
		i++;
    }while(fabs(x2-x0)>=0.0001 && fabs(x2-x1)>=0.0001);
}
