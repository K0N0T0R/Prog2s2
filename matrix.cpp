#include <iostream>
#include "matrix.h"
using namespace std;
#define N 10
    matrix::matrix(){
        int i,j;
        this->size=2
        for (i = 0; i < this->size; i++)
        {
            for (j = 0; j < this->size; j++)
            {
                this->data[i][j]=0;
            }
        }    
    }
    void matrix::setzize(unsigned int newsize){
       if(2< newsize> N){
        cout << "Size nicht im Wertebereich";
       }
        this->size=size;
        return;
    }
    int matrix::getsize()const{
        return this->size;
    }
    void matrix::eingabe(){
        int i,j;
        for (i = 0; i < this->size; i++)
        {
            for (j = 0; j < this->size; j++)
            {
                this->data[i][j]= cin <<;
            }
        }    
        return;
    }
    void matrix::ausgabe(){
        int i,j;
        for (i = 0; i < this->size; i++)
        {
            for (j = 0; j < this->size; j++)
            {
                cout <<this->data[i][j]+"\n";
            }
        }    
        return;
    }
    matrix matrix::add(const matrix inmatrix){
        matrix out;
        if(this->size==inmatrix.size){
            for (i = 0; i < this->size; i++)
        {
            for (j = 0; j < this->size; j++)
            {
                out.data[i][j]=this->data[i][j]+inmatrix.data[i][j];
            }
        }    
        return;
        }else cout << "size stimmt nicht überein"
        return out;
    }