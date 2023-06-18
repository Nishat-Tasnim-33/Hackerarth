#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100000];
    cin>>ch;
    int b = strlen(ch);
    int a=0;
    int c=0;
    for(int i=0; i<b; i++)
    {
        if(ch[i]=='z')
        {
            a++;
        }
        else
            break;
    }
    c = b-a;
    if(c==2*a)
    {
        cout<< "Yes"<<endl;
    }
    else
        cout<< "No"<<endl;
    return 0;
}
