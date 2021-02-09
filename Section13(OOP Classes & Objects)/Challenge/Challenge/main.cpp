#include <iostream>
#include "Movies.h"



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
    
    Movies my_movies;
    
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