//find leap years between a given start year and end year
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// user inputs a date anda certan number of years and the leap years in that interval
int main()
{
    vector<int> leapyears;
    string curdate;
    int day, month, year, endyear;

    //ask user for date
    cout<<"enter todays date mm/dd/yyyy"<<endl;
    //user endters date
    cin>>curdate;

    //substring to int
    day=stoi(curdate.substr(0,2));
    month=stoi(curdate.substr(3,5));
    year=stoi(curdate.substr(6));

    //ask user for interval
    cout<<"What is the endyear:";
    cin>>endyear;

    //for loop that finds all the leap years in the inverval
    for(year;year<endyear;year++)
    {
        // leep yeats can be exactly divided by 4
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            leapyears.push_back(year);
        } 
    
    }
   for (auto i = leapyears.begin(); i != leapyears.end(); ++i)
        cout << *i << " ";
    return 0;
}
