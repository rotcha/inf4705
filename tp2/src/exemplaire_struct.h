#ifndef EXEMPLAIRE_STRUCT_H_
#define EXEMPLAIRE_STRUCT_H_

#include <vector>
#include <ctime>

struct exemplaire {
    // Liste des items
    std::vector<unsigned> data;
    // Liste des boites
    int *space;
    // Solution courante
    std::vector<int> *result;
    // Nombre d'element
    int nb_element;
    // Nombre de boite
    int nb_box;
    // Capacite de chaque boite
    int capacity;
    // Le temps pris pour executer l'algo
    clock_t time;
};

// Charge un exemplaire.
struct exemplaire * make_exemplaire(char * filename);

// Libere la memoire d'un exemplaire.
void free_exemplaire(struct exemplaire * e);

// Affiche la solution trouve pour un exemplaire.
void print_solution(struct exemplaire * e);

// Optenir la quantite total d'espace occuper
int get_result_volume(struct exemplaire * e);

#endif /* EXEMPLAIRE_STRUCT_H_ */
