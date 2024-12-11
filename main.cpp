  char game::play[3][3]={};
int main()
{
     int a,b;
     bool status=true;
     player11 aa;
     player22 bb;
     for(int count=0;count<3;count++)
     {
       for(int i=0;i<3;i++)
       {
            c++;
           cout<<"enter a player 1 coloum and row "<<endl;
           cin>>a>>b;
           while(status)
           {
           try{
               aa.paly11(a,b);
               status=false;
             }
              catch(string &obj)
              {
                  cout<<obj;
                  cin>>a>>b;
                  status=true;
              } 
           }
           if(c==9)
           {
            cout<<"match draw "<<endl;
            exit(0);
           }
           cout<<"enter a player 2 coloum and row "<<endl;
           cin>>a>>b;
           c++;
           while(!status)
           {
            try{
                bb.play2(a,b);
                status=true;
                }
              catch(string &obj)
              {
                  cout<<obj;
                  cin>>a>>b;
                  status=false;
              } 
           }
           }
       }
}
