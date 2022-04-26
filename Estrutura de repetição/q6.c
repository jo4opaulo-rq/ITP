#include <stdio.h>


int main()
{
    char cod_trans[3];
    char cod_trans1[3];
    int valor, val_tot_vista, val_tot_prazo;
    int cont = 1;
    float primeiro_valor = 0;

     val_tot_vista = 0;
     val_tot_prazo = 0;

     while(cont<=2){

        printf("\nInforme o Codigo: ");
        scanf("%s", &cod_trans,cod_trans1);

        printf("\nInforme o Valor da Transacao: ");
        scanf("%d",&valor);

       if(strcmp(cod_trans, "v")){
            val_tot_vista = val_tot_vista + valor;
            if (cont>=1){
                primeiro_valor = primeiro_valor + valor;
            }

       }
         if(strcmp(cod_trans, "p")){
             val_tot_prazo = val_tot_prazo + valor;
         }else{
           printf("Codigo inserido invalido");
         }
         cont++;
       }



     printf("\nValor total das compras a vista: %d\n", val_tot_vista);
     printf("\nValor total das compras a prazo: %d\n", val_tot_prazo);
     printf("\nValor total das compras efetuadas: %d\n", val_tot_vista + val_tot_prazo);
     printf("\nValor da primeira prestacao das compras a prazo juntas: %f\n", primeiro_valor);
    return 0;
}
