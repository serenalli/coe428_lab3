#include "mySort.h"
#include "metrics.h"

void mySort(int array[], unsigned int first, unsigned int last){
    int i, k, j;
    for(i = 1; i < last+1; i++){
        myCopy(&array[i], &k);
        j = i - 1;

        while(j >= 0 && myCompare(array[j], k) >= 0){
            mySwap(&array[j], &array[j + 1]);
            j--;
        }
    }
}
