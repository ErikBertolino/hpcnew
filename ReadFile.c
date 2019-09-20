

#include<stdio.h>
#include<stdlib.h>


int main(){
    #define SIZE 10
    FILE *fp;
    fp = fopen("file.txt", "r");


    int * asentries = (int*) malloc(sizeof(int) * SIZE*SIZE);
    int ** as = (int**) malloc(sizeof(int*) * SIZE);
    for ( size_t ix = 0, jx = 0; ix < SIZE; ++ix, jx+=SIZE )
        as[ix] = asentries + jx;


    fread(asentries, sizeof(int), SIZE*SIZE, fp);

    for ( size_t ix = 0; ix < SIZE; ++ix ){
        for ( size_t jx = 0; jx < SIZE; ++jx )
            printf(" %d " , as[ix][jx]);
        printf("\n");
    }


    fclose(fp);
    free(as);
    free(asentries);
    return 0;
}
