//Tema3 - Joguinho de corrida
//biblioteca principal
#include <iostream> 
// Para poder usar o tipo dado string
#include <string>
// Para poder usar o tempo como semente do gerador de numero
#include <ctime>
using namespace std;

//Identificando a fun��o void criada.
void imprimir_espacos(int total1);

// fun��o principal.
int main(int argc, char* args[])
{

	/*
	variavel do tipo buleana, utilizada dentro do la�o while, com o fito de ser uma conci��o no mesmo
	*/
	bool sair = false;

	/*
	Variavel do tipo string para salvar os nomes dos jogadores
	*/
	string larg1, larg2;

	/*
	Variavel inteira para defin os espa�os
	de cada carrinho, e fazer � adi��o a cada rodada.
	*/
	int quant1 = 0, quant2 = 0;

	//pede que o competidor possa digitar na tela o seu nome
	cout << "Digite o nome do corredor1:" << endl;
	// Salva o nome digitado na variavel jog1.
	cin >> larg1;

	//pede que o competidor possa digitar na tela o seu nome
	cout << "Digite o nome do corredor 2:" << endl;
	// Salva o nome digitado na variavel jog1.
	cin >> larg2;

	/*
	O la�o esta sendo utilizado para determinar a hora que o la�o deve ser "quebrado
	*/
	while (sair == false)
	{


		// Variavel do tipo inteiro para definir o tamanho da pista que sera realizada a corrida.
		int total_espacos = 50;

		//Gerando numeros aleat�rios - utiliza-se o tempo para a realiza��o do calculo
		srand((int)time(0));

		//Para o corredor 1 ser� gerado um numero aleatorio para o total de espacos (Entre 1 e 3)
		total_espacos = rand() % 3 + 1;

		quant1 = quant1 + total_espacos;

		//Para o corredor 2 ser� gerado um numero aleatorio para o total de espacos (Entre 1 e 3)
		total_espacos = rand() % 3 + 1;

		quant2 = quant2 + total_espacos;

		// letreiro da corrida :D
		cout << "CORRIDA DOS DESESPERADOS:" << endl;

		cout << "In�cio                                                                     Fim:" << endl;

		cout << "corredor 1:" << larg1 << endl; // pega o nome que foi reservado na variavel jog 1 e imprime com o corredor 1
		imprimir_espacos(quant1);//utiliza o numero ale para dizer quantos espa�os o carrinho deve seguir
		cout << "  _  " << endl;// 1 desenho da primeira parte do carro
		imprimir_espacos(quant1);//utiliza o numero ale para dizer quantos espa�os o carrinho deve seguir
		cout << "-o-o>" << endl;// desenho da segunda parte do carro
		cout << "******************************************************************************" << endl;//Imprimindo a pista 


		cout << "Km rodados: " << quant1 << endl;  //total de km do carrinho 1


		cout << "corredor 2:" << larg2 << endl;// pega o nome que foi reservado na variavel jog 1 e imprime com o corredor 1
		imprimir_espacos(quant2);//utiliza o numero ale para dizer quantos espa�os o carrinho deve seguir
		cout << "  _  " << endl;// desenho da primeira parte do carro
		imprimir_espacos(quant2);//utiliza o numero ale para dizer quantos espa�os o carrinho deve seguir
		cout << "-o-o>" << endl;// desenho da segunda parte do carro
		cout << "******************************************************************************" << endl;//Imprimindo a pista 


		cout << "Km rodados: " << quant2 << endl;  //Total de km do carrinho 2


	    //Apagar� tudo depois de cada rodada
		system("cls");


		//Se sair n�o limpar� a tela.
		if (quant1 >= 50 || quant2 >= 50)//Condi��o para fazer a condi��o do la�o ficar falsa, e o jogo parar.
		{
			sair = true; // avalia o la�o

		}

		//Se continuar ent�o limpa a tela.
		else system("cls");


	}

	//Quando a condi��o chegar ao fim a corrida tamb�m chegar�
	cout << "O jogo chegou ao fim :D :D :D :D :D" << endl;

	//Estas condi��es ir�o definir o ganhador da corrida
	if (quant1 >= 50) cout << larg1 << "Amiguinho(a), a corrida eh sua" << endl;
	else if (quant2 >= 50) cout << larg1 << "Amiguinho(a), a corrida  eh sua" << endl;
	if (quant1 >= 50) cout << larg2 << "Nao foi dessa vez que vc conseguiu, mas nao desista ^^" << endl;
	else if (quant2 >= 50) cout << larg2 << "Nao foi dessa vez que vc conseguiu, mas nao desista ^^" << endl;
	else cout << "Sheeeee, parece que os dois chegaram num acordo" << endl;

	return 0;

}



void imprimir_espacos(int total) //Usandotilizando a fun��o void (vazio)
{



	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)// La�o for, pois ele sabe onde ser� findado
	{
		cout << " ";// espa�o que vai ser impresso, dependendo do numero aleatorio.


	}

}