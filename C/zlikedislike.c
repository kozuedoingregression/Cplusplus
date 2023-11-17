#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int count_like_dislike (char* A, char* P ) {
   
}

int main() {
    char* A = (char*)malloc(100000 * sizeof(char));
    scanf("\n%[^\n]s", A);
    char* P = (char*)malloc(100000 * sizeof(char));
    scanf("\n%[^\n]s", P);

    int out_ = count_like_dislike(A, P);
    printf("%d", out_);

    return 0;
}