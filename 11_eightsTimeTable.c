#include<stdio.h>
int main(){
    int i = 1;
    while(8 * i <= 200){
        printf("8 x %d = %d\n", i, i*8);
        i++;
    }
    return 0;
}