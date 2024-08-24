//  main.cpp
//  CSDP 250 Prg 2
//  Amir Gawish

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    //1. declare string  and stack objects and initalise str
    string str;
    stack<char> myStack;
    string temp;
    char ch;
    
    cout << "Enter a sentence\n";
    getline(cin,str);
    
    //Step 2. Assign stack with the content from str
    for(string::iterator it =str.begin();it!=str.end();++it)
    {
        ch = *it;
        myStack.push(ch);
        cout << *it << " ";
    }
    cout<<"\n";
     //step 3 Compare the content "str" and "myStack" bit by bit
    for(string::iterator it=str.begin();it!=str.end();++it)
    {
        ch =*it;
        temp.push_back(myStack.top());
        myStack.pop();
    }
    
    if (str==temp)
    {
        cout <<"This string is a palindrome\n";
    }
    else
    {
        cout <<"This string is not a palindrome\n";
        
    }
    
    //step 4 display the result
    cout<<temp;
    cout<< endl << endl;
    return 0;
}
