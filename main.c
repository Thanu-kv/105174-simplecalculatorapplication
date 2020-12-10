#include <iostream>
#include "calculator.h"

int main()
{
int operation;
int number1, number2;
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Modulus\n");
printf("6. Power\n");
printf("7. Factorial\n");
	
scanf("%d", &operation);

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
