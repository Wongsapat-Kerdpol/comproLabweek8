#include <stdio.h>
void find_primes(int start, int end) {
    printf("The prime numbers within the intervals are:\n");

    for (int num = start; num <= end; num++) {
        if (num <= 1){
            continue; 
        } 
        int is_prime = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main() {
    int first, stop;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &first, &stop);
    find_primes(first, stop);
    return 0;
}
