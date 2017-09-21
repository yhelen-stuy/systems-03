#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nonpointer[10];
    int i;

    // Generate a seed for a random num gen
    time_t time_now = time(NULL);
    srand(time_now);

    // Populate with random numbers, set last num to 0
    for (i = 0; i < 10; i++) {
        nonpointer[i] = rand();
    }

    nonpointer[9] = 0;

    // Print values
    for (i = 0; i < 10; i++) {
        printf("nonpointer[%d]: %d\n", i, nonpointer[i]);
    }

    int pointer[10];

    // Set the new array's values according to reverse of other array
    for (i = 9; i >= 0; i--) {
        *(pointer + i) = *(nonpointer + 9 - i);
    }

    // Print values
    for (i = 0; i < 10; i++) {
        printf("pointer[%d]: %d\n", i, pointer[i]);
    }

}
