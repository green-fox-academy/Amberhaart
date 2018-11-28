#include <iostream>
#include <string>
#include <vector>
#include <utility> //for std::pair
#include <map>

std::vector<std::string>
getChildrenWithMoreThanFourCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students) {
    std::vector<std::string> children;

    for (int i = 0; i < students.size(); ++i) {

        std::map<std::string, int> temp = students[i].second;

        if (temp["candies"] > 4) {

            children.push_back(students[i].first);
        }

    }
    return children;
}

int sumOfAgeWithLessThanFiveCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students) {
    int sum = 0;
    for (int i = 0; i < students.size(); ++i) {
        std::map<std::string, int> temp = students[i].second;

        if (temp["candies"] > 5) {
            sum += temp["age"];
        }
    }
    return sum;
}

int main(int argc, char *args[]) {
    std::vector<std::pair<std::string, std::map<std::string, int>>> students;

    std::map<std::string, int> TheodorData;
    TheodorData.insert(std::make_pair("age", 9));
    TheodorData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("Theodor", TheodorData));

    std::map<std::string, int> PaulData;
    PaulData.insert(std::make_pair("age", 10));
    PaulData.insert(std::make_pair("candies", 1));
    students.push_back(std::make_pair("Paul", PaulData));

    std::map<std::string, int> MarkData;
    MarkData.insert(std::make_pair("age", 7));
    MarkData.insert(std::make_pair("candies", 3));
    students.push_back(std::make_pair("Mark", MarkData));

    std::map<std::string, int> PeterData;
    PeterData.insert(std::make_pair("age", 12));
    PeterData.insert(std::make_pair("candies", 5));
    students.push_back(std::make_pair("Peter", PeterData));

    std::map<std::string, int> OlafData;
    OlafData.insert(std::make_pair("age", 12));
    OlafData.insert(std::make_pair("candies", 7));
    students.push_back(std::make_pair("Olaf", OlafData));

    std::map<std::string, int> GeorgeData;
    GeorgeData.insert(std::make_pair("age", 3));
    GeorgeData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("George", GeorgeData));

    // Display the following things:
    //  - Who has got more than 4 candies
    //  - Sum the age of children who have less than 5 candies

    std::cout << "Children with more than 4 candies: ";
    for (const auto &child : getChildrenWithMoreThanFourCandies(students)) {
        std::cout << child << " ";
    }

    std::cout << "\n";
    std::cout << "Sum of those who have less than 5 candies: " << sumOfAgeWithLessThanFiveCandies(students)
              << std::endl;

    return 0;
}