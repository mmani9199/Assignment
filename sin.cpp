#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    float q1,q2;
    cout<<"Enter first angle"<<endl;
    cin>>q1;
    cout<<"second angle"<<endl;
    cin>>q2;
    for(float i=q1;i<=q2;i=i+0.1)
    {
        if(sin(i)>=0)
        {
            cout<<setw(41);
            cout<<"||";
            int k=sin(i)*40;
            for(int j=1;j<=k;j++)
                cout<<"-";
            cout<<endl;
        }
        if(sin(i)<0)
        {
            int k=-(sin(i)*40);
            cout<<setw(40-k);
            for(int j=1;j<=k;j++)
                cout<<"-";
            cout<<"||";
            cout<<endl;
        }
        
    }
}
