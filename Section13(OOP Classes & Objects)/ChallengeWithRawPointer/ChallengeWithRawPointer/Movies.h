#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>
#include <string>

class Movies
{
private:
    std::vector <Movie> *moviesp;
public:
//    Movies();
    Movies(std::vector <Movie> m);
    Movies(std::vector <Movie> &&mp) noexcept;
    ~Movies();
    bool addMovie(std::string n,std::string r,int w);
    bool incrementWatched(std::string n);
    void displayMovies() const ;

};

#endif // _MOVIES_H_
