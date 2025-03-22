#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    double altura;

    void lerdados() {
        cout << "Informações da pessoa: " << endl;
        cout << "Nome: " << endl;
        cin >> nome;
        cout << "Idade: " << endl;
        cin >> idade;
        cout << "Altura: " << endl;
        cin >> altura;
    }
};

void idade(Pessoa x, int &somaIdadesMenores16) {
    if (x.idade < 16) {
        somaIdadesMenores16++;
    }
}

int main() {
    Pessoa num1, num2, num3, num4, num5;
    num1.lerdados();
    num2.lerdados();
    num3.lerdados();
    num4.lerdados();
    num5.lerdados();

    Pessoa pessoas[] = {num1, num2, num3, num4, num5};
    int somaIdadesMenores16 = 0;
    double somaAlturas = 0.0;

    for (Pessoa p : pessoas) 
    {
        idade(p, somaIdadesMenores16);
        somaAlturas += p.altura;
        cout << "Nome: " << p.nome << endl;
    }

    double mediaAlturas = somaAlturas / 5;
    cout << "Soma das idades menores que 16: " << somaIdadesMenores16 << endl;
    cout << "Média geral de altura: " << mediaAlturas << " metros" << endl;

    return 0;
}