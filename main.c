#include <iostream>
#include "calculator.h"

int main()
{
int operation;
int number1, number2;
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "5. Modulus\n";
cout << "6. Power\n";
cout << "7. Factorial\n";
	
cin >> "operation";

switch(operation)
{
       case 1:  cout << "Enter first operand\n";
	        cin >> "number1";
	        cout << "Enter second operand\n";
	        cin >> "number2";
	        cout("Result is:%d\n",addition(number1,number2));
	        break;
    
	case 2: cout << "Enter first operand\n";
	        cin >> "number1";
	        cout << "Enter second operand\n";
	        cin >> "number2";
	        cout << "subtraction(number1,number2)";
	        break;
			
	case 3: cout << "Enter first operand\n";
	        cin >> "number1";
	        cout <<"Enter second operand\n";
	        cin >> "number2";
	        cout << "multiplication(number1,number2)";
	        break;
			
	case 4: cout << "Enter first operand\n";
	        cin >> "number1";
	        cout << "Enter second operand\n";
	        cin >> "number2";
	        cout << "division(number1,number2)";
	        break;
			
	case 5: cout << "Enter first operand\n";
	        cin >> "number1";
	        cout << "Enter second operand\n";
	        cin >> "number2)";
	        cout << "addition(number1,number2)";
	        break;
			
	case 6: cout << "Enter first operand\n";
	        cin >> "number1";
	        cout << "Enter second operand\n";
	        cin >> "number2";
	        cout << "power(number1,number2)";
	        break;
			
	case 7: cout << "Enter a number\n";
	        cin >> "number1";
	        cout << "factorial(number1)";
	        break;
			 
}
      return 0;
}	
