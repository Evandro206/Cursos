#include <bits/stdc++.h>

using namespace std;

void impares(int x, int y)
{
    int soma = 0;
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }
    cout << "A soma dos impares entre : " << x << " e " << y << " é igual a " << soma << endl;
}

int main() 
{
    int num1, num2;
    
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;
    impares(num1, num2);
}