// Online C++ compiler to run C++ program online
#include <iostream>
class Complex
{
  int real, image;
  public:
  //default consturor
  Complex(){}
  
  //parameterised consturor
  Complex(int real,int image):real(real),image(image) {}
  
  // fucntion
  void display()
  {
      std::cout<<real<<"+ i"<<image;
  }
  
  //operator overloading
  Complex operator +(Complex &obj)
  {
      Complex ans;
      ans.real=real+obj.real;
      ans.image=image +obj.image;
      return ans;
      
  }
};

int main() {
    Complex obj1(3,4);
    Complex obj2(5,6);
    Complex obj3=obj1+obj2;
    obj3.display();

    return 0;
}
