#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
private:
    std::string name ; 
    std::string rating ; 
    int watched ;
public:
    Movie(std::string n, std::string r, int w);
    ~Movie();
    std::string getMovieName() const { return name ; };
    std::string getMovieRating() const {return rating ; };
    int getMovieWatched() const { return watched ;}
    void displayMovie() const ; 
    void incrementMovieWatched() ; 
};

#endif // _MOVIE_H_
