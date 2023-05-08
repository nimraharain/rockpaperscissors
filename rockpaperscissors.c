#include<stdio.h>
#include<stdlib.h>

//declare variables here
int user_choice;
int comp_choice;
int user_score;
int comp_score;


int main(){
    // every game runs 3 times
for (int i = 0; i < 3; i++){
    printf("\n");
    printf("rock, papers, or scissors?!\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    
    //user enters choice 
    printf("Enter your choice: ");
    scanf("%d", &user_choice);
    
    //computer choses an option:
    comp_choice = arc4random_uniform(3) + 1;
    //prints computers choice
    printf("\n");
    printf("computer chose: ");
    switch(comp_choice){
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }
        if (user_choice == comp_choice){
            printf("its a tie!\n");
        } else if (user_choice == 2 && comp_choice == 1){
            printf("Nice!\n");
            user_score++;
        }else if (user_choice == 1 && comp_choice == 3){
            printf("Nice!\n");
            user_score++;
        }else if (user_choice == 3 && comp_choice == 2){
            printf("Nice!\n");
            user_score++;
        }else{
            printf("try again...im sure you will do better this time\n");
            comp_score++;
        }
    }

    if (user_score > comp_score++){
        printf("YOU WON!");
    } else if (user_score < comp_score++){
        printf("Uh oh...YOU LOST!");
    } else{
        printf("its a tie!");
    }
    return 0;
}
