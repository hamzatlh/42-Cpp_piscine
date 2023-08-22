#include <iostream>


class Sample{
	private :
	int a;
	int b;
	public : 
	Sample (int a, int b)
	{
		std::cout << "constractor called" << std::endl;
		(*this).a = a;
		(*this).b = b;
	}
	Sample (const Sample& old)
	{
		std::cout << "copy constructor called" << std::endl;
		a = old.a;
		b = old.b;
	}
	Sample& operator=(const Sample& old)
	{
		std::cout << "copy assignement operator called" << std::endl;
		this->a = old.a;
		this->b = old.b;
		return (*this);
	}
	void print()
	{
		std::cout << "a = "<< this->a << std::endl;
		std::cout << "b = "<< this->b << std::endl;
	}
};

int main()
{
	Sample S1(10, 20);
	// Sample S2(S1);
	Sample S3(5, 4);
	Sample S4(6, 4);
	// S3(S1);
	S3 = S1 = S4;
	S1.print();
	// S2.print(); 
	S3.print();
	S4.print();  
}