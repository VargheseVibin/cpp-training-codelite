#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"


class Movies {
private:
    std::vector <Movie> movieVec ;
public:
    Movies();
    ~Movies();
    void displayMovies() const;
    bool addMovie(std::string mn, std::string mr, int mw);
    bool incrementWatched(std::string mn);
};

#endif // _MOVIES_H_
