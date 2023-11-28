
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


int main(){

    int array[7]={2,7,9,5,4,1,8};
    int min,aux;
    // Selection sort
    for(int i=0;i<7;i++){
        int j = i + 1;
        for( j;j<7;j++){
        if(array[i]>array[j]){
            aux = array[j];
            array[j]= array[i];
            array[i] = aux;
        }
       }
    }


    // Affich Array
    for(int k=0; k<7;k++){
        printf("index : %d, Value : %d\n", k,array[k]);
    }
    return 0;
}