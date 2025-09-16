
#include <stdio.h>
void call_name(char name[][100], int n[], int size) {
    float avg = 0;
    int highest = n[0];
    int lowest = n[0];

    for (int i = 0; i < size; i++) {
        avg += n[i];

        if (n[i] > highest) {
            highest = n[i];
        }

        if (n[i] < lowest) {
            lowest = n[i];
        }
    }
    avg = avg / size;
    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
     printf("\nStudents who passed:\n");

    for (int i = 0; i < size; i++) {
        if (n[i] >= 60) {
            printf("%s\n", name[i]);
        }
    }
}
int main(){
    int n,i;
    char name[100][100];
    int num[100];
    printf("How many students: ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        int count =1+i;
        printf("Enter name of student %d:",count);
        scanf("%s",name[i]);
        printf("Enter grade of Alice: ");
        scanf("%d",&num[i]);
    }
    call_name(name,num,n);
}