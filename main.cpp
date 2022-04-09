#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdlib>

using namespace std;

bool isNumber(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i]>'9' || text[i]<'0')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    float a,b,fenceLength;
    string running,fenceLengthString;

    do
    {
        cout << "Type:RUN to run the program" << endl;
        cin>>running;
    }
    while(running != "RUN");

    do
    {
        cout<< "Type length of fence (it must be integer number from 4)"<<endl;
        cin>>fenceLengthString;
        fenceLength = atof(fenceLengthString.c_str());
    }
    while(fenceLength<4 || (fenceLength - round(fenceLength)!=0) || !isNumber(fenceLengthString));

//for(int i=4;;i++){ - testing
    //fenceLength=i;
    a=floor(fenceLength/4);
    b=(fenceLength-2*a);

    if(2*a+b!=fenceLength || round(b)!=b)
    {
        a=ceil(fenceLength/4);
        b=(fenceLength-2*a);
    }

    // if(2*a+b!=fenceLength || round(b)!=b){
    //   cout<<"error on fence "<<i<<endl;
    //    break;
    //  }

    cout<< "Your fence sides will have length:"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;
    cout<< "And filed will have "<<b*a<<" square meters."<<endl;
//}
    return 0;
}
