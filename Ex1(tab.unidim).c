//punctul a
/*#include <stdio.h>
#include <time.h>
#include<stdlib.h>
void main()
{
    srand(time(NULL));
    int n;
    printf("Dati n : ");
    scanf("%d", &n);
    int Andrei[n];
    for (int i = 0; i <n; i++)
    {
        Andrei[i]=rand()%100;
        printf("Andrei[%d]=%d\n", i,Andrei[i]);
    }
    printf("%d\t%d\t%d", Andrei[2],Andrei[3],Andrei[8]);
}*/

//punctul b
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    srand(time(NULL));
    int n;
    printf("DATI n : ");
    scanf("%d", &n);
    int Andrei[n];
    for (int i = 0; i <n; i++)
    {
        Andrei[i]=rand()%100;
        printf("\Andrei[%d]=%d\n", i,Andrei[i]);
    }
    int sum=0;
    for (int i=0; i<n; i++)
     {
         sum=Andrei[1]+Andrei[2]+Andrei[7];
     }
     printf("suma lui %d, %d, %d este %d",Andrei[1],Andrei[2],Andrei[7], sum);
}

//punctul c
/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    srand(time(NULL));
    int n,i;
    printf("Dati n : ");
    scanf("%d", &n);
    int Andrei[n];
    for (int i = 0; i < n; i++)
    {
        Andrei[i]=rand()%100;
        printf("Andrei[%d]=%d\n", i, Andrei[i]);
    }
        Andrei[0]=Andrei[0]+5;
        Andrei[n-1]=Andrei[n-1]+5;
    printf("\n%d\t%d", Andrei[0],Andrei[n-1]);
}*/

//punctul d
/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    srand(time(NULL));
    int n;
    printf("Input n : ");
    scanf("%d", &n);
    int Andrei[n];
    for (int i = 0; i < n; i++)
    {
        Andrei[i]=rand()%100;
        printf("Andrei[%d]=%d\n", i, Andrei[i]);
    }
    Andrei[n/2]=Andrei[n/2]-10;
    printf("%d", Andrei[n/2]);
}*/
