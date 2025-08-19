#include <iostream>
using namespace std;

int main() {
    int b1, b2, soma;

    cout << "Digite o numero do primeiro botao (0 a 5): ";
    cin >> b1;

    cout << "Digite o numero do segundo botao (0 a 5): ";
    cin >> b2;

    // Verificação simples
    if (b1 < 0 || b1 > 5 || b2 < 0 || b2 > 5) {
        cout << "Botao invalido!" << endl;
        return 0;
    }

    soma = b1 + b2;

    cout << "\nMusica selecionada: ";
    switch (soma) {
        case 0:  cout << "MEIO DIA"; break;
        case 1:  cout << "ROCK NO SERTAO"; break;
        case 2:  cout << "SAGA DE UM VAQUEIRO"; break;
        case 3:  cout << "BOTA PEGADO PAREA"; break;
        case 4:  cout << "PONTO FINAL"; break;
        case 5:  cout << "LUZ CAMERA ACAO"; break;
        case 6:  cout << "TOMA CONTA DE MIM"; break;
        case 7:  cout << "OLHA PRO CEU"; break;
        case 8:  cout << "OLHINHOS DE FOGUEIRA"; break;
        case 9:  cout << "RANCHEIRA"; break;
        case 10: cout << "AVOANTE"; break;
        default: cout << "Erro inesperado!"; break;
    }

    cout << endl;
    return 0;
}

