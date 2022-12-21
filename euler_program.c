#include<stdio.h>
float fun(float x,float y){
	return x+y;
}
int main(){
	float x0,y0;
	printf("ENTER INITIAL VALUE OF X:	");
	scanf("%f",&x0);
	printf("ENTER INITIAL VALUE OF Y:   ");
	scanf("%f",&y0);
	float xn,yn,h;
	printf("ENTER THE VALUE FOR X FOR WHICH Y IS WANTED:	");
	scanf("%f",&xn);
	int n;
	printf("ENTER THE NUMBER OF STEPS:		");
	scanf("%d",&n);
	h=(xn-x0)/n;
	for(int i=0;i<n;i++){
		float ans=fun(x0,y0);
		yn=y0+h*ans;
		x0=x0+h;
		y0=yn;
	}
	printf("THE VALUE OF Y IS		:   %f",yn);
	return 0;
}