#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %d",avg);
    return 0;
}