/**

Description:
Filename: main.cpp
Developer: Lorenzo Cooper
Email:cooperl145799@.vvc.edu
date:10-23-2018
Desciption Input : Checks the word of a sentence inputed from user to check letters A - Z
*/
#include<iostream>
#include<string>

#include<cctype>

    using namespace std;
    int char_count(string input, char c)
    {
        int count = 0;
        for(int l = 0; l < input.size(); l++) // @param adding one to l
        {
            char n = tolower(input[l]);
            if (n == c)
            {
            count++;
            }
        } 
        return count; // @param return the count
    } 
    
    string get_string(string prompt) // @param checks input and prompt of string input
    {
        string input;
        cout << prompt;
        getline(cin,input);

        return input;
    }        

    int main()
    {
        string input = get_string("Please enter in a word or a sentence: "); // @ param checks a word inputed from the user
        cout << "Please enter any letter that you want: "; // @param checks letters inputed from user
        char letter;  
        cin >> letter;  
        int count = char_count(input,letter);
        cout << "The letter " << letter << " appeared " << count << " times. " << endl; // @param letter appeared amount of times
        cout << " Thank You !!! ";

        return 0;
    }



