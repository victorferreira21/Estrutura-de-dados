#include <iostream>

int main(){
	int num;
	int somaPares = 0, somaImpares = 0;
	
	std::cout <<"Digite Numeros inteiros Positivos!! ";
	
	while (true) {
		std::cout << " Digite um Numero: ";
		std::cin >> num;
		
		if (num > 1000){
		std::cout << " Numero maior que 1000!!";
		break;
	}
			
	if (num % 2== 0){
		somaPares += num;	
	}else{
		somaImpares += num;
		
	}
	
	}
	
	std::cout << " Soma dos Numeros Pares: " << somaPares << std::endl;
	std::cout << " Soma dos Numeros Impares: " << somaImpares << std::endl;
	
	return 0;
}

	
