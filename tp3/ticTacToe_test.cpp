/*
 *  IFT166 - TP3 - TicTacToe Tester
 *
 *  11 / 2015
 *
 *  Pierre Delaunay
 *
 *  Ce fichier peut être modifié par l'étudiant pour tester la validité
 *  de son implémentation.
 */
#include <vector>
#include <string>
#include <iostream>

#include "ticTacToe.h"

#define TM  {0, 1}  // TOP MID
#define MM  {1, 1}  // MID MID
#define BM  {2, 1}  // BOT MID

#define TR  {0, 2}  // TOP RIGHT
#define MR  {1, 2}  // MID RIGHT
#define BR  {2, 2}  // BOT RIGHT

#define TL  {0, 0}  // TOP LEFT
#define ML  {1, 0}  // MID LEFT
#define BL  {2, 0}  // BOT LEFT

struct Point
{
    int x;
    int y;
};
typedef std::vector<Point> Move;

class UnitTester
{
public:

    UnitTester()
    {
        std::string path (__FILE__);
        std::cout << path << std::endl;
        _student_name = "My Name ";
    }

    void grade()
    {
        is_valid_test();
        null_test();
        victoire_test();

        std::cout << "\n\n==================================\n    " << 
						  _student_name << " : Note " << compute_grade() << " % \n" 
					  << "==================================\n";
    }
    
    void victoire_test()    
    {   
        std::cout << "\nTest si TicTacToe detecte correctement les victoires\n"
        		 	 "=======================================================\n";
        
        // example
        // recommence une partie
        _game.recommence();
        Move v = {MM, TR, BR, MR, TL};
        
        // joue la partie
        exec_play(v);
        
        // check is le jeu marche, si oui ajoute 1 pts
        assert(_game.etatJeux() == TicTacToe::VICTOIRE, "    Victoire Diagonale n'a pas ete detecte!");
    }

    void is_valid_test()    
    {   
        std::cout << "\nTest si la fonction mouvValid marche\n"
					 "====================================\n"; 
        
        _game.recommence();
        assert(_game.makeMoveX(0, 0) == true,   "    Le joueur X doit etre le premier joueur!");
        assert(_game.makeMoveO(-1, 0) == false, "    -1 n'est pas une position valide!'");
    }
    
    void null_test()    
    {   
        std::cout << "\nTest si TicTacToe detecte correctement les matchs nuls\n"
					 "=======================================================\n"; 
    }
    
    // play a game given the move to be done
    void exec_play(Move& v)
    {
        for(int i = 0; i < v.size(); ++i)
        {
            if (i % 2 == 0)
                _game.makeMoveX(v[i].x, v[i].y);
            else
                _game.makeMoveO(v[i].x, v[i].y);
        }
    }

	// if true pts are added
    void assert(bool a, std::string msg, int pts = 1){

        _total += pts;

        if (a)
            _grade += pts;
        else
            std::cout << msg << std::endl;
    }

    //  Joue une partie fictive
    UnitTester& mimic_game()
    {
        _game.recommence();

        Move v = {MM, TL, BR, MR, TR, BL, ML, TM, BM};

        for(int i = 0; i < v.size(); ++i)
        {
            _game.affichTab();

            if (i % 2 == 0){
                std::cout << "X > " << v[i].x << " " << v[i].y << "\n";
                _game.makeMoveX(v[i].x, v[i].y);
            }
            else{
                std::cout << "O > " << v[i].x << " " << v[i].y << "\n";
                _game.makeMoveO(v[i].x, v[i].y);
            }
        }

        return *this;
    }

    float compute_grade()   {   return _grade * 100.f/ _total; }

private:
    std::string _student_name;
    std::string _student_id;
    TicTacToe   _game;
    int         _grade{0};
    int         _total{0};
};


int main()
{
    UnitTester().mimic_game().grade();
}
