#include "Movies.h"
#include "Movie.h"
#include <iostream>


Movies::Movies() {
}

Movies::~Movies() {
}



void Movies::displayMovies() const {
    if (movieVec.size()==0)
        std::cout << "Sorry, No Movies to display!" << std::endl ; 
    else {
            std::cout << "\n===================================" << std::endl;
            for(const auto &movie:movieVec) {
                movie.displayMovie();
            std::cout << "\n===================================" << std::endl;
            }
    }

}
bool Movies::addMovie(std::string mn, std::string mr, int mw) {
    for(auto movie:movieVec) {
        if (movie.getMovieName()==mn)
            return false;
    }
    Movie newMovie=Movie(mn,mr,mw);
    movieVec.push_back(newMovie);
    return true ;
}

bool Movies::incrementWatched(std::string mn) {
    for(auto &movie:movieVec) {
        if (movie.getMovieName()==mn) {
            movie.incrementMovieWatched();
            return true;
        }
    }
    return false;
}
    
