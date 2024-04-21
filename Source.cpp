#include <iostream>

using namespace std;


/* Ler um conjunto de n�meros reais, armazenando-o em um vetor dinamico e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor dinamico. Os conjuntos t�m 10 elementos cada. Imprimir todos os conjuntos.
*/


void ler_conjunto(double* v, int tam) {

	for (int i = 0; i < tam; i++)
	{
		cout << "informe os numeros: ";
		cin >> v[i];
	}
}

void quadrado(double* vet, double* result, int tam) {
	for (int i = 0; i < tam; i++)
	{
		result[i] = vet[i] * vet[i];

	}


}





int main() {
	const int tam = 10;


	double* vetor = new double[tam];
	double* resultado = new double[tam];

	ler_conjunto(vetor, tam);

	quadrado(vetor, resultado, tam);



	cout << "Conjunto original:" << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << vetor[i] << " ";
	}
	cout << endl;

	cout << "Quadrado dos n�meros:" << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << resultado[i] << " ";
	}
	cout << endl;

	// Liberando a mem�ria alocada dinamicamente
	delete[] vetor;
	delete[] resultado;

}

