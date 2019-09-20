
#include<stdio.h>
#include<stdlib.h>


int main3(){
    #define SIZE 10
    FILE *fp;
    fp = fopen("file.txt", "w");


    int * asentries = (int*) malloc(sizeof(int) * SIZE*SIZE);
    int ** as = (int**) malloc(sizeof(int*) * SIZE);
    for ( size_t ix = 0, jx = 0; ix < SIZE; ++ix, jx+=SIZE )
        as[ix] = asentries + jx;

    for ( size_t ix = 0; ix < SIZE; ++ix )
        for ( size_t jx = 0; jx < SIZE; ++jx )
            as[ix][jx] = ix*jx;

    fwrite(asentries, sizeof(int), SIZE*SIZE, fp);
    fclose(fp);

    free(as);
    free(asentries);
    return 0;
}
