#include <iostream>

using namespace std;

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_value(int x) {
  x++;
}

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_reference(int &x) { //função espera receber um valor por referencia e nao copia 
  x++; //quando quer modificar o valor de uma funcao fora do escopo dela 
}

int main(){
    int b;
  // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int a=10;
  // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
    int *pont=nullptr;
  // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int vector[10]={9,8,7,6,5,4,3,2,1};
  // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << &a << endl;
  // 5) Imprima o CONTEÚDO da variável declarada em (1)
    cout << a << endl;
  // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << &pont << endl;
  // 7) Imprima o CONTEÚDO da variável declarada em (2)
    cout << pont << endl;
  // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << &vector << endl;
  // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vector[0] << endl;
  // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
    cout << vector[0] << endl;
  // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    pont = &a;
  // 12) Imprima o CONTEÚDO da variável declarada em (2)
    cout << pont << endl;
  // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
    cout << *pont << endl;
  // 14) Imprima o resulta do da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
    cout << (&a==pont) << endl;
  // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
    *pont = 5;
  // 16) Imprima o CONTEÚDO da variável declarada em (1)
    cout << a << endl;
  // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
    pont = vector;
  // 18) Imprima o CONTEÚDO da variável declarada em (2) 
    cout << pont << endl;
  // 19) Imprima o CONTEÚDO da variável que é apontada pela variável de (2)
    cout << *pont << endl;
  // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável de (2)
    pont = &(vector[0]);
  // 21) Imprima o CONTEÚDO da variável declarada em (2) 
    cout << pont << endl;
  // 22) Imprima o CONTEÚDO da variável que é apontada pela variável de (2) 
    cout << *pont << endl;
  // 23) Imprima os elementos de (3) utilizando a notação [] (e.g. v[i])
    for (int i = 0; i<10;i++){
    if(vector[i] == 0){
        cout<<vector[i]<<endl;
    }
    else {
        cout<<vector[i]<<" ";
}
}
  // 24) Imprima os elementos de (3) utilizando a notação ponteiro/deslocamento (e.g. *(v + i))
      for(int i=0; i<10; i++){
         if(*(vector+i)==0){
             cout<<*(vector+i)<<endl;
         } else {
    cout << *(vector + i) <<" ";
  }
 }
  // 25) Implemente a função `by_value`
    by_value(1);
  // 26) Chame a função `by_value`, passando a variável declarada em (1) como argumento
    by_value(a);
  // 27) Imprima o CONTEÚDO da variável declarada em (1)
    cout << a << endl;
  // 28) Implementa a função `by_reference`
     by_reference(b);
  // 29) Chame a função `by_reference`, passando a variável declarada em (1) como argumento
    by_reference(a);
  // 30) Imprima o CONTEÚDO da variável declarada em (1)
    cout << a << endl;
  return 0;
}
