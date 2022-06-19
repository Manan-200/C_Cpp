int main(){
    int num = 10;
    int inp;
    int health = 5;
    int won = 0;

    printf("Answer is between 1 and 50.\n");

    while (health != 0 && won == 0){

        printf("Enter your guess: ");
        scanf("%d", &inp);

        if (inp == num){
            won = 1;
        }
        else{
            if (inp > num){
                printf("Wrong guess, %d is greater than the answer.\n", inp);
            }
            if (inp < num){
                printf("Wrong guess, %d is smaller than answer.\n", inp);
            }
            health--;
            printf("%d lives left.\n", health);
        }
    }

    if (won == 1){
        printf("Congrats! You guessed the right number!");
    }
    else{
        printf("Loser! The answer was %d.", num);
    }

    return 0;
}