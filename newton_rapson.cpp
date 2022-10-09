#include<stdio.h>
#include<math.h>
float fun(float x){
    return pow(x,3)-2*pow(x,2)-4;
}
float dfun(float x){
    return 3*pow(x,2)-4*x;
}
int main(){
    float a=1,b=2;
    int i=0;
    float x0=(a+b)/2;
    float x1=x0-fun(x0)/dfun(x0);
    printf(" %dth iteration -> \t %f\n",i++,x0);
    while(fabs(x1-x0)>0.0001){
        x0=x1;
        printf(" %dth iteration -> \t %f\n",i++,x1);
        x1=x0-fun(x0)/dfun(x0);
    }
}