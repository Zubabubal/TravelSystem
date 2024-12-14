#include "Review.h"

Review::Review(const string& reviewerName, int rating, const string& comment)
    : reviewername(reviewerName), rating(rating), comment(comment) {}

void Review::print() const {
    cout << "Reviewer: " << reviewername << "\nRating: " << rating << "\nComment: " << comment << endl;
}

void Review::changeComment(const string& newComment) {
    comment = newComment;
}

void Review::delComment() {
    comment = " ";
}