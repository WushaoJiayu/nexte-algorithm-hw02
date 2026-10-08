
#include<stdio.h>

void printHelloworld(int n){
	if(n<=20){printf("hello world\n");
		printHelloworld (n+1);
	}else {
		return;
	}
}
int main(){
	printHelloworld(1);
	return 0;
}