#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *vetor , tot_vetor, i , temp, soma = 0, maior = 0;

    cout << "Digite a quantidade do vetor: ";
    cin >> tot_vetor;

    vetor = (int *)malloc(tot_vetor * sizeof(int));

    for(i = 1; i <= tot_vetor; i++){
        cout << "Digite o valor do vetor no indice "<< i <<" : ";
        cin >> temp;
        vetor[i] = temp;
    }

    if(vetor == NULL){
        cout << "==================="<<endl;
        cout << "Falha ao alocar memoria."<<endl;
        cout << "Tente novamente."<<endl;
        cout << "==================="<<endl;
    }else{
    for(i = 1; i <= tot_vetor; i++){
        if(vetor[i] % 2 == 0 ){
            soma = vetor[i];
            if(soma > maior){
                maior = soma;
            }
        }
    }
    cout << "Maior numero par do vetor:"<< maior <<endl;

    }


    return 0;
}
