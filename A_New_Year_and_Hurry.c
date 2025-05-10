#include<stdio.h>
int main()
{
    int problem, partiTime; scanf("%d %d", &problem, &partiTime);
    int problemTime = 240 - partiTime;
    int solvedProblem = 0;
    int i = 1;
    while (problemTime >= i*5)
    {
        if(solvedProblem == problem){
            break;
        }
        else{
            problemTime = problemTime - i*5;
            solvedProblem++;
            i++;
        }

    }
        printf("%d", solvedProblem);
    return 0;
}