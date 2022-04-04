#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void check(string s)
{
    //tim ky tu co tan suat xuat hien nhieu nhat
    int cnt[26]={0};
    for(auto i:s)
        cnt[i-'a']++;

    //so lan xuat hien cua ky tu do
    int val = *max_element(cnt,cnt+26);
    if(s.size()-val >= val-1)
        cout<< "1"<<endl;
    else
        cout<< "0"<<endl;
}

int main()
{
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        check(s);
    }
    return 0;
}
