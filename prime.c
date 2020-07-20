//CHALLENGE = RECURSION FUNCTION
//to check whether a number is prime or not using recursion function


#include<stdio.h>
int r(int num,int t)//formal parameter
{
	//3. base condition 1 - not prime numbers
	if(t==1)//if this block is executed that meansnumber has no other factor than itself and 1 ie. it is a prime number
	{
		return 1;
	}
	//4. base condition 2 - prime numbers
	if(num%t==0)//if this block is executed that means number has factor other than itself and 1 ie. it is not a prime number
	{
		return 0;
	} 
	//5. recursion condition 
	else
	{
	    return r(num,t-1);
	}
}
main()
{
	int n,c;
	//1. Take a input from the user
	printf("Enter any digit number: \n");
	scanf("%d",&n);
	//2. Pass the number as an argument in recursion function
	c = r(n,n/2);//actual parameter
	//6. print whether number is prime or not based on recursion function return value
	if(c==1)
	{
		printf("%d is a Prime Number",n);
	}
	else
	{
		printf("%d is not a Prime Number",n);
	}
	return 0;
}
