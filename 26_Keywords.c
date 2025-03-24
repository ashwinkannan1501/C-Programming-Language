#include<stdio.h>

void increment()
{
	static short count = 0;
	count += 1;
	printf("Current count = %hd \n", count);
}


void main()
{
	printf("---------------- Keywords ------------------ \n");

	// Const Keyword :- Used to declare constants , where values cannot be modified later
	const float PI = 3.14153;
	printf("PI = %.4f \n", PI);
	// PI = 4.5; // Throws Error since PI value is declared constant
	
	// register keyowrd :- It suggests the compiler to store the variable in a register for faster access
	register short register_variable = 10;
	printf("Register Variable : %hd \n", register_variable);

	// static keyword :- Used to declare a variable / function that return it's value/scope even after the block in which it has defined has exited
	increment();
	increment();

	// typedef keyword :- Used to create a new name (alias) for an existing data type. Similar to 'as' keyword in python.
	typedef short marks;
	marks maths = 90;
	printf("Maths mark : %hd \n", maths);

}
