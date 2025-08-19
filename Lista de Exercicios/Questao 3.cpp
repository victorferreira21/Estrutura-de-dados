#include <iostream>

int main(){
	int N;
	
	std::cout <<"Digite a Quantidade de Numeros: ";
	std::cin >> N;
	
	
	if (N <= 0){
		std::cout << "Quantidade Invalida" << std::endl;
		return 0;
		
	}
	
	int num, menor, maior, soma = 0;
	
	std::cout << "Digite o 1 numero: ";
	std::cin >> num;
	
	menor = maior = num;
    soma = num;
	
	for (int i = 2; i <= N; i++){
		std::cout << "Digite o" << i << "numero: ";
		std::cin >> num;
		
		if (num < menor){
			menor = num;
		}
		if (num > maior){
			maior = num;
		}
		soma += num;
	}
	std::cout << "Menor valor: " << menor << std::endl;
    std::cout << "Maior valor: " << maior << std::endl;
    std::cout << "Soma dos valores: " << soma << std::endl;

    return 0;
}
