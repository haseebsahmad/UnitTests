/* Factorial class definition */
#include "stdafx.h"
class fact{
public:
int factorial(int num){
	/* Recursively calling the function to find factorial*/
	if (num >= 0){
		/* Recursive calls to the function until the stopping condition is achieved*/
		return num*factorial(num - 1);
	}
	else{
		/* If entered number by user is either 0 or negative then it will not find the factorial*/
		return -1;
	}
}
};