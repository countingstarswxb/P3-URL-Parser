#include <iostream>
#include <string>
#include <utility>



int main()
{
    std::string URL = "";
    std::cout <<"Please enter a URL: ";
    std::cin >> URL;
    
    int indexOfEndScheme = URL.find(":");

    std::string scheme = URL.substr(0, indexOfEndScheme+1);

    std::string URLAfterScheme = URL.substr(indexOfEndScheme+1, URL.size());
    std::string URLWWWStart = URL.substr(indexOfEndScheme+3, URL.size());

    int indexOfEndAuthority = URLWWWStart.find("/");
    std::string authority = URLAfterScheme.substr(0, indexOfEndAuthority+2);

    std::string path = URLAfterScheme.substr(indexOfEndAuthority+2, URLAfterScheme.size());
    
    std::cout << "scheme = " + scheme + "\n";
    std::cout << "authority = " + authority + "\n";
    std::cout << "path = " + path;

}