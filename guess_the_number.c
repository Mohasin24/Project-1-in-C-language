#include <stdio.h>
#include <stdlib.h>

int for_Game(int, int, int);
int while_Game(int, int, int);
int do_while_Game(int, int, int);

int main()
{
    int iNoGuesses = 0;
    int iGuess = 0;
    srand(time(NULL));
    int iRandom = rand() % 100;
    // printf("%d\n", iRandom);
    
    for_Game(iNoGuesses, iGuess, iRandom);
    // while_Game(iNoGuesses,iGuess,iRandom);
    // do_while_Game(iNoGuesses,iGuess,iRandom);
    

    return 0;
}

int for_Game(int iNoGuesses, int iGuess, int iRandom)
{
    for (iNoGuesses = 1; iGuess != iRandom; iNoGuesses++)
    {
        printf("Enter your guess :-\n");
        scanf("%d", &iGuess);

        if (iGuess < 0 || iGuess > 100)
        {
            printf("Please enter a number greater than 0 and less than 100.\n");
        }
        else
        {
            if (iGuess == iRandom)
            {
                printf("You guessed it right in %d guess(es), the number is : %d\n", iNoGuesses, iGuess);
            }
            else if (iGuess < iRandom)
            {
                printf("Please enter a larger number than %d\n", iGuess);
            }
            else if (iGuess > iRandom)
            {
                printf("Please enter a smaller number than %d\n", iGuess);
            }
        }
    }
}

// int while_Game(int iNoGuesses, int iGuess, int iRandom)
// {
//     for (iNoGuesses = 1; iGuess != iRandom; iNoGuesses++)
//     {
//         printf("Enter your guess :-\n");
//         scanf("%d", &iGuess);

//         if (iGuess < 0 || iGuess > 100)
//         {
//             printf("Please enter a number greater than 0 and less than 100.\n");
//         }
//         else
//         {
//             if (iGuess == iRandom)
//             {
//                 printf("You guessed it right in %d guess(es), the number is : %d\n", iNoGuesses, iGuess);
//             }
//             else if (iGuess < iRandom)
//             {
//                 printf("Please enter a larger number than %d\n", iGuess);
//             }
//             else if (iGuess > iRandom)
//             {
//                 printf("Please enter a smaller number than %d\n", iGuess);
//             }
//         }
//     }
// }

// int do_while_Game(int iNoGuesses, int iGuess, int iRandom)
// {
//     do
//     {
//         printf("Enter your guess :-\n");
//         scanf("%d", &iGuess);

//         if (iGuess < 0 || iGuess > 100)
//         {
//             printf("Please enter a number greater than 0 and less than 100.\n");
//         }
//         else
//         {
//             if (iGuess == iRandom)
//             {
//                 printf("You guessed it right in %d guesses, the number is : %d\n", iNoGuesses, iGuess);
//             }
//             else if (iGuess < iRandom)
//             {
//                 printf("Please enter a larger number than %d\n", iGuess);
//             }
//             else if (iGuess > iRandom)
//             {
//                 printf("Please enter a smaller number than %d\n", iGuess);
//             }
//             iNoGuesses++;
//         }
//     } while (iGuess != iRandom);
// }
