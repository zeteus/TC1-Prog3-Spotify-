#pragma once

#include <list>
#include <fstream>

#include "Produtor.hpp"
#include "Podcast.hpp"

class Podcast;  // Forward declaration

class Podcaster: public Produtor {

private:
    // Relation
    std::list<Podcast*> podcasts;

public:
    // Constructor
    Podcaster(std::string name, int code);
    // Destructor
    ~Podcaster();

    // Funcions
    void addPodcast(Podcast* podcast);
    void removePodcast(Podcast* podcast);

    // Getters
    std::list<Podcast*> getPodcasts();

    // Overloading, virtual para evitar dos herdeiros chamarem
    virtual void printarNoArquivo(std::ofstream &_outfile);
};