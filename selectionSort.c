#include <stdio.h>

void selectionSort(int values[], int length);
void swapPosition(int values[], int index1, int index2);

int main(int argc, char *argv[]){

    //unsorted array
    int array[] = {9, 51, 24, 78 ,96, 4, 35, 89, 11, 10, 42, 77};
    int length = sizeof(array) / sizeof(int);

    selectionSort(array, length);

    for(int h = 0; h < length; h++){
        printf("%d ", array[h]);
    }
    printf("\n\n");

    return(0);
}

void selectionSort(int values[], int length){

    for(int h = 0; h < length; h++){ //controls starting index for each sub-array

        int minValue = h; //index of minimum value

        for(int i = h; i < length; i++){  //find smallest element in sub-array, swaps it to front of sub-array

            if(values[i] < values[minValue]){

                swapPosition(values, i, minValue);

            }

            else{

                continue;
            }

        }
    }
}

void swapPosition(int values[], int index1, int index2){

    int temp = values[index1];
    values[index1] = values[index2];
    values[index2] = temp;

}
