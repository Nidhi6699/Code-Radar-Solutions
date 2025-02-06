#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);
    if(month%2==0){
        printf("30");
    }
    else if(month==2){
        printf("28");
    }
    else{
        printf("31");
    }
    return 0;
}