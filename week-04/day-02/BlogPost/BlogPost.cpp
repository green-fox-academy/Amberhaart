#include "BlogPost.h"

BlogPost::BlogPost(std::string author, std::string title, std::string text, std::string publicationDate) {
    _author = author;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;

}

std::string BlogPost::getAuthor() {
    return _author;

}

std::string BlogPost::getTitle() {
    return _title;

}

std::string BlogPost::getText() {
    return _text;

}

std::string BlogPost::getPublicationDate() {
    return _publicationDate;

}