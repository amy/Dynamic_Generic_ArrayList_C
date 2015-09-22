#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct ArrayList_ {

    void** array;  //array of generic type
    int lastIndex;
    int size;

};

typedef struct ArrayList_ ArrayList;

ArrayList * initArrayList() {

    ArrayList *arrayList = ( ArrayList* ) malloc( sizeof( ArrayList ) );

    arrayList->array = (void**)malloc(3 * sizeof(void*));

    arrayList->lastIndex = 0;
    arrayList->size = 3;

    return arrayList;

}

void *destroyArrayList( ArrayList * arrayList ) {

    free(arrayList->array);
    free(arrayList);

} 

ArrayList *appendArrayList( ArrayList * arrayList, void * element ) {

    if ( arrayList->lastIndex == arrayList->size - 1 ) {
        printf("INDEX %d\n", arrayList->lastIndex);
        arrayList->array = realloc( arrayList->array, 2* sizeof(arrayList->array) * sizeof(void*));
    }

    arrayList->array[arrayList->lastIndex] = element;
    arrayList->lastIndex++;

    return arrayList;

}

/**
 * 
 */

/*StringArray *concat( StringArray * array, char character ) {

    array->string[array->lastIndex] = character;
    array->lastIndex++;

    return array;

} */
