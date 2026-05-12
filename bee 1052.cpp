
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,string>mp;
    mp[1]="January";
    mp[2]="February";
    mp[3]="March";
    mp[4]="April";
    mp[5]="May";
    mp[6]="June";
    mp[7]="July";
    mp[8]="August";
    mp[9]="September";
    mp[10]="October";
    mp[11]="November";
    mp[12]="December";

    cout<<mp[n]<<endl;
    return 0;
}
