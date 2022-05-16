#include<iostream>
#include<cstdlib>
#include<string.h>
#include<conio.h>
using namespace std;
class cricket_score{
public:
    int playernum;
    char playername[25];
    int over;
    char team[10];
    int inningsnum;
    int innings_total_run=0;
    int  run;
    int wicket;


void innings()
    {   for(int i=1;i<=2;i++)
        {
         cout<<"input player number:";
         cin>>playernum;
        cout<<"---input player name---\n";
        for(int i=0;i<playernum;i++ )
        {
            cin>>playername;
        }
        cout<<"over:";
        cin>>over;
        wicket=playernum;

        cin>>team;
        for(int i=1;i<over*6;i++)
        {
        cin>>run;
        if(1<=run&& run<=6)
        {
            innings_total_run+=run;
        }
        else
            {
                wicket--;
                if(wicket<1)
                {
                cout<<"all out player";
                }
            }
        }

    }
    if(innings_total_run>innings_total_run)
    {
        cout<<"win 1st team";
    }
    else if(innings_total_run<innings_total_run)
       {

       cout<<"win 2nd team";

    }
    else
        cout<<"Draw";

}
};
int main()
{
    cricket_score innings;
    innings.innings();
    return 0;
}
