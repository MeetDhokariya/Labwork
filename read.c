#include<stdio.h>

int main(){
	
	FILE *p;
	
	char name[10];
	
	p = fopen("Demo.txt","r");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		while(fgets(name,10,p) != NULL){
			
			printf("%s",name);
		}	
		fclose(p);
	}
	return 0;
}
