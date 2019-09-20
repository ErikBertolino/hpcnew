#include<stdio.h>
#include <stdlib.h>

int a,b;
int main(int argc, char*argv[]){

    printf("The name of our program is %s", argv[0]);

    printf("\nNumber of Arguments Passed are: %d", argc);
    long r_1,r_2;

    // Correct Order
    r_1 = strtol(argv[1], &argv[1],10);
    r_2 = strtol(argv[2], &argv[2],10);

    printf("A is ", r_1, "B is ", r_2);

    //Printing output








    //Non-correct Order

    //Printing output

}
