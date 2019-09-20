
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int a,b;
int main2(int argc, char*argv[]){

    int option;

    int a;
    int b;

    while((option = getopt(argc, argv, "a:b:")) != -1){
        switch(option){
            case 'a':
                a = atoi(optarg);
                break;
            case 'b':
                b = atoi(optarg);
                break;
            default:
                exit(1);

        }


    }

    printf("A is %d and B is %d" ,a ,b);
    return 0;
}
