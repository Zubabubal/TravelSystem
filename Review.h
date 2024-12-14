#ifndef REVIEW_H
#define REVIEW_H

#include <string>
#include <iostream>

using namespace std;

class Review {
private:
    string reviewername;
    int rating;
    string comment;

public:
    Review(const string& reviewerName, int rating, const string& comment);
    void print() const;
    void changeComment(const string& newComment);
    void delComment();
};

#endif 