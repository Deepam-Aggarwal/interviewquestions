#include <iostream>
#include <string>
using namespace std;
int main() {
    char s[10];
    int j,t,sl,u;
    cin>>t;
    while(t!=0)
    {
        cin>>sl>>j;
        cin>>s;
        if(sl==j)
        {
            cout<<"both";
        }
        else if (sl>j)
        {for (int i = 0; i < sl; i++)
           {
             if (s[i] >= 'A' && s[i] <= 'Z')
             u++;
           }
             if(u==j)
           {
               cout<<"chef";
           }
           else if(u!=j)
           {cout<<"none";}
        }
        else
         cout<<"brother"; 
        t--;
    }
    return 0;
}
