/*Makes a n x n magic square*/

#include <stdio.h>
 

int main(void){
    int n;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int num_array[n*n];

    //Generate the numbers from 1 to n^2
    for (int i = 0; i < (n*n); i++)
    {
        num_array[i] = i + 1;
    }

    //Make the two dimensional array that will be the magic square[i][j] with n rows and n columns 
    int magic_square[n][n];

    for (int i = 0; i < n; i++) { //Populate it with 0s
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    //Now implement the logic to populate the array

    //First number should be put on row 0, in the middle 
    //Middle in a row can be found from n / 2, but what if its 2.5? the default int will round down
    //To solve this i = (n + (x - 1)) / x;
    //that number will be the row position so square[i][j] and j should be the numarray[0] = 1
    //After that the row will be - 1 and the column + 1, if out of bounds aka 0 - 1 then it should go to n - 1, truncate that is
    //If the position is already taken then go down one row

    int i = 0; //starting row which is 0
    int j = n  / 2; //starting column

    int pi, pj; //variables to store previous positions

    magic_square[i][j] = num_array[0];

    for (int x = 1; x < (n*n) ; x++) //Iterates through each number except for 0 which we already used
    {
        pi = i;
        pj = j;

        //Next row from the previous is -1 except if it is smaller than 0 so
        i--;
        if (i < 0){
            i = n-1; //Truncates
        }
        //Next column is + 1 except if it is == n which then becomes 0
        j++;
        if (j == n){
            j = 0;
        }


        if (magic_square[i][j] != 0)
        {   
            i = pi + 1;
            if (i == n)
            {
                i = 0;
            }
            j = pj;

            magic_square[i][j] = num_array[x]; 
        }
        else {
        magic_square[i][j] = num_array[x];
        }

    }

    //When i have populated everything I have to print them starting from row 0 to row n-1 from column to column

    for (int f = 0; f < n; f++){
        for (int g = 0; g < n; g++) {
            printf("%2d ", magic_square[f][g]);
        }
        printf("\n");
    }
}