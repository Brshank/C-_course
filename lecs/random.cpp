#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

#define MAX 400
#define n 400

#define upper 100
#define lower 0

struct v
{
    size_t i;
    size_t j;
};

int A[MAX][MAX];
int B[MAX][MAX];
int C[MAX][MAX];

void matrixCreator(int matrix[][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++)
        {
            int num = (rand() % (upper - lower + 1)) + lower;
            matrix[i][j] = num;
        }
    }
}

static void* multiplication(void* arg) {
    struct v* data = (struct v*)arg;

    for (int l = 0; l < MAX; l++)
    {
        size_t i = (data[l]).i;
        size_t j = (data[l]).j;
        int sum = 0;

        for (int d = 0; d < MAX; d++)
        {
            sum = sum + A[i][d] * B[d][j];
        }

        C[i][j] = sum;
        sum = 0;
    }
    return 0;
}

int main(int argc, char* argv[])
{

    pthread_t threads[n];
    size_t i, k;

    matrixCreator(A);
    matrixCreator(B);

    struct v** data;
    data = (struct v**)malloc(n * sizeof(struct v*));

    for (i = 0; i < n; i++)
    {
        data[i] = (struct v*)malloc(n * sizeof(struct v));

        for (k = 0; k < n; k++)
        {
            data[i][k].i = i;
            data[i][k].j = k;
        }
        pthread_create(&threads[i], NULL, multiplication, data[i]);
    }

    for (i = 0; i < n; i++)
    {
       
    }

    for (i = 0; i < MAX; i++)
    {
         pthread_join(threads[i], NULL);
        for (k = 0; k < MAX; k++)
        {
            printf("%d\t", C[i][k]);
        }

        printf("\n");

        free(data[i]);
    }

    free(data);

    return 0;
}