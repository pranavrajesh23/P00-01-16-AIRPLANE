#include<iostream>
using namespace std;

void metalCheck()
{
    cout<<"\n--------Metal Check--------\n";
    cout<<"\nDo the baggage contain any metals? (yes/no)\n";
    string metal;
    cin>>metal;
    if(metal=="yes")
    {
        cout<<"\nHand search the baggage\n";
    }
    else
    {
        cout<<"\nNo restricted article found\n";
    }
}

void articleCheck()
{
    cout<<"\n--------Article Check--------\n";
    cout<<"\nDo the baggage contain any restricted article? (yes/no)\n";
    string art;
    cin>>art;
    if(art=="yes")
    {
        cout<<"\nGive up the articles above permitted level\n";
    }
    else
    {
        cout<<"\nNo restricted article found\n";
    }
}

void screening()
{
    cout<<"\n--------Screening Process--------\n";
    cout<<"\nSecurity Screening\n";
    cout<<"\nScreening totally has three checks\n";
    cout<<"\nRedirecting to the initial check\n";
    articleCheck();
    cout<<"\nRedirecting to the next check\n";
    metalCheck();
    cout<<"\nReadirecting to the final check\n"; 
    // GoodsCheck();
    cout<<"\nAll screening checks are completed\n";
    cout<<"\nBe ready to fly high\n";
    // immigration();
}


int main()
{
    cout<<"------Airplane Passenger Workflow------\n";
    cout<<"\nCheck in\n";
    cout<<"\nBaggage drop\n";
    cout<<"\nOut for baggage screening\n";
    screening();
}