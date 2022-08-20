#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void time_delay(int t)
{
    int i=0;
    int n=0;
    int time=100000000;  //Using this Time Delay Function for User Attraction in the game.
    for(i=0;i<=time*t;i++)  //This Function is not pre-defined so we have to made it.
    {
        n*=i;
        n++;
        n++;
    }
}
int main()
{
    int moves=0;
    int i=0;
    int j=0;
    int k=0;
    int m=0;
    int n=0;         //Variables Declaration! All Variables and Arrays are declared here.
    int a=3;
    int b=3;
    char choice=0;
    char key=0;
    int win=0;
    int x=0;
    int check=0;
    char name[30];
    int values[16]={0};
    int game[4][4]={0};
    system("color b0");
    printf("\n\n\t\t\t\t\t\t \\  NUMBER SHIFTING GAME  /\n");
    printf("\t\t\t\t\t\t ___________________________\n\n\n");   //For Starting Interface
    time_delay(2);
    system("color 60");
    time_delay(2);
    system("color a0");         //Adding Colours for beauty
    time_delay(2);
    system("color f0");
    printf(" Assalam-u-Alaikum! Hey User, Please Enter your Beautiful Name: ");
    gets(name);                  //Taking Name from the User
    printf("\n Hii %s! Welcome to our new game application whose name is \"NUMBER SHIFTING GAME\"\n\n\n",name);
    printf("___________________________________________________________________________________________________\n\n");
    printf("\n\n Now Press ANY KEY to Continue .....");
    getch();
    system("cls");
        system("color f0");
        printf("\n\n\t\t\t\t\t\t \\  NUMBER SHIFTING GAME  /\n");
        printf("\t\t\t\t\t\t ___________________________\n");
        time_delay(2);
        system("color f3");
        time_delay(2);
        system("color f2");  //Giving different colours to Heading everytime for the beauty.
        time_delay(2);
        system("color f4");
        printf("\n\t\t\t\t\t\t     RULES OF THIS GAME\n\n");
        printf(" RULE No. 1: You can only move one step at a time by arrow key\n\n");
        printf("\t\tMOVE UP     : by using Up arrow Key\n");
        printf("\t\tMOVE DOWN   : by using Down arrow Key\n"); //Providing Gaming Rules for User
        printf("\t\tMOVE RIGHT  : by using Right arrow Key\n");
        printf("\t\tMOVE LEFT   : by using Left arrow Key\n\n");
        printf(" RULE No. 2: You can move Number at an Empty Position Only\n\n");
        printf(" RULE No. 3: For Each Valid move, Your Total Number of move will decreased by 1\n\n");
        printf(" RULE No. 4: Winning Situation, Numbers in a 4 X 4 Matrix should be in order from 1 to 15\n\n");
        printf("\t\t\t\"WINNING SITUATION\"\n");
        printf(" ---------------------------\n");
        for(i=1;i<=16;i++)
        {
            if(i/10==0&&i!=16)
                printf(" | %d  |",i);
            else if(i==16)
                printf(" |    |");           // Printing Victory Situation for User
            else
                printf(" | %d |",i);
            if(i%4==0&&i!=0)
                printf("\n");
        }
        printf(" ---------------------------\n");
        printf(" RULE No. 5: You can exit the game any time by pressing 'E' or 'e'\n\n");
        printf(" So, Try to win in minimum no. of moves. \n");
        printf("Now, Press ENTER Key to Select which type of difficulty level you want to play: \n");
        while(key!=13)
        key=getch();
        key=0;
    do
    {
        n=0;
        a=3;
        b=3;
        do
        {
            system("cls");
            system(" color f5");
            printf("\n\n\t\t\t\t\t\t \\  NUMBER SHIFTING GAME  /\n");
            printf("\t\t\t\t\t\t ___________________________\n\n\n");
            time_delay(2);
            system("color f2");
            time_delay(2);
            system("color f4");        //Using colours for user attraction in the game.
            time_delay(2);
            system("color f6");
            time_delay(2);
            system("color f1");
            printf(" In this game there are THREE Game Modes which are EASY, MEDIUM, HARD:\n\n");
            printf(" Please Select any One Option from the given options below:\n\n");
            printf(" Press Key 1 for EASY Level in which you have only 500 moves to play.\n\n");
            printf(" Press Key 2 for MEDIUM Level in which you have only 300 moves to play.\n\n");
            printf(" Press Key 3 for HARD Level in which you have only 100 moves to play.\n\n\n");
            printf(" Press Key 'E' or 'e' for exit from the game application:\n\n");
            printf(" Enter Your Choice: ");
            choice=getch();         // Taking Input from User that which Level of game he wants to play.
            printf("%c",choice);
            switch(choice)
            {
            case '1':
                moves=500;
                x=1;
                break;
            case '2':
                moves=300;
                x=1;
                break;
            case '3':
                moves=100;
                x=1;
                break;
            case 'E':
            case 'e':
                x=1;
                exit(0);
                break;
            default:
                printf("\n\n You Entered an incorrect Key. Not Problem! Enter the Key again from the given options.");
                printf("\n\n Now press any key to Continue....\n");
                getch();                //If user accidently presses the wrong key.
                system("cls");
                break;
            }
        }
        while(x!=1);
        srand(time(NULL));  //Using srand() function to provide different Random Numbers everytime to the User.
        for(i=0;i<15;i++)
        {
            values[i]=rand()%15;
            values[i]++;
            while(i>0)
            {
                check=0;
                k=1;
                while(i-k>=0)//Storing All different Random Numbers by using rand() function form 1 to 15 in an Array of size 16.
                {
                    if(values[i]==values[i-k])
                    {
                        check=1;
                    }
                    k++;
                }
                if(check==1)
                {
                    values[i]=rand()%15;
                    values[i]++;
                }
                else
                {
                    break;
                }
            }
        }
        m=0;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                game[i][j]=values[m];    //Now Copying elements of 1D Array of size 16 in 2D Array of size 4X4.
                m++;
            }
        }
        system("cls");
        system("color f2");
        printf("\n\n\n\n\n\t\tLETS PLAY THE GAME!");
        time_delay(1);        // Printing "LETS PLAY THE GAME" with the help of User Defined Time Delay Function.
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\tLETS PLAY THE GAME!");
        time_delay(1);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLETS PLAY THE GAME!");
        time_delay(1);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLETS PLAY THE GAME!");
        time_delay(1);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tLETS PLAY THE GAME!");
        time_delay(1);
        system("cls");
        system("color f5");
        do
        {
            if(n<=moves)
            {
                system("cls");            //For Clearing the Secreen everytime to print fresh results to the User,
            }                             //After Every Iteration.
            printf("\n\t\t\t\t\t\t \\  NUMBER SHIFTING GAME  /\n");
            printf("\t\t\t\t\t\t ___________________________\n");    //Printing User Name and No. of Moves left.
            printf("\n\t\t\t  Hello %s!  \t\t\t",name);
            if(choice=='1')
            {
                printf("EASY");
            }
            else if(choice=='2')
            {
                printf("MEDIUM");
            }
            else if(choice=='3')
            {
                printf("HARD");
            }
            printf("\t\t    Moves Left: %d\n\n",moves-n);
            for(i=0;i<4;i++)
            {
                printf("\t\t\t  ____\t\t\t  ____\t\t\t  ____\t\t\t  ____\n");
                for(j=0;j<4;j++)
                {
                    if(game[i][j]==0)
                    {
                        printf("\t\t\t |    |");//Printing Current Position of Elements in 2D Array in the form of boxes,
                        continue;               //for User Understanding.
                    }
                    if(game[i][j]/10==0)
                    {
                        printf("\t\t\t | %d  |",game[i][j]);
                    }
                    else
                    {
                        printf("\t\t\t | %d |",game[i][j]);
                    }

                }
                printf("\n");
                printf("\t\t\t  ____\t\t\t  ____\t\t\t  ____\t\t\t  ____");
                printf("\n\n\n");
            }
            if(win==1)
            {
                break;
            }
            printf("\t Press Key 'r' or Key 'R' for Restart the game.\n");//Printing for Emergency Restart or Exit.
            printf("\t Press Key 'e' or Key 'E' for exit from the game Application.\n\n");
            if(n==moves)
            {
                break;
            }
            if(key!=-32)
            {
                while(key!=-32)
                {
                    key=getch();
                    if(key=='r'||key=='R'||key=='e'||key=='E')
                    {
                        break;
                    }
                }
                if(key==-32)
                key=getch();
            }
            if(key=='r' || key=='R')
            {
                printf(" Are you sure that you want to Restart the game (Press Key 'y' for yes or press ANY Key for no)\n");
                key=getch();               //Taking Confirmation from the User
                if(key=='y' || key=='Y')
                {
                    system("cls");
                    break;
                }
                else
                {
                    key=0;
                }
            }
            else if(key=='e' || key=='E')
            {
                printf(" Are you sure that you want to EXIT from the game Application (Press Key 'y' for yess or press ANY Key for no)\n");
                key=getch();              //Taking Confirmation from the User
                if(key=='y' || key=='Y')
                {
                    exit(0);
                }
                else
                {
                    key=0;
                }
            }
            if(game[a][b]==0)
            {
                if(key==77)
                {
                    b--;                //It is for RIGHT Arrow Key.
                    if(b>=0)
                    {
                        game[a][b+1]=game[a][b];
                        game[a][b]=0;
                        n++;
                    }
                    else
                        b++;
                }
                else if(key==80)            //Checking which Arrow key is pressed by the User.
                {
                    a--;                    //It is for DOWN Arrow Key.
                    if(a>=0)
                    {
                       game[a+1][b]=game[a][b];
                       game[a][b]=0;
                       n++;
                    }
                    else
                        a++;
                }
                else if(key==72)
                {
                    a++;                   //It is for UP Arrow Key.
                    if(a<=3)
                    {
                        game[a-1][b]=game[a][b];
                        game[a][b]=0;
                        n++;
                    }
                    else
                        a--;
                }
                else if(key==75)
                {
                    b++;
                    if(b<=3)            //It is for Left Arrow Key.
                    {
                        game[a][b-1]=game[a][b];
                        game[a][b]=0;
                        n++;
                    }
                    else
                        b--;
                }
            }
            m=1;
            for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                    if(game[i][j]!=m)      //Checking that the User got his victory this time or not.
                    {
                        break;
                    }
                    m++;
                    if(m==16)
                        m=0;
                }
                if(j<4)
                {
                    break;
                }
            }
            if(i==4&&j==4)
            {
                win=1;
            }
        }
        while(n<=moves);            //Condition becomes true until User Moves are completed.
        if(key=='y'||key=='Y')
        {
            continue;
        }
        if(n<50&&win==1)      //GIVING Remarks to the User if he win the game.
        {
            printf("\n Excellent. Congratulations! You are the special one. You won the game in just %d moves.\n",n);
        }
        else if(n>=50&&n<100&&win==1)
        {
            printf("\n Very Good. Congratulations! You won the game in just %d moves.\n",n);
        }
        else if(n>=100&&win==1)
        {
            printf("\n Good one. Congratulations! You won the game in just %d moves.\n",n);
        }
        else if(n==moves)   //GIVING Remarks to the User if he loses the game.
        {
            printf("\n Oops! You Lose the game because your Number of moves are completed. But its a game, Never Mind and Try Again.");
            printf(" Best of Luck!\n");
        }
        printf("\n\n If you want to play again this game, then press key 'r' or 'R'.");
        printf("\n\n If you want to exit the game, then press key 'e' or 'E'.\n\n");
        do
        {
            key=getch();
            if(key=='r'||key=='R')
            {
                break;                     //If User wants to play again the game.
            }
            else if(key=='e'||key=='E')
            {
                exit(0);                   //If User wants to Leave from the game application.
            }
        }while(key!='r'&&key!='R'&&key!='e'&&key!='E');
        if(key=='r'||key=='R')
        system("cls");                      //It is used for clear the screen.
    }while(key=='r'||key=='R'||key=='y'||key=='Y');
    return 0;
}
