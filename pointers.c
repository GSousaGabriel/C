#include <stdio.h>
#include <time.h>
#define TAM 1000

// int main()
// {
//     int val = 10;
//     int *pval;
//     pval = &val;
//     printf("%i\n", val);
//     printf("%i", *pval);
// };

// int somavet(int *v)
// {
//     int i, s = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         s = s + (*(v + i));
//     }
// }

// int main()
// {
//     int v[10], i;

//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%i", &v[i]);
//     }
//     printf("%i", somavet(v));
// };

int main()
{
    double time_spent = 0.0;

    int v[TAM];
    
    clock_t begin = clock();
    printf("breaking line\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i\n", v[i]);
    }
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
         printf("The elapsed time is %f seconds", time_spent);
}