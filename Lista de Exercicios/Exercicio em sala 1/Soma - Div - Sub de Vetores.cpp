#include <iostream>;
using namespace std;

int main(){
	
	int vetor[5];
	
	cout << "Digite os 5 Numeros: ";
	for (int i = 0; i < 5; i++){
	cin >> vetor [i]; 	
	
	}

int soma = vetor[0];
int sub = vetor[0];
float div = vetor[0];

for (int i = 1; i < 5; i++){
	soma += vetor[i];
	sub -= vetor[i];
	div /= vetor[i];
}

cout << " Resultado da soma: " << soma;
cout << " Resultado da subtracao: " << sub;
cout << " Resultado da divisao: " << div;
	
return 0;
}
