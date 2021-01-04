#include <iostream>
#include "Movies.h"
#include "Movie.h"



// Function prototypes
void incrementWatched(Movies &movies, std::string name);
void addMovie(Movies &movies, std::string name, std::string rating, int watched);

void incrementWatched(Movies &movies, std::string name) {
    if (movies.incrementWatched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

void addMovie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.addMovie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    std::vector <Movie> mym {};
    Movies my_movies=Movies(mym);
//    std::cout << "my_movies:" << my_movies << std::endl ; 
    
    my_movies.displayMovies();
    
    addMovie(my_movies, "Big", "PG-13",2);                 // OK
    addMovie(my_movies,"Star Wars", "PG",5);             // OK
    addMovie(my_movies,"Cinderella", "PG",7);           // OK
     
    my_movies.displayMovies();   // Big, Star Wars, Cinderella
    
    addMovie(my_movies,"Cinderella", "PG",7);            // Already exists
    addMovie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.displayMovies();    // Big, Star Wars, Cinderella, Ice Age
    
    incrementWatched(my_movies,"Big");                    // OK
    incrementWatched(my_movies,"Ice Age");              // OK
    
    my_movies.displayMovies();    // Big and Ice Age watched count incremented by 1
    
    incrementWatched(my_movies,"XXX");         // XXX not found

	return 0;
}