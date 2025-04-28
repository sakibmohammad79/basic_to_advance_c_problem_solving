#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n+1];
    scanf("%s", &arr);
    int a_count = 0;
    int d_count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 'A'){
            a_count++;
        }
        else if(arr[i] == 'D'){
            d_count++;
        }
    }

    if( a_count > d_count){
        printf("Anton");
    }
    else if( d_count > a_count){
        printf("Danik");
    }
    else if( d_count == a_count){
        printf("Friendship");
    }
    return 0;
}