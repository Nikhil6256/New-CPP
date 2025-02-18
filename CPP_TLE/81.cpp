#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    string s;
    int n;
    cin>>n;
    cin>>s;
    string comp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            comp += 'T';
        }

        else if (s[i] == 'T'){
            comp += 'A';
    }

    else if (s[i] == 'C'){
        comp += 'G';
}

else if (s[i] == 'G')
{
    comp += 'C';
}
    }
    cout<<comp<<endl;
    }
return 0;
}