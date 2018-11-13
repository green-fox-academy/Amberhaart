#include <iostream>

#include "BlogPost.h"

int main() {

    BlogPost loremIpsum("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    BlogPost waitButWhy("Tim Urban", "Wait but why",
                        "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    BlogPost oneEnigeer("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump",
                        "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. "
                        "When I asked to take his picture outside one of IBM’s New York City offices, he told me that he"
                        " wasn’t really into the whole organizer profile thing.",
                        "2017.03.28.");

    std::cout << loremIpsum.getTitle() << ", titled by " << loremIpsum.getAuthor() << ", posted at "
              << loremIpsum.getPublicationDate() << ": \n" << loremIpsum.getText() << std::endl << std:: endl;

    std::cout << waitButWhy.getTitle() << ", titled by " << waitButWhy.getAuthor() << ", posted at "
              << waitButWhy.getPublicationDate() << ": \n" << waitButWhy.getText() << std::endl << std:: endl;

    std::cout << oneEnigeer.getTitle() << ", titled by " << oneEnigeer.getAuthor() << ", posted at "
              << oneEnigeer.getPublicationDate() << ": \n" << oneEnigeer.getText() << std::endl << std:: endl;

    return 0;
}