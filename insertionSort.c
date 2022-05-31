//#include<stdio.h>
//
//void insertionSort(int values[], int length);
//void swapPosition(int values[], int index1, int index2);
//
//int main(int argc, char *argv[]){
//
//    /*unsorted array*/
//    int array[] = {9, 0, 51, 24, 78, 96, 4, 35, 89, 11, 10, 42, 77};
//    int length = sizeof(array) / sizeof(int);
//
//    insertionSort(array, length);
//
//    for(int h = 0; h < length; h++){
//        printf("%d ", array[h]);
//    }
//    printf("\n\n");
//
//    return(0);
//}
//
///*gain a better understanding of the logic here
//I coded this without help and do not understand WHY it works*/
//void insertionSort(int values[], int length){
//
//    for(int h = length-1; h > 0; h--){ /* length-1 ensures sorting past end of array doesn't occur.*/
//
//        if(values[h] < values[h-1]){
//            swapPosition(values, h, h-1);
//        }
//
//        for(int j = h; j < length; j++){
//
//            if(values[j] < values[j-1]){
//                swapPosition(values, j, j-1);
//            }
//
//        }
//
//    }
//
//}
//
//void swapPosition(int values[], int index1, int index2){
//
//    int temp = values[index1];
//    values[index1] = values[index2];
//    values[index2] = temp;
//
//}
