#include<stdio.h>
#define SIZE 7 
 int main(){
 	int ar[SIZE];
 	int n;
 	int i;
 	int search;
 	int flag=0;
 	for(i=0;i<SIZE;i++){
 		scanf("%d",&ar[i]);
	 }
 	

 	scanf("%d",&search);
 	for(i=0;i<SIZE;i++){
 	if(ar[i]==search){
 		printf("%d",i);
 		flag=1;
 		break;
	 
		
		
}
}
if(flag!=1){
	printf("-1");
}

}
