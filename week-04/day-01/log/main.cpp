#include <iostream>
#include <fstream>
#include <string>
#include <vector>


// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> uniqueIPAdresses(std::string fileName);

float getPostRatio(std::string fileName);

int main() {

    for (int i = 0; i < uniqueIPAdresses("log.txt").size(); i++){

        std::cout << uniqueIPAdresses("log.txt")[i];
    }

    std::cout << getPostRatio("log.txt");

    return 0;
}

std::vector<std::string> uniqueIPAdresses(std::string fileName) {

    std::string weekDay;
    std::string month;
    std::string day;
    std::string hour;
    int year;
    std::string ip;
    std::string postOrGet;
    std::string slash;

    std::vector<std::string> ipAddress;
    std::vector<std::string> uniqueIpAddress;

    std::ifstream logFile("log.txt");
    while (logFile >> weekDay >> month >> day >> hour >> year >> ip >> postOrGet >> slash) {
        std::cout << ip << std::endl;
        ipAddress.push_back(ip);
    }
    for (int i = 0; i < ipAddress.size(); i++) {
        if ((std::find(uniqueIpAddress.begin(), uniqueIpAddress.end(), ipAddress[i])) != uniqueIpAddress.end()) {
        } else {
        }
        uniqueIpAddress.push_back(ipAddress[i]);
    }
    return uniqueIpAddress;
}

float getPostRatio(std::string fileName) {

    std::string weekDay;
    std::string month;
    std::string day;
    std::string hour;
    int year;
    std::string ip;
    std::string postOrGet;
    std::string slash;

    float gets;
    float posts;

    std::ifstream logFile("log.txt");
    while (logFile >> weekDay >> month >> day >> hour >> year >> ip >> postOrGet >> slash){
        if (postOrGet == "GET"){
            gets++;
        } else if (postOrGet == "POST"){
            posts++;
        }
    }   return gets / posts;
}