#include<iostream>
#include<fstream>
#include<string>
#include<map>

using namespace std;

int main()
{
    ifstream fin("list.txt");

    string input;
    int kod,listak_szama=0;

    map<string,double> termekek;
    
     while(fin>>input)
    {
        if (isdigit(input[0]))
        {
            listak_szama++;
        }
        else
        {
            termekek[input]++;
        }
        
    }
    fin.close();
   
    for(pair<string,double>a:termekek)
    {
        cout<<a.first<<" "<<a.second/listak_szama<<endl;
    }

    return 0;
}