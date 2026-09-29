#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1, size2, total;
    int array1[10000];
    int array2[10000];
    int array3[10000];

    int sum = 0;
    int prod = 1;

    printf("Enter size for Array [1]: ");
    scanf("%d", &size1);

    printf("Enter the corresponding numbers of Array [1]: ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &array1[i]);
    }

    printf("Enter size for Array [2]: ");
    scanf("%d", &size2);

    printf("Enter the corresponding numbers of Array [1]: ");
    for(int j = 0; j < size2; j++){
        scanf("%d", &array2[j]);
    }

    total = size1 + size2;

    for(int i = 0; i < size1; i++){
        array3[i] = array1[i];
    }

    for(int i = 0; i < size2; i++){
        array3[size1 + i] = array2[i];
    }


    printf("Array [1] and [2] in Original Value: ");
    for(int i = 0; i < total; i++){
        printf(" %d ", array3[i]);
    }

    printf("\n");

    printf("Array [1] and [2] in Reverse Value: ");
    for(int j = total - 1; j >= 0; j--){
        printf(" %d ", array3[j]);
    }

    printf("\n");


    printf("The Sum of all Values is: ");
    for(int i = 0; i < total; i ++){
        sum = sum + array3[i];
    }
    printf(" %d ", sum);

    printf("\n");

    printf("The Product of all Values is: ");
    for(int i = total - 1; i >= 0; i--){
        prod = prod * array3[i];
    }
    printf(" %d ", prod);

    return 0;
}
