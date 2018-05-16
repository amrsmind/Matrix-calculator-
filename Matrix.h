#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <istream>
#include <ostream>

using namespace std;

template<class T>
class Matrix{
private:
    int row;
    int col;
    T**m;
public:
    Matrix();
    Matrix(int r,int c);
    Matrix(int r,int c,T **mat);
    Matrix operator+(const Matrix<T> &right);
    Matrix operator-(const Matrix<T> &right);
    Matrix operator*(const Matrix<T> &right);

Matrix<T> transpose(Matrix obj);

friend istream &operator>>(istream& is,const Matrix<T>& obj){

for (int i=0;i<obj.row;i++)
    for(int j=0;j<obj.col;j++)
        is>>obj.m[i][j];
return is;
}

friend ostream &operator<<(ostream& os,const Matrix<T> &obj){
for (int i=0;i<obj.row;i++){
   cout <<endl;
    for(int j=0;j<obj.col;j++)
        cout <<obj.m[i][j]<<"     ";}
return os;
}
/*
T *&operator[](const int &index){
return m[index];

}*/



};





#endif // MATRIX_H_INCLUDED
