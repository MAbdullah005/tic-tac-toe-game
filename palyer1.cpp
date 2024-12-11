class player11:public game
{
    public:
     void paly11(int a,int b)
   {
      if(play[a][b]!='X')
      {
      play[a][b]='*';
       set1();
      }
      else
      {
        c--;
         throw string("enter in vaild box ");
      }
   }
};
