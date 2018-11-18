#include<cstdio>
#include<iostream>
#define maxSize 10
using namespace std;
int i,j,s1,w,p[100],q[100];


void Joseph(void){//‘º…™∑ÚŒ Ã‚ 

	for(i=0;i<100;i++){
		q[i]=0;
	}
	s1 = 1; 
	for(i=1;i<=100;i++){
		p[i-1]=i;
	}
	for(i=100;i>=2;i--)
	{
		s1=(s1+10-1)%i;
		if(s1 == 0) s1 = i;
		w = p[s1-1];
		for(j=s1;j<i;j++) p[j-1] = p[j];
		p[i-1] = w;
	}
	for(i=0,j=100-1;j<100,j>=0;i++,j--){
		q[j]=p[i];
	}
	for(i=0;i<100;i++) p[i] = q[i];
}
 int main(){
// int m = 10,s=1,n=100;
 	Joseph();
 	int i=0;
 	while(1){
 		if(i>=100){
 			break;
		 }
 		cout<<p[i]<<endl;
 		i++;
	 }
 	
 	return 0;
 }
