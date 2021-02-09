#include "Movie.h"
#include <string>
#include <iostream>

Movie::Movie(std::string n, std::string r, int w) 
    :name{n},rating{r},watched{w} {
//        std::cout << "Movie Constructor called for " << name << endl ; 
}

Movie::Movie(const Movie &m) 
    :Movie(m.name,m.rating,m.watched)  {
//        std::cout << "Movie Copy Constructor called for " << name << endl ; 
}

Movie::~Movie()
{
}

std::string Movie::getMovieName() const {
    return name;
}

std::string Movie::getMovieRating() const {
    return rating;
}

int Movie::getMovieWatched() const {
    return watched ;
}

bool Movie::incrementMovieWatched() {
    ++watched;
    return true;
}

void Movie::displayMovie() const {
    std::cout << "[" ;
    std::cout << name << "," << rating << "," << watched ;
    std::cout << "]" ;
}

