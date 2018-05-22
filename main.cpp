#include <iostream>
#include "CMatrix.h"
int main() {

	CMatrix3 testmatrix;
	
	testmatrix.SetElement(0, 0, 1);
	testmatrix.SetElement(1, 0, 1);
	testmatrix.SetElement(2, 0, 1);

	testmatrix.SetElement(0, 1, 2);
	testmatrix.SetElement(1, 1, 2);
	testmatrix.SetElement(2, 1, 2);

	testmatrix.SetElement(0, 2, 3);
	testmatrix.SetElement(1, 2, 3); 
	testmatrix.SetElement(2, 2, 3);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix.GetElement(i,j);  // display the current element out of the array
		}
	std::cout << std::endl;  // when the inner loop is done, go to a new line
	}


	system("pause");


	CMatrix3 testmatrix2;

	testmatrix2.SetElement(0, 0, 4);
	testmatrix2.SetElement(1, 0, 3);
	testmatrix2.SetElement(2, 0, 5);
			  
	testmatrix2.SetElement(0, 1, 7);
	testmatrix2.SetElement(1, 1, 8);
	testmatrix2.SetElement(2, 1, 2);
			  
	testmatrix2.SetElement(0, 2, 2);
	testmatrix2.SetElement(1, 2, 3);
	testmatrix2.SetElement(2, 2, 6);
			  
	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix2.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}
	
	
	system("pause");

	/*
	
	testmatrix.Identity(testmatrix);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}

	system("pause");

	

	testmatrix2.Zero(testmatrix2);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix2.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}

	system("pause");

	testmatrix.Equals(testmatrix, testmatrix2);

	system("pause");

	testmatrix2.Identity(testmatrix2);

	testmatrix.Equals(testmatrix, testmatrix2);
	
	system("pause");

	testmatrix.Add(testmatrix, testmatrix2, testmatrix);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}
	system("pause");

	

	testmatrix.Subtract(testmatrix, testmatrix2, testmatrix);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}


	system("pause");
	

	testmatrix.Multiply(2, testmatrix, testmatrix);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << testmatrix.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}
	
	system("pause");
	*/
	CMatrix3 resultmatrix;

	/*testmatrix.Multiply(testmatrix, testmatrix2, resultmatrix);
	
	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << resultmatrix.GetElement(i, j)<< "  ";  // display the current element out of the array
		}
		std::cout << "     " << std::endl;  // when the inner loop is done, go to a new line
	}*/
	
	/*testmatrix.Transpose(testmatrix, resultmatrix);

	for (int i = 0; i<3; i++)  // loop 3 times for three lines
	{
		for (int j = 0; j<3; j++)  // loop for the three elements on the line
		{
			std::cout << resultmatrix.GetElement(i, j);  // display the current element out of the array
		}
		std::cout << std::endl;  // when the inner loop is done, go to a new line
	}*/

	std::cout << testmatrix2.Determinant(testmatrix2) << std::endl;

	testmatrix2.Inverse(testmatrix2, resultmatrix);

	


	system("pause");
}

	 
