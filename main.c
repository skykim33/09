#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
    int i, average;
    int sum=0;
    int score[SIZE];

    for(i=0; i<SIZE; i++){
        printf("enter the scores of 5 students.\n");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    
    average = sum/SIZE;
    printf("average score: %d\n", average);
    return 0;
}
