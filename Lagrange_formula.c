#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF TERMS	:");
	scanf("%d",&n);
	float given,ax[n],ay[n],nr,dr,y=0.0;
	
	printf("ENTER THE SET OF VALUES FOR X	:\n");
	for(int i=0;i<=n;i++){
		scanf("%f",&ax[i]);
	}
	
	printf("\nENTER THE SET OF VALUES FOR Y		:\n");
	for(int i=0;i<=n;i++){
		scanf("%f",&ay[i]);
	}
	printf("ENTER THE VALUE OF X FOR WHICH Y IS WANTED :	");
	scanf("%f",&given);
	for(int i=0;i<n;i++){
		nr=dr=1;
		for(int j=0;j<n;j++){
			if(j!=i){
				nr*=given-ax[j];
				dr*=ax[i]-ax[j];
			}
		}
		y+=(nr/dr)*ay[i];
	}
	printf("When x= %f 			y=%f",given,y);
	return 0;
}