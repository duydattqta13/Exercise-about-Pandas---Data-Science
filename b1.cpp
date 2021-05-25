#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num;
    int n,temp,j=0;
    cin>>n;
    for(int i= 0 ; i<n ; i++)
    {
        cin>>temp;
        num.push_back(temp);
    }
    for(int i=0; i<num.size() ; i++)
    {
        if(i+1 < num.size())
        {
            j++;
            if(abs(num[i] - num[i+1]) != (n-j) && abs(num[i] - num[i+1]) !=(j))
            {
                cout<<"Not jolly"<<endl;
                return 0;
            }
        }
    }
    cout<<"Jolly"<<endl;

}