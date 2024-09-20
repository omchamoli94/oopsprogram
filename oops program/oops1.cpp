#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string\n";
    cin >> s;
    char ch;
    cout << "Enter the character to be removed\n";
    cin >> ch;

    string str;  // Initialize an empty string to store the result
    
    // Iterate through the input string
    for(int i = 0; i < s.length(); i++)
    {
        // If the current character is not the one to be removed, add it to the result string
        if(s[i] != ch)
        {
            str += s[i];
        }
    }

    cout << "The new string is " << str << endl;

    return 0;
}
