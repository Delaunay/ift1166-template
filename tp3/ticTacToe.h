/*
 *  IFT166 - TP3 - TicTacToe
 *
 *  11 / 2015
 *
 *  Pierre Delaunay
 *
 *  Ce fichier ne doit PAS être modifié par l'étudiant.
 *
 *  L'étudiant doit fournir un fichier tictacToe.cpp implémentant
 *  les fonctions déclarées ci-dessous
 */
#ifndef IFT1166_TITACTOE_H_
#define IFT1166_TITACTOE_H_

#define E ' '   // Case Vide
#define X 'X'   // Joueur 1
#define O 'O'   // Joueur 2

class TicTacToe
{
public:
    enum etat{
        CONTINUER,
        VICTOIRE,
        NULLE
    };

public:

    // Fonction à implémenter
    TicTacToe();

    bool makeMoveX(int x, int y);
    bool makeMoveO(int x, int y);

    etat etatJeux();

    bool mouvValid(int x, int y) const;
    void recommence();

    void affichTab() const;


    void getXOMouv(char c);
    void jouer();

private:

    int  _turn = 0;
    char _tab[3][3];
};

#endif
