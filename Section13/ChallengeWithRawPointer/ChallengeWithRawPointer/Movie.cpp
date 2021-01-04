#include "Movie.h"
#include <iostream>

Movie::Movie(std::string n, std::string r, int w) 
    :name{n}, rating{r}, watched {w} {
}

Movie::~Movie()
{
}

void Movie::displayMovie() const  {
    std::cout << "[" << name << "," << rating << "," << watched << "]" ;  
}

void Movie::incrementMovieWatched()  {
    ++watched ; 
}

