#include<stdio.h>
#include<math.h>
int main()
{
    int value[3];
    for(int i = 0; i<3; i++){
        scanf("%d", &value[i]);
    }

    for(int i=0; i<2; i++){
        for(int j = i + 1; j<3; j++){
            if(value[i] > value[j]){
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    int first = abs(value[1] - value[0]);
    int second = abs(value[1] - value[2]);
    printf("%d", first+second);
    return 0;
}