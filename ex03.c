#include<stdio.h>
#include<math.h>

int sq(int first, int second){
    int sum;
    sum = pow(first,2)+ pow(second,2);
    printf("Sum of squares of %d and %d is %d\n",first, second,sum); 
}
int main(){
    int one,two;
    printf("Enter the two integers: ");
    scanf("%d %d",&one,&two);
    sq(one,two);
    
    return 0;
}