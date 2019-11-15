#include <iostream>

int Data = 10;
int BSS;

void Code();

int main(){
	static const int Rodata = 3;
	int Stack = 9;
	int* heap1 = new int(3);

	std::cout << "Code:\t" << (void*) Code << std::endl;
	std::cout << "Rodata:\t" << (void*) &Rodata << std::endl;
	std::cout << "DATA:\t" << &Data << std::endl;
	std::cout << "BSS:\t" << &BSS << std::endl;
	std::cout << "HEAP:\t" << heap1 << std::endl;
	std::cout << "Stack:\t" << &Stack << std::endl;
}


void Code(){
	std::cout << "..." << std::endl;
}
