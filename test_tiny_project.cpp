#include <iostream>

using namespace std; 

class Vector{
  private:
  int mSize; 
  double *mData;

  public: 
  Vector(); //Default vector
  //Constructor
  Vector(double *mData); 
  //Operator
  Vector operator +(Vector); 
  Vector operator -(Vector);
  Vector operator ()(int i);
  void operator [](Vector);  
  //Destructor 
  ~Vector();
};

class Matrix{
  private:
  int mNumRows; 
  int mNumCols;
  double **matrix;  

  public:
  Matrix(); //Default constructor
  //Constructor
  Matrix(int mNumRows, int mNumCols);
  //Method for access the number of row and column
  void setRows(); 
  void setCols();
  //Operator
    //.....
  //Method for calculating
  double Det();
  double Inv();
  double MoPeInv(); //Moore-Penrose inverse  
}; 

class LinearSystem{
  public: 
  virtual double *Solve() = 0; 
}; 

class PosSymLinSystem : public LinearSystem{

};

int main(){

}