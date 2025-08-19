#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Digite o valor de N (posicao na serie de Fibonacci): ";
    cin >> N;

    if (N <= 0) {
        cout << "Valor invalido! N deve ser maior que 0." << endl;
        return 0;
    }

    long long a = 1, b = 1, fib;
    if (N == 1 || N == 2) {
        fib = 1;
    } else {
        for (int i = 3; i <= N; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << "O " << N << "º termo da serie de Fibonacci é: " << fib << endl;

    return 0;
}

