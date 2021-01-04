#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>


class Movie {
private:
    std::string name ; 
    std::string rating ; 
    int watched ;     
public:
    Movie(std::string n, std::string r, int w);
    Movie(const Movie &m);
    ~Movie();
    std::string getMovieName() const ; 
    std::string getMovieRating() const ; 
    int getMovieWatched() const ; 
    void setMovieName(std::string n) ;
    void setMovieRating(std::string r) ;
    bool incrementMovieWatched();
    void displayMovie() const;

    
};

#endif // _MOVIE_H_
