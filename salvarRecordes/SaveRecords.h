#ifndef SAVERECORDS_H
#define SAVERECORDS_H
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
 /// Iremos precisar da vari�vel score que est� em protected na classe


using namespace std;


class SaveRecords
{
    private:

    protected:
        int score;

    public:
        SaveRecords();
       void HighestScore(int score); ///Save records will compare the score made by the player and the records that are on the file

       void showRecords(); ///  This one will read the file with the records and show it when requested by user on menu

};

#endif // SAVERECORDS_H
