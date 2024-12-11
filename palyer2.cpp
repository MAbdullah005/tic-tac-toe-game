class player22:public game
{
     public:
       void play2(int a,int b)
   {
    if(play[a][b]!='*')
    {
    play[a][b]='X';
     set1();
    }
    else
    {
      c--;
      throw string("enter is vaild box ");
    }
   }
};
