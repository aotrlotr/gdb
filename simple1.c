#include<stdio.h>
#include<stdlib.h>
int add(int n1,int n2){
int sum=0;
sum = n1+n2;

return sum;
}
int diff(int n1,int n2){
int diff=0;
diff=n1-n2;
return diff;
}

int main(int argc, char**argv)
{
	int input1 = atoi(argv[1]);
	int input2= atoi(argv[2]);
	printf("\n\nWelcome to Add Subtract Program\n\n");
	printf("Sum of %d + %d is %d\n\n", input1,input2,add(input1,input2));
	 printf("Diff of %d - %d is %d\n\n", input1,input2,diff(input1,input2));

	getchar();	
	return 0;
}
