#include<stdio.h>
#include<string.h>
 void bitstuffing(char*input){
 	int count = 0;
 	printf("Original data:%s\n",input);
 	printf("Data after bitstuffing:");
 	for(int i=0;input[i]!='\0';i++){
 		printf("%c",input[i]);
 		if(input[i]=='1'){
 			count++;
 			if( count==5){
 				printf("0");
 				count=0;
			 }
		 }
		 else{
		 	count = 0;
		 }
	 }
	 printf("\n");
 }
 int main(){
 	char inputdata[100];
	printf("Enter the binary data(only 0 and 1):");
	scanf("%s",inputdata);
	bitstuffing(inputdata);
	return 0;\
	
	 
 }
