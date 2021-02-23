#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	char b[20];
	int i,temp=0;
	gets(s);
	//printf("the stored value is: %s",s);
   for(i=0;i<strlen(s);i++){ 
   	if( s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
   		b[temp++]=s[i];
}
 for(i=0;i<strlen(s);i++){ 
   	if( s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
   		s[i]=b[--temp];
   }
	printf("%s\n",s); 
	 	
   }
  
	

