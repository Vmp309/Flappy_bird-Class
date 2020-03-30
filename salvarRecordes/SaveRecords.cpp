#include "SaveRecords.h"
#include <fstream>

SaveRecords::SaveRecords()
{
    //ctor
}

void SaveRecords::HighestScore(int score){
 /// The highest score will be recorded
 string record;
 int highest;

 fstream records ("Recordes.txt", ios::in | ios::trunc);

 if (!records.is_open()){
    cerr << "Erro ao abrir um arquivo de Flappy Bird" << endl;
 }else{

///Ler arquivo para saber qual é o recorde atual

    while (getline(records, record)){
        cout << record << endl;
    }

    ///Depois de ler, e armazenar na string record, transformamos a string em inteiro
    highest = stoi (record);


    if (score > highest){
        records << score;
    }
    records.close();
}

}
void SaveRecords::showRecords(){
    string record;

    fstream records ("Recordes.txt", ios::in);

    if (!records.is_open()){
    cerr << "Erro ao abrir um arquivo de Flappy Bird" << endl;
 }else{


    while (getline(records, record)){
        cout <<"HIGHEST SCORE: " << record << endl;
    }


    records.close();
 }

}
