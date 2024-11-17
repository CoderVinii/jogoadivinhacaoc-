#include <iostream> 
using namespace std;

int main() {
   cout << "************************************" << endl;
   cout << "*Bem-vindos ao jogo de adivinhacao!*" << endl;
   cout << "************************************" << endl;
   
   int numero_secreto = 42;
  
   int chute;

   cout << "Qual seu chute? "; 
   cin >> chute;

   cout << "O valor do seu chute eh " << chute << endl;

   bool acertou = chute == numero_secreto;
   bool maior = chute > numero_secreto;

   if(acertou) {
         cout << "Parabens, voce acertou " << endl;
   }
   else if(maior) {
         cout << "Seu chute foi maior do que o numero secreto " << endl;
   }
   else {
         cout << "Seu chute foi menor que o numero secreto" << endl;
   }
}