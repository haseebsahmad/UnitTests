////task 1
//#include "stdafx.h"
//#include<iostream>
///* library that includes the factorial function */
//#include "recursive_factorial.h"
//using namespace std;
//int main(){
//	int num;
//	/* Taking input from user to find factorial*/
//	cout << "Enter an integer: ";
//	cin >> num;
//	/* Object of factorial class*/
//	fact obj;
//	/* Calling the function and displaying the result*/
//	cout << "\nThe required factorial is: " << obj.factorial(num);
//	getchar();
//	getchar();
//	return 0;
//}
//task2
#include "stdafx.h"
#include<iostream>
#include<conio.h>
/* Stack header file includes the definition of 
 the stack class implemented
 */
#include "myStack.h"
using namespace std;
int main(){
	int n, c = 0, x;
	stak obj; //stak class object
		cout << "Enter the number of values to be pushed into queue\n";
		cin >> n;
		while (c < n)
		{
			cout << "Enter the value to be entered into queue\n";
			cin >> x;
			obj.push(x);
			c++;
		}
	getchar();
	getchar();
	return 0;
}