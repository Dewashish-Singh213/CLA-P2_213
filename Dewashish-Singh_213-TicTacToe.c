#include <stdio.h>
#include <conio.h>
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int check_win();
void result();
int main()
{
    int player = 1, i, choice;
    char put;
    do
    {
        result();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, Enter a number :  ", player);
        scanf("%d", &choice);
        put = (player == 1) ? 'X' : 'O';
        if (choice == 1 && square[1] == '1')
            square[1] = put;       
        else if (choice == 2 && square[2] == '2')
            square[2] = put;           
        else if (choice == 3 && square[3] == '3')
            square[3] = put;          
        else if (choice == 4 && square[4] == '4')
            square[4] = put;     
        else if (choice == 5 && square[5] == '5')
            square[5] = put;    
        else if (choice == 6 && square[6] == '6')
            square[6] = put;   
        else if (choice == 7 && square[7] == '7')
            square[7] = put;
        else if (choice == 8 && square[8] == '8')
            square[8] = put;
        else if (choice == 9 && square[9] == '9')
            square[9] = put;  
        else
        {
            printf("Invalid Move ");
            player--;
            getch();
        }
        i = check_win();
        player++;
    }while (i ==  - 1); 
    result();    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame Draw");
    getch();
    return 0;
}
int check_win()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;      
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;      
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;     
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return  - 1;
}
void result()
{
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}
