#include <iostream>

int main(){
	char letra;
	
	std::cout <<"Digite a Letra (F ou M): ";
	std::cin >> letra;
	
	
	if (letra == 'F'|| letra == 'f'){
		std::cout << "Feminino" << std::endl;
		
	}
	else if (letra == 'M'){
		std::cout << "Masculino." << std::endl;
		
	}
	else{
		std::cout << "Escolha F ou M!!" << std::endl;
	}
}
