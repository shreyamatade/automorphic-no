#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num; long long int flag=0;
    cin>>num;

    long long int sq=num*num;

    int nd=floor(log10(num))+1; //no of digits in integer

    for(int i=0;i<nd;i++)
    {
        if(num%10!=sq%10)
        {
            flag=1;
            break;
        }
        num=num/10;
        sq=sq/10;
    }
    if(flag==1)
        cout<<"Not automorphic"<<endl;
    else
        cout<<"Automorphic"<<endl;
}
