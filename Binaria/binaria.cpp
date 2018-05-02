#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {

	int *vetor , totalVetor, busca, inicio, meio, fim;
	bool controle_busca;

	cout << "Digite o tamanho do vetor: ";
	cin >> totalVetor;

	vetor = (int *)malloc(totalVetor*sizeof(int));

	if(vetor == NULL){
		cout << "Erro ao alocar memoria. "<<endl;
	}else{
	    cout << "===DIGITE OS VALORES EM ORDEM CRESCENTE==="<<endl;
		for(int i = 0; i < totalVetor; i++){
			cout << "Digite o numero do vetor no indice "<< i << ": ";
			cin >> vetor[i];
		}

		cout << "Digite o valor que deseja encontrar: ";
		cin >> busca;

		inicio = 0;
		fim = totalVetor - 1;

		for(int i = 0; i < totalVetor; i ++){
			meio = (inicio+fim)/2;

			if(busca > vetor[meio]){
				inicio = meio + 1;
			}else{
				if(busca < vetor[meio]){
					fim = meio - 1;
				}else{
					cout << "\n====VALOR ENCONTRADO !===="<<endl;
					cout << "Valor Pesquisado: "<< busca << endl;
					cout << "Valor encontrado: "<< vetor[meio] << endl;
					cout << "Encontrado no indice: "<< meio <<endl;
					controle_busca = 1;
					break;
				}
			}
		}
		if(controle_busca == 0){
			cout << "\n====VALOR NAO ENCONTRADO !===="<<endl;
		}



	}

	return 0;
}
