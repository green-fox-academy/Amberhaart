#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function


   // quote.replace(20, 0, " always takes longer than ");


    std::string from = "It";

    int start_pos = quote.find(from);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        quote.replace(start_pos +2, from.length() -2, " always takes longer than ");

    std::cout << quote << std::endl;

    return 0;
}