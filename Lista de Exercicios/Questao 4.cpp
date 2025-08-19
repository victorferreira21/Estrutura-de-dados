#include <iostream>

int main(){
	int num;
	
	std::cout <<"Digite o Numero para a Tabuada: ";
	std::cin >> num;
	
	std::cout << "Tabuada do" << num << std::endl;
	
	for (int i = 1; i <= 10; i++){
		std::cout << num << "x" << i << "=" << num * i << std::endl;
		
	}
	
	return 0;
}
