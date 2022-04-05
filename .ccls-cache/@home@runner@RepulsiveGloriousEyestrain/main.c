#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

int main(){
//variaveis
  int tam, colum;
  char palavra[15];
  char matrix[8][4];

//recebendo palavra e passando tamanho para variável
  printf("\nDigite uma palavra :\n");
  scanf ("%s",palavra);
  tam = strlen(palavra);

//Estrutura de repetção que verifica cenários para 4° coluna da matiz. A função inicia com a letra "a" e percorre a matriz preenchendo com o alfabeto
  
  for(int L=0;L<8;L++){
    switch(L){

      case 0:
        for(int C=0;C<3;C++){
          if(C==0){
            matrix[L][C]='a';
          }else{
            matrix[L][C]=matrix[L][C-1]+1;
          }
        }
      break;

      case 5:
      case 7:
        for(int C=0;C<4;C++){
          if(C==0){
            matrix[L][C]=matrix[L-1][C+2]+1;
          }else{
            matrix[L][C]=matrix[L][C-1]+1;
          }
        }
      break;

      case 6:
        for(int C=0;C<3;C++){
          if(C==0){
            matrix[L][C]=matrix[L-1][C+3]+1;
          }else{
            matrix[L][C]=matrix[L][C-1]+1;
          }
        }
      break;

      default:
        for(int C=0;C<3;C++){
          if(C==0){
            matrix[L][C]=matrix[L-1][C+2]+1;
          }else{
            matrix[L][C]=matrix[L][C-1]+1;
          }
        }
      break;
    }
  }
  printf("\n\n");

//Estrutura de repetição que procura as referências (Colunas e linhas) na matriz e informa os dados solicitados nas funções  
  for(int i=0;i<tam;i++){
    for(int L=0;L<8;L++){
      for(int C=0;C<4;C++){
        if(matrix[L][C]==palavra[i]){
          printf("# %d = %d\n",L+2,C+1);
        }
      }
    }
  }
  
  return 0;
}