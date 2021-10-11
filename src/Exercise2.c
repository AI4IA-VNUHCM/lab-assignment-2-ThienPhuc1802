/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	int result=1;
	//Your codes here
	int i=1;
	int sum=1;
	if(n%2==1){
		i=1;
	}
	else{
		i=2;
	}
	while (i<=n)
	{   
		result=result*i;
		i=i+2;
	}
	
	
	printf("%d", result);
	return 0;
}
