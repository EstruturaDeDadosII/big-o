#include <iostream>
#include <string>

using namespace std;

#define TAM 10

void complexidadeODeUm();
void complexidadeODeN();
void complexidadeOLogN();
void complexidadeNLogN();
void complexidadeON2();
void complexidadeON3();

void imprimeVetor(int vetor[]);
int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);
void quickSort(int vetor[], int inicio, int fim);

typedef struct pessoa {
    string nome;
    string *conhecimentos;
} pessoa;

int main() {

    complexidadeODeUm();
    complexidadeODeN();
    complexidadeOLogN();
    complexidadeNLogN();
    complexidadeON2();
    complexidadeON3();

    system("PAUSE");
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
    cout << "\n\n---------------\n\n" << "Complexidade O(1)" << endl << endl;
    int x = 1;
}

void complexidadeODeN() {

    cout << "\n\n---------------\n\n" << "Complexidade O(N)" << endl << endl;

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

    cout << "\n\n---------------\n\n" << "Complexidade OLog(N)" << endl << endl;

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

void complexidadeNLogN() {
    cout << "\n\n---------------\n\n" << "Complexidade NLog(N)" << endl << endl;
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quickSort(vetor, 0, TAM);
    imprimeVetor(vetor);
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

void quickSort(int vetor[], int inicio, int fim) {


    imprimeVetor(vetor);

    int pivo, esquerda, direita, meio, aux;
    esquerda = inicio;
    direita = fim;

    meio = (int) ( (esquerda + direita) / 2 );
    pivo = vetor[meio];

    while (direita > esquerda) {

        while ( vetor[esquerda] < pivo ) {
            direita += 1;
        }

        while ( vetor[direita] > pivo ) {
            direita -= 1;
        }

        if (esquerda <= direita) {

            //realiza uma troca porque os dados se cruzaram
            aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;

            //limites caminhando para o centro
            esquerda += 1;
            direita -= 1;

        }
    }

    //analisando posições para continuar ordenando
    if (inicio < direita) {
        quickSort(vetor, inicio, direita);
    }

    if (esquerda < fim) {
        quickSort(vetor, esquerda, fim);
    }

}

void complexidadeON2() {

    cout << "\n\n---------------\n\n" << "Complexidade O(n2)" << endl << endl;

    int i, j;
    int matriz[TAM][TAM];


    for (i = 0; i < TAM; ++i) {
        for (j = 0; j < TAM; ++j) {
            if ( i == j )
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    for (i = 0; i < TAM; ++i) {
        for (j = 0; j < TAM; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void complexidadeON3() {

    cout << "\n\n---------------\n\n" << "Complexidade O(n3)" << endl << endl;

    int vetor[TAM][TAM][TAM];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                vetor[i][j][k] = i;
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                cout << vetor[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


}