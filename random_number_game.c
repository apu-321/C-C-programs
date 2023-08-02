#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, nguesses =1;
    srand(time(0));
    number =rand()%10+1;
    //printf("the number is %d\n",number);
    do{
        printf("guess the number between 1 to 10\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please \n");
        
        }
        else if (guess<number){
             printf("higer number please \n");
        }
        else{
            printf("you guess in %d attempt \n",nguesses);
        }
        nguesses++;
    } 
    while(guess != number);
    return 0;
   
  return 0;
}
