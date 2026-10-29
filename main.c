#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
    int i;
    int score[SIZE];
    printf("enter the scores of 5 students.\n");

    for(i=0; i<SIZE; i++)
        scanf("%d", &score[i]);

    for(i=0; i<SIZE; i++)
        printf("score[%d]=%d\n", i, score[i]);

    return 0;
}
