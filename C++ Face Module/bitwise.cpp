#include<iostream>
int main(){
  int a = 5;
  int b = 4, c =-8;
  int result;
  result = a & b;
  std::cout<<"a & b: "<<result<<'\n';
  result = a ^ b;
  std::cout<<"a ^ b: "<<result<<'\n';
  result = ~c;
  std::cout<<"~c: "<<result<<'\n';
  result = ~b;
  std::cout<<"~b: "<<result<<'\n';
  result = a >> 2;
  std::cout<<"a >> 2: "<<result<<'\n';
}
