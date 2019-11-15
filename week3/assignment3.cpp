#include <iostream>

int main(){
	char target[] = "Lee KwangJae";
	long b[36];
	int a = 17;
	int i = 313;
	int* c = new int[602];
	char* copy = "is no no";
	char name = 'a';

	
	std::cout << &name+i << std::endl;
	std::cout << &target << std::endl;
	std::cout << b << std::endl;
	std::cout << &a << std::endl;
	std::cout << &i << std::endl;
	std::cout << &c << std::endl;
	std::cout << &copy << std::endl;
	std::cout << (int*)&name << std::endl;

	std::cout << sizeof(target) << std::endl;
	std::cout << sizeof(b) << std::endl;
	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(i) << std::endl;
	std::cout << sizeof(c) << std::endl;
	std::cout << sizeof(copy) << std::endl;
	
	std::cout << &c << std::endl;


	return 0;
}
