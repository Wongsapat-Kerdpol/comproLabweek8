#include<stdio.h>
#include<math.h>
#include<string.h>

char count(char words[100]){
    int total =0;
   for(int i =0; i < strlen(words); i++){
        if (words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] =='u'){
            total+=1;
        }
    }
    printf("Output: Number of vowels: %d\n", total);
}
int main(){
    char eng[100];
    printf("Input: ");
    scanf(" %[^\n]", eng);
    count(eng);
    
    return 0;
}