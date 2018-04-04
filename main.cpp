#include <iostream>

using namespace std;

#define TAM 10

void complexidadeODeUm();
void complexidadeODeN();
void imprimeVetor(int vetor[]);
int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);
void complexidadeOLogN();

int main() {

    complexidadeODeUm();
    complexidadeODeN();
    complexidadeOLogN();

    return 0;
}

void imprimeVetor(int vetor[]) {
    for (int i = 0; i < TAM; ++i) {
        cout << vetor[i] << ", ";
    }
    cout << "\n\n\n";
}

//Complexidade 0(1)
void complexidadeODeUm() {
    int x = 1;
}

void complexidadeODeN() {

    int numeros[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //....
    int numeroParaPesquisar = 10;
    for (int i = 0; i < TAM; ++i) {
        if (numeros[i] == numeroParaPesquisar) {
            cout << "Legal. Temos esse numero." << endl;
            break;
        }
    }

}

void complexidadeOLogN() {
    //Busca Binaria para complexidade OLogN
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    int count;

    imprimeVetor(vetor);
    valorProcurado = 72;

    if (buscaBinaria(vetor, valorProcurado, &posicaoEncontrada) == 1) {
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada << endl;
    } else {
        cout << "valor nao encontrado" << endl;
    }
}

int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {
    int esquerda = 0;
    int direita = TAM - 1;
    int meio = (esquerda + direita) / 2;

    while (esquerda <= direita) {
        //Quando o valor do meio é encontrado
        if (vetor[meio] == valorProcurado) {
            *posicaoEncontrada = meio;
            return 1;
        }

        //Ajustando os limites das laterias
        if (vetor[meio] < valorProcurado) {
            esquerda = ++meio;
        } else {
            direita = --meio;
        }
    }

    return -1;
}