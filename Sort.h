#pragma once

class Sort
{
protected:
	void Swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
public:
	virtual void Exec(int* arry, int size) = 0;
};
