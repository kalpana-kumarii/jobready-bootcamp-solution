
#include <stdio.h>
#include <windows.h>

void show();
void playWithPlayer();
void playWithSmartComputer();
void playWithEvilComputer();
int winningCase();

void show(char arr[])
{
    system("cls");
    printf("########################### Tic Tac Toe ########################### \n");
    printf("First Player (Player 1) X\n");
    printf("Second Playe (Player 2) 0 \n");
    printf("\n   |   |    \n");
    printf(" %c | %c | %c ", arr[0], arr[1], arr[2]);
    printf("\n___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c\n", arr[3], arr[4], arr[5]);
    printf("___|___|___");
    printf("\n   |   |    \n");
    printf(" %c | %c | %c ", arr[6], arr[7], arr[8]);
    printf("\n   |   |    \n");
    printf("___|___|___\n\n");
    printf("#################################################################################\n");
    printf("\n");
}
int winningCase(char arr[])
{
     if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        return 1;
    }
    if (arr[3] == arr[4] && arr[4] == arr[5])
    {
        return 1;
    }
    else if (arr[6] == arr[7] && arr[7] == arr[8])
    {
        return 1;
    }  
    else if (arr[0] == arr[3] && arr[3] == arr[6])
    {
        return 1;
    }
    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        return 1;
    }
    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        return 1;
    }
    else if (arr[0] == arr[4] && arr[4] == arr[8])
    {
        return 1;
    }
    else if (arr[2] == arr[4] && arr[4] == arr[6])
    {
        return 1;
    }
    else if (arr[0] != '1' && arr[1] != '2' && arr[2] != '3' &&
             arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' && arr[8] != '9')
    {
        return 0;
   }
    else
        return -1;
}

void playWithPlayer(char arr[])
{
    int status;
    int player = 1;
    char choice;
    char mark;
    do
    {
        system("cls");
        show(arr);
        player = (player % 2) ? 1 : 2;
        mark = player==1 ? 'x' : 'o';
        printf("Player %d  : | %c | Enter Marking Place  ", player, mark);
        fflush(stdin);
        scanf("%c", &choice);     
        if (choice == arr[0])
            arr[0] = mark;

        else if (choice == arr[1])
            arr[1] = mark;

        else if (choice == arr[2])
            arr[2] = mark;

        else if (choice == arr[3])
            arr[3] = mark;
        else if (choice == arr[4])
            arr[4] = mark;
        else if (choice == arr[5])
            arr[5] = mark;
        else if (choice == arr[6])
            arr[6] = mark;

        else if (choice == arr[7])
            arr[7] = mark;

        else if (choice == arr[8])
            arr[8] = mark;

        else
        {
            printf("Invalid move ");
            player--;
        }
       status = winningCase(arr);
       
       if(status==1){
      
         break;
       }
       player++;
       
    } while (status ==-1);
    show(arr);
    if (status == 1)
    {
        printf("==>\aPlayer %d -'%c' win  ", player,mark);
    }
    else 
    {
        printf("==>\aGame draw");
    }
   
}

void playWithSmartComputer(char arr[]){
    int status;
    int player = 1;
    char choice;
    char mark='0',markc='x';
    do
    {
        system("cls");
        show(arr);
        player = (player%2) ? 1 : 2;
       // mark = player==1 ? 'x' : 'o';
        printf("Player %d  : | %c | Enter Marking Place  ", player, mark);
        fflush(stdin);
        scanf("%c", &choice); 
        //user move
        if(player==1)
            { 
                if (choice == arr[0])
           { arr[0] = mark; }
        else if (choice == arr[1])
            arr[1] = mark;

        else if (choice == arr[2])
            arr[2] = mark;

        else if (choice == arr[3])
            arr[3] = mark;
        else if (choice == arr[4])
            arr[4] = mark;
        else if (choice == arr[5])
            arr[5] = mark;
        else if (choice == arr[6])
            arr[6] = mark;

        else if (choice == arr[7])
            arr[7] = mark;

        else if (choice == arr[8])
            arr[8] = mark;

        else
        {
            printf("Invalid move ");
            player--;
        }
     }

     // computer moves
       player++;
   if(arr[0]==arr[1]){
    arr[2]=markc;
   }
   if(arr[1]==arr[2]){
    arr[0]=markc;
   }

    
       status = winningCase(arr);
       
       if(status==1){      
         break;
       }
       
       
    } while (status ==-1);
    show(arr);
    if (status == 1)
    {
        printf("==>\aPlayer %d -'%c' win  ", player,mark);
    }
    else
    {
        printf("==>\aGame draw");
    }
}

void playWithEvilComputer()
{


}
int main()
{
    char arr[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int k;

    printf("Enter Your Choice\n");
    printf("1 want to play with Smart Computer\n");
    printf("2 want to play with Evil Computer\n");
    printf("3 want to play with Second Computer\n");
    printf("4 Exit\n");

    scanf("%d", &k);
    switch (k)
    {
    case 1:
        //printf("Smart Computer");
        playWithSmartComputer(arr);
        break;
    case 2:
        //printf("Evil computer");
        playWithEvilComputer(arr);
        break;
    case 3:
        // printf("player");
        // system("cls");
        playWithPlayer(arr);
        break;
    case 4:
        exit(0);

    default:
        printf("Invalid Choice");
        break;
    }
    // for (i = 1; i < 5; i++)
    // {

    //     system("cls");
    //     show();
    // }
    return 0;
}