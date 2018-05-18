#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int i,c;
    string a;
    while(getline(cin,a))
    {
        c=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(isalpha(a[i]) && !isalpha(a[i+1]))
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
