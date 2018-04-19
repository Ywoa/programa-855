#include <stdio.h>
typedef struct Nota{
char nome_aluno [20];
int nota_1;
int nota_2;
int nota_3;
}Nota;

int main() {
Nota Notas;	
printf("Informe o nome do aluno\n");
fgets(Notas.nome_aluno,20,stdin);
printf("Informe a primeira nota\n");
scanf("%d",&Notas.nota_1);
printf("Informe a segunda nota\n");
scanf("%d",&Notas.nota_2);
printf("Informe a terceira nota\n");
scanf("%d",&Notas.nota_3);
printf("Aluno %s\n",Notas.nome_aluno);
printf("Nota AV1= %d\n",Notas.nota_1);
printf("Nota AV2= %d\n",Notas.nota_2);
printf("Nota AV3= %d\n",Notas.nota_3);
return(0);
}

