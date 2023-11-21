#include <cstdio>
#include <string>
#include <iostream>
#include <vector> 

using namespace std;

int main()
{

    string line, title, author;
    string bookSeparator = " by "; 
    vector<string> bookTitles; 
    vector<string> bookAuthors; 
    vector<string> sortedBookTitles; 
    vector<string> sortedBookAuthors; 
    


    freopen("input.txt", "r", stdin);
    while (getline(cin, line))
    {

        size_t byPosition = line.find(bookSeparator); 
        

        title = line.substr(1, byPosition-1); // the initial 1 and -1 at the end is for removing "<quotes>"
        author = line.substr(byPosition + bookSeparator.length()); 

        // cout << "title " << title << " author " << author << endl; 
        bookTitles.push_back(title); 
        bookAuthors.push_back(author); 

        if (line == "END") {
            break; 
        }
    }

    

    while (getline(cin, line)) {

        if (line != "SHELVE") {
            
        }

   
        if (line == "END") {
            break; 
        }
    }

    fclose(stdin);
}