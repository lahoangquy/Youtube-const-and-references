// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Unlike pointer a reference is just an alias for an object which is essentially a way to give another name to an existing variable
// type variable name =value;
// type &reference_name =variable_name
#include <iostream>

int main()
{
	int a = 10;
	int &ref_name = a;
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "value of the ref_name: " << ref_name << std::endl;
	const int b = 11;
	std::cout << b << std::endl;

}

// Once we initilized, a reference remains bound to its initial object. So it is not possible to reassign  a reference to another object
// Any operations performed on a refrence are actually operations on the object that has been referred
// Since there is not the possibility to rebind a reference, it is important to initlize it.
// Reference are always associated with a variable that is stored in memory but the variable might not be valid in which case the reference should not be used


// The const qualifier
// the const qualifier will be used in a variable in which its value is unchanged.
// const type variable_name = value