#include <stdio.h>

void bubbleSort(int values[], int length);

int main(int argc, char *argv[]){

    /*unsorted array*/
    int array[] = {9, 0, 51, 24, 78 ,96, 4, 35, 89, 11, 10, 42, 77};
    int length = sizeof(array) / sizeof(int);

   bubbleSort(array, length);

    for(int h = 0; h < length; h++){
        printf("%d ", array[h]);
    }
    printf("\n\n");

    return(0);

}

void bubbleSort(int values[], int length){

    for(int h = length; h >= 0; h--){

        for(int i = 0; i < length; i++){

            if(i+1 >= length){ /*ensures sorting past end of array doesn't occur.*/

                continue;

            }

            if(values[i] > values[i+1]){

                int temp = values[i];

                values[i] = values[i+1];
                values[i+1] = temp;

            }

            else{

                continue;
            }

        }

    }

    /*for(int h = 0; h < length; h++){
        printf("%d ", values[h]);
    }
    printf("\n\n");*/

}
