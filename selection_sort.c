#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int weight;
    int height;
} Person;

void swap(Person* x, Person* y) {
    Person temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(Person people[], int n) {
    int i, j, least;
    for (i = 0; i < n - 1; i++) {
        least = i;
        for (j = i + 1; j < n; j++)
            if (people[j].weight < people[least].weight)
                least = j;
        swap(&people[i], &people[least]);
    }
}

int main(void) {
    int i;
    int n = MAX_SIZE;
    Person people[MAX_SIZE] = {
        {3, 120}, {5, 130}, {19, 150}, {4, 120}, {20, 180},
        {11, 120}, {7, 120}, {35, 300}, {1, 111}, {6, 165}
    };

 
    selection_sort(people, n);

    printf("¸ö¹«°Ô: ");
    for (i = 0; i < n; i++)
        printf("%d ", people[i].weight);

    printf("\nÅ°: ");
    for (i = 0; i < n; i++)
        printf("%d ", people[i].height);

    printf("\n");

    return 0;
}
