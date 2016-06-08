//Tema2-Duelo De Palitos
//biblioteca principal
#include <iostream> 
// Para poder usar o tipo dado string
#include <string>
// Para poder usar o tempo como semente do gerador de numero
#include <ctime>
int main(int argc, char* args[])
{
	/*
	variavel do tipo buleana, utilizada dentro do laço while, com o fito de ser uma concição no mesmo
	*/
	bool sair = false;

	/*
	Variavel do tipo string para salvar os nomes dos jogadores
	*/
	string jog1, jog2;

	/*
	Variaveis do tipo inteira para definir a quantidade de vida, defesa e ataque durante o jogo
	*/
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 2;

	//pede que o competidor possa digitar na tela o seu nome
	cout << "Digite o nome do jogador 1:" << endl;
	// Salva o nome digitado na variavel jog1.
	cin >> jog1;

	//pede que o competidor possa digitar na tela o seu nome
	cout << "Digite o nome do jogador 2:" << endl;
	// Salva o nome digitado na variavel jog1.
	cin >> jog2;

	/*
	O laço esta sendo utilizado para determinar a hora que o laço deve ser "quebrado
	*/
	while (sair == false) {

		// Imprime na tela o grafico do personagem
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;

		// caso continue limpa a tela.
		system("pause");

		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//Gera um número aletorio
		dado6 = rand() % 6 + 1;
		//Gera um dano no jogador 1
		if (dado6 > 4)
		{
			vida1 = vida1 - dado6;
			cout << jog1 << "Dano:" << -dado6 << endl;
			cout << jog2 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}

		else if (dado6 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}
		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{

			vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls");

		// se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela
		else system("cls");
	}

	//Imprime na tela quando o jogo chega ao fim
	cout << "Fim de jogo!" << endl;


	//Estas condições irão definir o ganhador da corrida
	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;


}