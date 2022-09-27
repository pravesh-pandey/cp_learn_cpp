#include<bits/stdc++.h>
using namespace std;
int kmp(string s,string pat){
    int m=pat.size(),n=s.size();
    vector<int> lps(m,0);
//----------------------------- way for lps ---------------------------------

    for(int i=1;i<m;i++)
    {
        int j=lps[i-1];
        while(j>0 && pat[i]!=pat[j])
        j=lps[j-1];
        if(pat[i]==pat[j])
        j++;
        lps[i]=j;
    }

//------------------------------ matching ------------------------------------------
    int i=0,j=0;
    while(i<n)
    {
        if(pat[j]==s[i])
        {
            i++;
            j++;
        }
        if(j==m)
        return i-m;
        if(i<n && s[i]!=pat[j])
        {
            j?j=lps[j-1]:i++;
        }
    }
}
int main()
{
    cout<<"looks good"<<endl;
    return 0;
}