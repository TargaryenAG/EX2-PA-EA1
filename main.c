#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

int main(){
  
  int tam, colum;
  char palavra[15];
  char matrix[8][4];

  printf("\nDigite uma palavra :\n");
  scanf ("%s",palavra);
  tam = strlen(palavra);

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
  
  return 0;
}