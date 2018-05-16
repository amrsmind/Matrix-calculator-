#include <iostream>
#include "Matrix.h"
#include "MatrixCalculator.h"
#include <cstdlib>

using namespace std;
template <class T>
MatrixCalculator<T>::MatrixCalculator(){
int row;
int col;
cout<<"Welcome to (Your Name) Matrix Calculator"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"1- Perform Matrix Addition"<<endl;
cout<<"2- Perform Matrix Subtraction"<<endl;
cout<<"3- Perform Matrix Multiplication"<<endl;
cout<<"4- Matrix Transpose"<<endl;
cout<<"or 0 to close "<<endl;
int choice;
cin >>choice;
while(choice!=0){
if(choice==1){
    cout <<"enter the size of the first matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp1(row,col);
    cin >>temp1;
    cout <<"enter the size of the second matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp2(row,col);
    cin >>temp2;
    cout <<"the result is :  " <<endl;
    cout <<temp1+temp2<<endl;
}
else if(choice==2){
    cout <<"enter the size of the first matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp3(row,col);
    cin >>temp3;
    cout <<"enter the size of the second matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp4(row,col);
    cin >>temp4;
    cout <<"the result is :  " <<endl;
    cout <<temp3-temp4<<endl;
}
else if (choice==3){
    cout <<"enter the size of the first matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp5(row,col);
    cin >>temp5;
    cout <<"enter the size of the second matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp6(row,col);
    cin >>temp6;
    cout <<"the result is :  " <<endl;
    cout <<temp5*temp6<<endl;
}
else if (choice==4){
    cout <<"enter the size of the matrix then the matrix itself "<<endl;
    cin >> row>>col;
    Matrix<T> temp7(row,col);
    cin >>temp7;
    Matrix<T> temp8;
    temp8 = temp8.transpose(temp7);
    cout <<"the result is :  " <<endl;
    cout <<temp8<<endl;
}
else {cout <<"you have to enter (1)(2)(3)or(4) only"<<endl;exit(0); }
cout<<"1- Perform Matrix Addition"<<endl;
cout<<"2- Perform Matrix Subtraction"<<endl;
cout<<"3- Perform Matrix Multiplication"<<endl;
cout<<"4- Matrix Transpose"<<endl;
cout<<"or 0 to close "<<endl;
cin >>choice;
}
}




template class MatrixCalculator<int>;
template class MatrixCalculator<float>;
template class MatrixCalculator<double>;
