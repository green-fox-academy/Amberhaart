#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


std::string reverse(std::string x) {
    std::reverse(x.begin(), x.end());
    return x;
}

std::vector<std::string> putSaturn(const std::vector<std::string> &planets) {
    std::vector<std::string> temp = planets;
    temp.insert(temp.begin() + 5, 1, "Saturn");

    return temp;
}

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys) {
    std::vector<std::string> couples;

    for (int i = 0; i < boys.size(); ++i) {
        couples.insert(couples.begin(), 1, boys[i]);
    }

    int x = 1;
    for (int j = 0; j < girls.size(); ++j) {
        couples.insert(couples.begin() + x, 1, girls[j]);
        x += 2;
    }
    return couples;
}

std::vector<std::string> appendA(const std::vector<std::string> &animals) {
    std::vector<std::string> temp = animals;
    for (int i = 0; i < animals.size(); ++i) {
        temp[i] += "a";
    }
    return temp;
}

int main(int argc, char *args[]) {
    std::string example("In a dishwasher far far away");
    example.replace(example.find("dishwasher"), 10, "galaxy");

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    std::cout << example << std::endl << std::endl;


    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    url.insert(5, ":");
    url.replace(url.find("bots"), 4, "odds");
    url += "/";

    std::cout << url << std::endl << std::endl;


    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    quote.replace(quote.find("It"), 2, "It always takes longer than");

    std::cout << quote << std::endl;


    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    todoText.insert(0, "\n My todo: \n");
    todoText += " - Download games \n \t - Diablo";

    std::cout << todoText << std::endl << std::endl;


    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::cout << reverse(reversed) << std::endl << std::endl;


    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    for (const auto &planet : putSaturn(planets)) {
        std::cout << planet << " ";
    }

    std::cout << std::endl << std::endl;


    std::vector<std::string> girls = {"Eve", "Ashley", "Claire", "Kat", "Jane"};
    std::vector<std::string> boys = {"Joe", "Fred", "Tom", "Todd", "Neef", "Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // If someone has no pair, he/she should be the element of the list too
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    for (const auto &couples : makingMatches(girls, boys)) {
        std::cout << couples << " ";
    }

    std::cout << std::endl << std::endl;


    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    for (const auto &animal : appendA(animals)) {
        std::cout << animal << " ";
    }

    std::cout << std::endl << std::endl;


    return 0;
}