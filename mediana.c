#include <stdio.h>
#include <stdlib.h>

/*The median is the middle value in an ordered integer list.
If the size of the list is even, there is no middle value,
and the median is the mean of the two middle values.*/

//int vet_in[5],vet_out[5],cont=0;
int *vet,n=0,num, flag = 0;
int main()
{
    //vet = malloc(sizeof(int));
   
    for(;;){
        printf("Digite o numero: \n");        
        scanf("%d",&num);
        if(num == -1){
            for(int i=0;i<n;i++){
                //printf("%d\n",*(vet + i*sizeof(int)));
                printf("%d\n",vet[i]);
            }
            //calcula_mediana();
            //---------------------------NÃO CONSEGUI CORRIGIR OS ERROS PARA PROSSEGUIR
            return 0;
        }
        n++;
        vet = realloc(vet,n*sizeof(int));
        //int j;
        flag = 0;
        for(int j=0;(j<(n-1))&&(flag == 0);j++){
            //if((*(vet+j*sizeof(int))) > num){
            if(vet[j] > num){
                printf("entrou ok\n");

                for(int i=j;i<(n);i++){
                    //*(vet+(i+1)*sizeof(int)) = *(vet+i*sizeof(int)); 
                    vet[i+1] = vet[i];
                }
                printf("saiu ok\n");

                //*(vet+j*sizeof(int)) = num;
                vet[j] = num;
                flag = 1;
            }
        }
        if(flag == 0){
            //*(vet+(n-1)*sizeof(int)) = num;
            vet[n-1] = num;
            printf("maior ok\n");
        }
    }
    
    
  return 0;
}