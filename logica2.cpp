#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Time {
    string nome;
    int pontos;
};

bool compararPontos(Time a, Time b) {
    return a.pontos > b.pontos;
}

int main() {
    Time times[10];
    for (int i = 0; i < 10; i++) {
        cout << "Digite o nome do time " << i + 1 << ": ";
        cin >> times[i].nome;
        cout << "Digite a quantidade de pontos do time " << times[i].nome << ": ";
        cin >> times[i].pontos;
    }

    sort(times, times + 10, compararPontos);

    cout << "\n\nTabela de pontuacao:\n";
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << times[i].nome << " - " << times[i].pontos << " pontos\n";
    }

    return 0;
}