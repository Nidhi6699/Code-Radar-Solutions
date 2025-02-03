#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive\n");
    }
    if (a<0){
        printf("Negative\n");
    }
    else{
        printf("Zero\n");
    }
    return 0;
}