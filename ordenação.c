#include <stdio.h>
#include <stdlib.h>

/*Given an integer array nums, return an integer
array counts where counts[i] is the number of smaller
elements to the right of nums[i]*/

int vet_in[5],vet_out[5],cont=0;
int main()
{
    printf("Digite 5 numeros: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&vet_in[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(vet_in[i]>vet_in[j]){
                cont++;
            }
        }
        vet_out[i]=cont;
        cont=0;
    }
    for(int i=0;i<5;i++){
        printf(" O %do tem %d numeros maiores a direita\n",i,vet_out[i]);
    }
    
  return 0;
}