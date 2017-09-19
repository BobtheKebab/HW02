#include <stdio.h>

int problem1 (int mult1, int mult2, int below) {
    int total = 0;
    below--;
    for (below; below > 0; below--) {
        if ((below % mult1 == 0) || (below % mult2 == 0)) {
            total += below;
        }
    }
    return total;
}

int problem5 (int lower, int upper) {
    int num = 1;
    int count = lower;
    while (count != upper + 1) {
        if (num % count == 0) {
            count++;
        } else {
            num++;
            count = lower;
        }
    }
    return num;
}

int main() {
    printf("Problem 1 : %d\n", problem1(3, 5, 1000));
    printf("Problem 5 : %d\n", problem5(1, 20));
    return 0;
}