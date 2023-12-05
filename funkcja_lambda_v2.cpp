#include <iostream>
#include <algorithm>
#include <vector>
// LAMBDA

void print(const int value) 
{
	std::cout << "[" << value << "] ";
}

void print_vector(const std::vector<int>& v) 
{
	std::for_each(v.begin(), v.end(), print);
}

void vector_neg(std::vector<int>& v) 
{
	std::for_each(v.begin(), v.end(), [](int& i)->void 
		{
			i = -i;
		});
}

void print_vector_limit(std::vector<int>& v, int limit)
{
	std::for_each(v.begin(), v.end(), [limit](int& i)->void 
		{
			if(i < limit)
				std::cout << "<" << i << ">";
		});
}

int main() 
{
	std::vector<int> tab{2,5,2,9,-3,0,-20};

	print_vector(tab);
	vector_neg(tab);
	std::cout << std::endl;
	print_vector(tab);

	print_vector_limit(tab, 3);

}