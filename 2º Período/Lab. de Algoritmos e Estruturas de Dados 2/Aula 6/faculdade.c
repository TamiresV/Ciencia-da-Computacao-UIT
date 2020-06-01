 #include <stdio.h>
  #include <stdlib.h>
  #define TAM_VET 4
  
  // declaracao do modelo data
  struct data{
      int dia, mes, ano;
  };
  // declaracao do modelo funcionario
  struct aluno{
      char nome[50];
      double mediaFinal;
      struct data nascimento;
  };
  
  int main(){
      int i;
      // declaracao e inicialização do vetor de estruturas vet
      struct aluno faculdade[TAM_VET]={{"Adriana Martins", 7.5, {10,5,1982} },
                                    {"Luciano Araujo de Lima", 8, {23,8,1983} },
                                    {"Marcos Paulo da Silva", 9.2, {14,1,1981} },
                                    {"Jonathas Martins dos Santos", 10, {2,10,1983} }
      };
      puts("Imprimindo os dados.\n");
      for(i=0; i<4; i++){
          puts(faculdade[i].nome);
          printf("Media Final: %.2f", faculdade[i].mediaFinal);
          printf("\n%d/%d/%d\n\n", faculdade[i].nascimento.dia,
                                   faculdade[i].nascimento.mes,
                                   faculdade[i].nascimento.ano );
      }
      return (0);
      system("pause");
  }
