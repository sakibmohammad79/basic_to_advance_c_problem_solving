// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i<=n ; i++){
//         int a, b;
//     int count= 0;
//     scanf("%d %d", &a, &b);
//     while (1)
//     {
//         if(a % b != 0){
//             a++;
//             count++;
//         }

//         if(a%b== 0){
//             break;
//         }
//     }
//     printf("%d\n", count);
//     }
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        int rem = a % b;
        if(rem == 0){
            printf("0\n");
        } else {
            printf("%d\n", b - rem);
        }
    }
    
    return 0;
}
