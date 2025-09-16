#include<stdio.h>
int call_name(int n[], int size){
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++) {
        if (n[i] % 2 == 0) {
            even += n[i];
        } else {
            odd += n[i];
        }
    }
    printf("Output: Sum of even numbers: %d\n", even);
    printf("        Sum of odd numbers: %d\n", odd);
}
int main(){
    int n,i;
    int num[100];
    printf("N: ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("Input: ");
        scanf("%d",&num[i]);
    }
    call_name(num,n);

}