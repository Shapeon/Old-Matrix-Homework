#include "CMatrix.h"
#include <iostream>

void CMatrix3::SetElement(int _iX, int _iY, float _fValue)
{
	//Sets value of specified position in Matrix
	m_fMatrix[_iX][_iY] = _fValue;
}
float CMatrix3::GetElement(int _iX, int _iY) const
{
	//Retrieves value of specified position in Matrix
	float desired_element = m_fMatrix[_iX][_iY];
	return desired_element;
}

CMatrix3 & CMatrix3::Identity(CMatrix3 & _rResult)
{
	//Creates an Identity Matrix
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (i == j) 
			{
				_rResult.SetElement(i, j, 1);
			}
			else {
				_rResult.SetElement(i, j, 0);
			}
		}
	}
	return _rResult;
}

CMatrix3 & CMatrix3::Zero(CMatrix3 & _rResult){
	//Creates a Zero or Null Matrix
for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
		_rResult.SetElement(i, j, 0);
	}
	}
return _rResult;
}

bool CMatrix3::Equals(const CMatrix3 & _rA, const CMatrix3 & _rB)
{
	//Tests the equality of two different Matrices
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (_rA.GetElement(i, j) == _rB.GetElement(i, j)) {
				continue;
			}
			else
			{
				std::cout << "The Matrix's are not equal" << std::endl;
				return false;
			}
		}
	}
	std::cout << "The Matrix's are equal" << std::endl;
	return true;
}

CMatrix3 & CMatrix3::Add(const CMatrix3 & _rA, const CMatrix3 & _rB, CMatrix3 & _rResult)
{
	//Adds two Matrices of identical sides together
	_rResult.SetElement(0, 0, _rA.GetElement(0, 0) + _rB.GetElement(0, 0));
	_rResult.SetElement(0, 1, _rA.GetElement(0, 1) + _rB.GetElement(0, 1));
	_rResult.SetElement(0, 2, _rA.GetElement(0, 2) + _rB.GetElement(0, 2));
													   
	_rResult.SetElement(1, 0, _rA.GetElement(1, 0) + _rB.GetElement(1, 0));
	_rResult.SetElement(1, 1, _rA.GetElement(1, 1) + _rB.GetElement(1, 1));
	_rResult.SetElement(1, 2, _rA.GetElement(1, 2) + _rB.GetElement(1, 2));
													   
	_rResult.SetElement(2, 0, _rA.GetElement(2, 0) + _rB.GetElement(2, 0));
	_rResult.SetElement(2, 1, _rA.GetElement(2, 1) + _rB.GetElement(2, 1));
	_rResult.SetElement(2, 2, _rA.GetElement(2, 2) + _rB.GetElement(2, 2));

	return _rResult;
}

CMatrix3 & CMatrix3::Subtract(const CMatrix3 & _rA, const CMatrix3 & _rB, CMatrix3 & _rResult)
{
	//Subtracts a Matrix of the same size from another Matrix
	_rResult.SetElement(0, 0, _rA.GetElement(0, 0) - _rB.GetElement(0, 0));
	_rResult.SetElement(0, 1, _rA.GetElement(0, 1) - _rB.GetElement(0, 1));
	_rResult.SetElement(0, 2, _rA.GetElement(0, 2) - _rB.GetElement(0, 2));
												   	   
	_rResult.SetElement(1, 0, _rA.GetElement(1, 0) - _rB.GetElement(1, 0));
	_rResult.SetElement(1, 1, _rA.GetElement(1, 1) - _rB.GetElement(1, 1));
	_rResult.SetElement(1, 2, _rA.GetElement(1, 2) - _rB.GetElement(1, 2));
												   	   
	_rResult.SetElement(2, 0, _rA.GetElement(2, 0) - _rB.GetElement(2, 0));
	_rResult.SetElement(2, 1, _rA.GetElement(2, 1) - _rB.GetElement(2, 1));
	_rResult.SetElement(2, 2, _rA.GetElement(2, 2) - _rB.GetElement(2, 2));
													   
	return _rResult;
}

