#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <iostream>

class BlogPost {

public:
    BlogPost();

    BlogPost(std::string author, std::string title, std::string text, std::string publicationDate);

    std::string getAuthor();

    std::string getTitle();

    std::string getText();

    std::string getPublicationDate();

private:

    std::string _author;
    std::string _title;
    std::string _text;
    std::string _publicationDate;

};


#endif //BLOGPOST_BLOGPOST_H
