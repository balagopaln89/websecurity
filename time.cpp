/* Topcoder 2. SRM 144 DIV 2
   Program to convert time in seconds to H:M:S format
   Input: sec
   Output: H:M:S format
   Date: 24/11/2012
*/

#include<sstream>
#include<iostream>
#include<string>

using namespace std;
using std::string;

class Time
{
  public: string whatTime(int seconds)
  {
   
    if(seconds>24*60*60)
    {
      return "Invalid Time in seconds";
    }
    else if(seconds==86400)
    {
      return "0:0:0";
    }
    int H = seconds/3600;
    int M = (seconds - H*3600)/60;
    int S = seconds - H*3600 - M*60;
    
    string sth,stm,sts;
    stringstream outh,outm,outs;
    outh<<H;
    outm<<M;
    outs<<S;

    sth=outh.str();
    stm=outm.str();
    sts=outs.str();
    string result=sth+":"+stm+":"+sts;   
    return result;
  }
};


int main()
{
  Time t;
  int seconds;
    
  cout<<"Enter time in seconds: ";
  cin>>seconds;
  cout<<t.whatTime(seconds)<<"\n";  
}