CMatrix3 & CMatrix3::Multiply(float _fScalar, const CMatrix3 & _rA, CMatrix3 & _rResult)
{
	//Multiplies a Matrix by a scalar
	_rResult.SetElement(0, 0, _rA.GetElement(0, 0) * _fScalar);
	_rResult.SetElement(0, 1, _rA.GetElement(0, 1) * _fScalar);
	_rResult.SetElement(0, 2, _rA.GetElement(0, 2) * _fScalar);
												   	 
	_rResult.SetElement(1, 0, _rA.GetElement(1, 0) * _fScalar);
	_rResult.SetElement(1, 1, _rA.GetElement(1, 1) * _fScalar);
	_rResult.SetElement(1, 2, _rA.GetElement(1, 2) * _fScalar);
												   	 
	_rResult.SetElement(2, 0, _rA.GetElement(2, 0) * _fScalar);
	_rResult.SetElement(2, 1, _rA.GetElement(2, 1) * _fScalar);
	_rResult.SetElement(2, 2, _rA.GetElement(2, 2) * _fScalar);

	return _rResult;
}

CMatrix3 & CMatrix3::Multiply(const CMatrix3 & _rA, const CMatrix3 & _rB, CMatrix3 & _rResult)
{
	//First Row
	_rResult.SetElement(0, 0,(( _rA.GetElement(0, 0) * _rB.GetElement(0, 0)) + (_rA.GetElement(0, 1) * _rB.GetElement(1, 0)) + (_rA.GetElement(0, 2) * _rB.GetElement(2, 0))));
	_rResult.SetElement(0, 1,(_rA.GetElement(0, 0) * _rB.GetElement(0, 1)) + (_rA.GetElement(0, 1) * _rB.GetElement(1, 1)) + (_rA.GetElement(0, 2) * _rB.GetElement(2, 1)));
	_rResult.SetElement(0, 2,((_rA.GetElement(0, 0) * _rB.GetElement(0, 2)) + (_rA.GetElement(0, 1) * _rB.GetElement(1, 2)) + (_rA.GetElement(0, 2) * _rB.GetElement(2, 2))));
							  
	//Second Row			  
	_rResult.SetElement(1, 0,((_rA.GetElement(1, 0) * _rB.GetElement(0, 0)) + (_rA.GetElement(1, 1) * _rB.GetElement(1, 0)) + (_rA.GetElement(1, 2) * _rB.GetElement(2, 0))));
	_rResult.SetElement(1, 1,((_rA.GetElement(1, 0) * _rB.GetElement(0, 1)) + (_rA.GetElement(1, 1) * _rB.GetElement(1, 1)) + (_rA.GetElement(1, 2) * _rB.GetElement(2, 1))));
	_rResult.SetElement(1, 2,((_rA.GetElement(1, 0) * _rB.GetElement(0, 2)) + (_rA.GetElement(1, 1) * _rB.GetElement(1, 2)) + (_rA.GetElement(1, 2) * _rB.GetElement(2, 2))));
		
	//Third Row
	_rResult.SetElement(2, 0,((_rA.GetElement(2, 0) * _rB.GetElement(0, 0)) + (_rA.GetElement(2, 1) * _rB.GetElement(1, 0)) + (_rA.GetElement(2, 2) * _rB.GetElement(2, 0))));
	_rResult.SetElement(2, 1,((_rA.GetElement(2, 0) * _rB.GetElement(0, 1)) + (_rA.GetElement(2, 1) * _rB.GetElement(1, 1)) + (_rA.GetElement(2, 2) * _rB.GetElement(2, 1))));
	_rResult.SetElement(2, 2,((_rA.GetElement(2, 0) * _rB.GetElement(0, 2)) + (_rA.GetElement(2, 1) * _rB.GetElement(1, 2)) + (_rA.GetElement(2, 2) * _rB.GetElement(2, 2))));
																												  


	return _rResult;
}

