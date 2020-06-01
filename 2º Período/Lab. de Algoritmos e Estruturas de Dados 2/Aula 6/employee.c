#include <stdio.h>
 
struct employee {
    char name[100];
 int age;
 float salary;
};
 
int main(){
   struct employee employees[10];
   int counter, index, count, totalSalary;
    
   printf("Entre com o número de empregados\n");
   scanf("%d", &count);
    
   /* Armazenamento da estrutura de empregados no array */
   for(counter=0; counter<count; counter++){ 
       printf(Entre com o nome a idade e o salário do empregado\n");
       scanf("%s %d %f", &employees[counter].name, 
           &employees[counter].age, &employees[counter].salary);
   }
    
   /*Cáculo da média do salário dos empregados */
   for(totalSalary=0, index=0; index<count; index++){
       totalSalary += employees[index].salary;
   }
    
   printf("A média dos salários dos empregados é:  %f\n", 
       (float)totalSalary/count);
 
   return 0;
}
