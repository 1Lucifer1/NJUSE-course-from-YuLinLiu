#include<stdio.h>

int main(){
	int number;
	int result;
	
	printf("input a number:\n");
	scanf("%d",&number);
	result = number % 7;
	
	if(result == 0)
	printf("�i�Q�㰣");
	else
	printf("���i�Q�㰣");
	
	return 0;
} 
