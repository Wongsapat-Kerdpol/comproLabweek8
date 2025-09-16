#include<stdio.h>
#include<math.h>

float circle(float r){
    float c,a;
    c = 3.14*2.0*r;
    a = 3.14*(pow(r,2));
    printf("Circumference: %.2f\n", c);
    printf("Area: %.2f\n", a);    
}
int main(){
    float rad;
    printf("Enter the radius in cm: ");
    scanf("%f",&rad);
    circle(rad);
    
    return 0;
}