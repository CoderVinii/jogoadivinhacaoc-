#include <iostream> 
using namespace std;

int main() {
   cout << "************************************" << endl;
   cout << "*Bem-vindos ao jogo de adivinhacao!*" << endl;
   cout << "************************************" << endl;
   
   const int NUMERO_SECRETO = 42;

   bool nao_acertou = true;
   int tentativas = 0;

   double pontos = 1000.0;
  
   while(nao_acertou) {

      tentativas++;

      int chute;
      cout << "Tentativa " << tentativas << endl;
      cout << "Qual seu chute? "; 
      cin >> chute;

      double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
      pontos = pontos - pontos_perdidos;

      cout << "O valor do seu chute eh " << chute << endl;

      bool acertou = chute == NUMERO_SECRETO;
      bool maior = chute > NUMERO_SECRETO;

      if(acertou) {
            cout << "Parabens, voce acertou " << endl;
            nao_acertou = false;
      }
      else if(maior) {
            cout << "Seu chute foi maior do que o numero secreto " << endl;
      }
      else {
            cout << "Seu chute foi menor que o numero secreto" << endl;
      }
   }

   cout << "Fim de Jogo" << endl;
   cout << "Voce acertou o numero secreto em " << tentativas << " tentativas." << endl; 
   cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
}