#include<iostream>
using namespace std;
int c=0;
class game
{
   protected:
   int player1,player2;
   static char play[3][3];
   public:
   game()
   {
    player1=player2=0;
    for(int count=0;count<3;count++)
      {
         for(int i=0;i<3;i++)
         {
          play[count][i]='Z';
         }
      }
   }
   bool check()
   {
       for(int count=0;count<3;count++)
       {
          if(play[0][count]=='*'&&play[1][count]=='*'&&play[2][count]=='*'||
            play[0][count]=='X'&&play[1][count]=='X'&&play[2][count]=='X'||
            play[count][0]=='*'&&play[count][1]=='*'&&play[count][2]=='*'||
            play[count][0]=='X'&&play[count][1]=='X'&&play[count][2]=='X')
          {
            if(play[0][count]=='*')
            {
               cout<<"palyer 1 win the game ";
            } 
            else
            {
             cout<<"palyer 1 win the game ";
            }
             exit(0);
          }
       }
       if(play[0][0]=='*'&&play[2][2]=='*'&&play[1][1]=='*'||play[0][2]=='*'&&play[1][1]=='*'&&play[2][0]=='*')
       {
        cout<<"player 1 win by diganoly "<<endl;
        exit(0);
       }
       else if(play[0][0]=='X'&&play[2][2]=='X'&&play[1][1]=='X'||play[0][2]=='X'&&play[1][1]=='X'&&play[2][0]=='X')
       {
        cout<<"player 1 win by diganoly "<<endl;
        exit(0);
       }
   }
 
