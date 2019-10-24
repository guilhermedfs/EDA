#include<stdio.h>
void apresentaMenu();
void escolheopcao(int *opcao);
void quantidade_elemento_inserir(int *qtd_elementos);
void meu_fflush();
int main(){
    int opcao, i = 0, qtd_elementos, num;
    do{
        if(i==0){
            apresentaMenu();
            escolheopcao(&opcao);
            meu_fflush();
            switch (opcao){
            case 1: 
                printf("Digite quantos elementos você deseja inserir:\n");
                quantidade_elemento_inserir(&qtd_elementos);
                for(int i = 0; i<qtd_elementos; i++){
                    scanf("%d", &num);
                }
                break;
            case 2:
                printf("Digite quantos elementos voce deseja remover:\n");
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                i = 1;
                break;
            }
        }
    }while(i!=1);
    return 0;
}
///////////////////////////////// subprogramas ///////////////////////////
void apresentaMenu(){
    printf("ESCOLHA UMA DAS OPÇÕES A SEGUIR:\n");
    printf("1. Inserir n elementos na fila.\n");
    printf("2. Remover n elemmentos na fila.\n");
    printf("3. Imprimir a fila.\n");
    printf("4. Reinicir a fila.\n");
    printf("5. Sair\n");
}
void escolheopcao(int *opcao){
    while(scanf("%d", opcao)!=1){
        meu_fflush();
        printf("Opcao invalida!\n");
        apresentaMenu();
    }
}
void quantidade_elemento_inserir(int *qtd_elementos){
    while(scanf("%d", qtd_elementos)!=1){
        meu_fflush();
        printf("Quantidade invalida! Digite novamente!\n");
        apresentaMenu();
    }
}
void meu_fflush(){
  char letra;
  do{
    letra = getchar();
  }while(letra != '\0' && letra != '\n');
}