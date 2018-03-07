//
// Created by ch8936 on 2018/3/4.
//

#ifndef SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <string>

using namespace std;

struct Student{

    string name;
    int score;

    bool operator<(const Student &otherStudent){
        return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    friend  ostream&operator<<(ostream &os, const Student &student){

        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }

};

#endif //SELECTIONSORT_STUDENT_H
