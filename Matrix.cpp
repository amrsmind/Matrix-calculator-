#include <iostream>
#include <cstdlib>
#include <istream>
#include <ostream>
#include "Matrix.h"

using namespace std;

    template<class T>
    Matrix<T>::Matrix(){
    row = 0;
    col =0;
    m = new T*[row];
    for(int i=0;i<row;i++){
        m[i] = new T[col];
    }
    }

    template<class T>
    Matrix<T>::Matrix(int r,int c){
    row = r;
    col = c;
    m = new T*[row];
    for(int i=0;i<row;i++){
        m[i] = new T[col];
    }
    }

    template<class T>
    Matrix<T>::Matrix(int r,int c,T **mat){
    row = r;
    col = c;
    m = new T*[row];
    for(int i=0;i<row;i++){
        m[i] = new T[col];
    }
    m = mat;
    }

    template<class T>
    Matrix<T> Matrix<T>::operator+(const Matrix<T> &right){
    if(row == right.row && col == right.col){
    Matrix temp(row,col);
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
       temp.m[i][j] = m[i][j] + right.m[i][j];}
       return temp;
    }
    else {
        cout <<"the 2 matrices have no the same size "<<endl;
        exit(0);}}

    template<class T>
    Matrix<T> Matrix<T>::operator-(const Matrix<T> &right){
    if(row == right.row && col == right.col){
    Matrix temp(row,col);
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
       temp.m[i][j] = m[i][j] - right.m[i][j];}
       return temp;
    }
    else {
        cout <<"the 2 matrices have no the same size "<<endl;
            exit(0);}}

    template<class T>
    Matrix<T> Matrix<T>::operator*(const Matrix<T> &right){
    if(col == right.row){
        Matrix temp(row,right.col);
        for(int i=0;i<row;i++)
                    for(int j=0;j<right.col;j++)
                         temp.m[i][j] = 0;
        for(int i=0;i<row;i++)
            for(int j=0;j<right.col;j++)
                for(int k=0;k<col;k++)
                        temp.m[i][j] = temp.m[i][j] + (m[i][k] * right.m[k][j]);
                return temp;
     }
    /*else if(row == right.col){
        Matrix temp(right.row,col);
        for(int i=0;i<right.row;i++)
                    for(int j=0;j<col;j++)
                         temp.m[i][j] = 0;
        for(int i=0;i<right.row;i++)
            for(int j=0;j<col;j++)
                for(int k=0;k<row;k++)
                        temp.m[i][j] = temp.m[i][j] + (m[i][k] * right.m[k][j]);
                return temp;
     }*/
     else {cout <<"you can't multiply these 2 matrices"<<endl;
          exit(0);
     }
}

template<class T>
Matrix<T> Matrix<T>::transpose(Matrix<T> obj){
Matrix<T> temp(obj.col,obj.row);
for(int i=0;i<obj.row;i++)
  for(int j=0;j<obj.col;j++)
     temp.m[j][i] = obj.m[i][j];
return temp;
//return temp;
}

template<class T>
istream &operator>>(istream& is,const Matrix<T>& obj){

for (int i=0;i<obj.row;i++)
    for(int j=0;j<obj.col;j++)
        is>>obj.m[i][j];
return is;

}

template<class T>
ostream &operator<<(ostream& os,const Matrix<T> &obj){
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
template class Matrix<int>;
template class Matrix<float>;
template class Matrix<double>;



