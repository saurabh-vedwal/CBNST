#include<stdio.h>
#include<math.h>
void Truncate(double x1){
    float x2=(int)(x1*10000);
    x2/=10000;
    printf("\nx1   :    %lf",x1);
    printf("\nx2   :    %f",x2);    
    printf("\n\nabsolute error   :    %lf",fabs(x1-x2));
    printf("\nrelative error   :    %lf",fabs((x1-x2)/x1));
    printf("\npercentage error :    %lf",fabs((x1-x2)*100/x1));
}
void Round_off(double x1){
    float x2=(int)(x1*100000);
    int temp=((int)x2)%10;  
    x2=(int)(x2/10);
    if(temp>=5)
        x2++;
    x2/=10000;
    printf("\nx1   :    %lf",x1);
    printf("\nx2   :    %f",x2);
    printf("\n\nabsolute error   :    %lf",fabs(x1-x2));
    printf("\nrelative error   :    %lf",fabs((x1-x2)/x1));
    printf("\npercentage error :    %lf",fabs((x1-x2)*100/x1));
}
int main(){
    double x1;
    printf("\nEnter a no: ");
    scanf("%lf",&x1);
    Truncate(x1);
    Round_off(x1);
    return 0;
}
