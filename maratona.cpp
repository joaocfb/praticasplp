#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int questoes;
	int pontuacoes[questoes];
	
	cin >> questoes;
		
	for(int i = 0; i < questoes; i++) {
		cin >> pontuacoes[i];
	}
	
	int participantes;
	cin >> participantes;
	
	char notas[participantes];
	
	for(int i = 0; i < participantes; i++) {
	    char valor;
	    cin >> valor;
        notas[i] = valor;
	}
	
	cout << notas;
}