CMatrix3 & CMatrix3::Transpose(const CMatrix3 & _rA, CMatrix3 & _rResult)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			_rResult.SetElement(i, j, _rA.GetElement(j, i));
		}
	}
	return _rResult;
}

float CMatrix3::Determinant(const CMatrix3 & _rA)
{
	float final_determinant = (_rA.GetElement(0, 0) * ((_rA.GetElement(1, 1) * _rA.GetElement(2, 2)) - (_rA.GetElement(1, 2) * _rA.GetElement(2, 1))))

		-

		(_rA.GetElement(0, 1) * ((_rA.GetElement(1, 0) * _rA.GetElement(2, 2)) - (_rA.GetElement(1, 2) * _rA.GetElement(2, 0))))

			+

			(_rA.GetElement(0, 2) * ((_rA.GetElement(1, 0) * _rA.GetElement(2, 1)) - (_rA.GetElement(1, 1) * _rA.GetElement(2, 0))));

	return final_determinant;
}



bool CMatrix3::Inverse(const CMatrix3 & _rA, CMatrix3 & _rResult)
{
	
		//Finding CoFactor Matrix

		//First Row
		_rResult.SetElement(0, 0, ((_rA.GetElement(1, 1) * _rA.GetElement(2, 2)) - (_rA.GetElement(1, 2) * _rA.GetElement(2, 1))));
		_rResult.SetElement(0, 1, ((_rA.GetElement(1, 2) * _rA.GetElement(2, 0)) - (_rA.GetElement(1, 0) * _rA.GetElement(2, 2))));
		_rResult.SetElement(0, 2, ((_rA.GetElement(1, 0) * _rA.GetElement(2, 1)) - (_rA.GetElement(1, 1) * _rA.GetElement(2, 0))));

		//Second Row			 
		_rResult.SetElement(1, 0, ((_rA.GetElement(0, 2) * _rA.GetElement(2, 1)) - (_rA.GetElement(0, 1) * _rA.GetElement(2, 2))));
		_rResult.SetElement(1, 1, ((_rA.GetElement(0, 0) * _rA.GetElement(2, 2)) - (_rA.GetElement(0, 2) * _rA.GetElement(2, 0))));
		_rResult.SetElement(1, 2, ((_rA.GetElement(0, 1) * _rA.GetElement(2, 0)) - (_rA.GetElement(0, 0) * _rA.GetElement(2, 1))));

		//Third Row				 
		_rResult.SetElement(2, 0, ((_rA.GetElement(0, 1) * _rA.GetElement(1, 2)) - (_rA.GetElement(0, 2) * _rA.GetElement(1, 1))));
		_rResult.SetElement(2, 1, ((_rA.GetElement(0, 2) * _rA.GetElement(1, 0)) - (_rA.GetElement(0, 0) * _rA.GetElement(1, 2))));
		_rResult.SetElement(2, 2, ((_rA.GetElement(0, 0) * _rA.GetElement(1, 1)) - (_rA.GetElement(0, 1) * _rA.GetElement(1, 0))));

		//Transpose the CoFactor Matrix 

		_rResult.Transpose(_rResult, _rResult);

		if (_rA.Determinant(_rA) != 0) {
			_rResult.Multiply(1 / _rA.Determinant(_rA), _rResult, _rResult);

			for (int i = 0; i < 3; i++)  // loop 3 times for three lines
			{
				for (int j = 0; j < 3; j++)  // loop for the three elements on the line
				{
					std::cout << _rResult.GetElement(i, j) << "  ";  // display the current element out of the array
				}
				std::cout << "     " << std::endl;  // when the inner loop is done, go to a new line
			}
			return true;
		}
		return false;
}




