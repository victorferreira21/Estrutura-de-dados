#include <iostream>

int main(){
	int num1,num2;
	
	std::cout <<"Digite o Primeiro Numero: ";
	std::cin >> num1;
	
	std::cout <<"Digite o Segundo Numero: ";
	std::cin >> num2;
	
	if (num1 > num2){
		std::cout << "O Num1 e Maior Que o Num2." << std::endl;
		
	}
	else if (num1 < num2){
		std::cout << "O num2 e Maior que o Num1." << std::endl;
		
	}
	else{
		std::cout << "Os 2 numeros sâo iguais" << std::endl;
	}
}
