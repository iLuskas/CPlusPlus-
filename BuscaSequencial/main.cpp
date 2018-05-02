#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *vetor, tot_vetor, i, temp, busca;
    bool controle_busca;

    cout << "Digite a quantidade do vetor: ";
    cin >> tot_vetor;

    vetor = (int *)malloc(tot_vetor * sizeof(int));

    for(i = 0; i < tot_vetor; i++)
    {
        cout << "Digite o valor do vetor no indice "<< i <<" : ";
        cin >> temp;
        vetor[i] = temp;
    }
    if(vetor == NULL)
    {
        cout << "==================="<<endl;
        cout << "Falha ao alocar memoria."<<endl;
        cout << "Tente novamente."<<endl;
        cout << "==================="<<endl;
    }
    else
    {
        cout << "=========================================================================="<<endl;
        cout << "Digite o numero que desaja buscar: ";
        cin >> busca;

        for(i = 0; i < tot_vetor; i++)
        {
            if(busca == vetor[i])
            {
                cout << "====NUMERO ENCONTRADO===="<<endl;
                cout << "Numero encontrado no indice "<< i <<endl;
                controle_busca = 1;
            }
        }
    }

    if(controle_busca == 0)
    {
        cout << "====NUMERO ENCONTRADO===="<<endl;
        cout << "Numero nao encontrado."<<endl;
    }





    return 0;
}
