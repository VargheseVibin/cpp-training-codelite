#include "Movies.h"
#include "Movie.h"
#include <vector>
#include <iostream>


Movies::Movies(std::vector <Movie> m) {
    std::vector <Movie> *moviesp=new std::vector <Movie> ;
    for (auto movie:m) 
        (*moviesp).push_back(movie);
    std::cout << "Movies Ptr at:" << moviesp << std::endl ; 
}

Movies::~Movies()   {
    delete moviesp ; 
    moviesp=nullptr;
}

Movies::Movies(std::vector <Movie> &&mp) noexcept 
    :Movies::Movies(mp) {
    delete &mp ; 
}


bool Movies::addMovie(std::string n,std::string r,int w) {
    for(auto movie:*moviesp) {
        if(movie.getMovieName()==n) 
            return false;
    }
    Movie newMovie=Movie(n,r,w);
    (*moviesp).push_back(newMovie);
    return true;
}
bool Movies::incrementWatched(std::string n) {
    for(auto movie:*moviesp) {
        if(movie.getMovieName()==n) {
            movie.incrementMovieWatched();
            return true;
        }
    }
    return false;
}

void Movies::displayMovies() const {
    if (moviesp==nullptr) {
        std::cout << "Sorry, No Movies to show!" << std::endl ; 
        return;
    }
    else if((*moviesp).size()==0) {
        std::cout << "Sorry, No Movies to show!" << std::endl ; 
        return;
    }
    else {
        for(auto movie:*moviesp) 
        movie.displayMovie();
    }
    return;

}
