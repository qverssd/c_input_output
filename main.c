#include <stdio.h>

#define BUF_SIZE 1024


int main(void){
    int num_entered = 0;
    printf("num_entered = %d\n", num_entered);
    scanf("%d", &num_entered);
    printf("num_entered = %d\n", num_entered);



    char buffer[BUF_SIZE];
    printf("Entering STDIN while loop\n");
    while (fgets(buffer, BUF_SIZE, stdin)){
        puts(buffer);
    }
    printf("Ctrl+d pressed by User, i'll leave now");

}