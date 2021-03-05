#include<iostream>

void print(int min, int max);

int main(void){
  int m=10;
  int n=1500;
  print(m,n);
}

void print(int min, int max){
  double sum;
  double x;

  for(double i=min; i<=max ; i++){
    x=1/(i*i);
    sum+=x;
  }
  std::cout<< sum << "\n";
}