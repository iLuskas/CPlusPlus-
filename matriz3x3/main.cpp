#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *vetor, totVetor, i, inicio, meio, fim, busca;
    bool controleBusca;

    cout << "Digite o tamanho do vetor: ";
    cin >> totVetor;

    vetor = (int *)malloc(totVetor*sizeof(int));

    if(vetor == NULL)
    {
        cout << "*****Erro ao alocar memoria*****"<<endl;
    }
    else
    {

        cout << "===DIGITE OS VALORES EM ORDEM CRESCENTE"<<endl;
        for(i = 0; i < totVetor; i++)
        {

            cout << "Digite o valor do vetor no indice " << i << ": ";
            cin >> vetor[i];
        }

        cout << "Digite o valor que deseja procurar no vetor: ";
        cin >> busca;

        inicio = 0;
        fim = totVetor-1;

        for(i = 0; i < totVetor; i++)
        {
            meio = (inicio+fim)/2;
            if(busca == vetor[meio])
            {
                cout << "===VALOR ENCONTRADO=="<<endl;
                cout <<"No indice " << meio <<endl;
                cout << "Valor: "<< vetor[meio]<<endl;
                controleBusca = 1;
                break;
            }
            else
            {
                if(busca > vetor[meio])
                {
                    inicio = meio + 1;
                    continue;
                }
                else
                {
                    if (busca < vetor[meio])
                    {
                        fim = meio - 1;
                        continue;
                    }
                }
            }
        }
        if(controleBusca == 0)
        {
            cout << "\n====VALOR NAO ENCONTRADO !===="<<endl;
        }

    }

    return 0;
}
