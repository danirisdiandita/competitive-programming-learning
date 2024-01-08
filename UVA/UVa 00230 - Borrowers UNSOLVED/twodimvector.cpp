#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>


int main()
{
    std::string line, title, author;
    std::map<std::string, std::vector<std::string>> author2Books;
    std::string bookSeparator = " by ";
    std::vector<std::string> tempBooks; 

    freopen("UVA/UVa 00230 - Borrowers UNSOLVED/input.txt", "r", stdin);

    while (getline(std::cin, line))
    {
        if (line == "END")
        {
            break;
        }
        size_t sepIdx = line.find(bookSeparator);
        title = line.substr(1, sepIdx - 2);
        author = line.substr(sepIdx + bookSeparator.length());
        // std::cout << " title " << title << " author " << author << std::endl;

        auto it = author2Books.find(author);

        if (it != author2Books.end())
        {
            // key found
            author2Books[author].push_back(title);
        }
        else
        {
            author2Books[author] = {title};
        }

    }

    for (const auto& pair : author2Books) {
        // std::cout << pair.first << std::endl; 
        tempBooks = author2Books[pair.first]; 

        for (int i = 0; i < tempBooks.size(); i++) {
            std::cout << "Author: " << pair.first << " title: " << tempBooks[i] << std::endl; 
        }
    }




    // print out some

    return 0;
}