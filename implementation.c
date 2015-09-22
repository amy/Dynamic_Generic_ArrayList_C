#include "arrayList.h"

int main(int argc, char **argv) {

    //ArrayList *arrayList;

    ArrayList *array = initArrayList();
    
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    appendArrayList(array, &one);
    appendArrayList(array, &two);
    appendArrayList(array, &three);
    appendArrayList(array, &four);


    //printf("%d\n", *(int *)(array->array[3]));

    /*printf("%d\n", *(int *)(array->array[2]));*/

    destroyArrayList(array);

}
