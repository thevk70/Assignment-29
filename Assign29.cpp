// 1.Write a C++ program to convert Primitive type to Complex type.
//  Example -
//  int main()
// {
//  Complex c1;
//  Int x=5;
//  c1=x;
//  return 0;
// }
// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a,b;
//     public:
//     Complex(){}
//     Complex(int x)
//     {
//        a = x;
//        b = x;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
// };
// int main()
// {
//     Complex c1;
//     int x = 5;
//     c1 = x;
//     c1.display();
//     return 0;
// }

// 2. Write a C++ program to convert Complex type to Primitive type.
//  Example -
// #include <iostream>
// using namespace std;
// class Complex
// {
//   int a,b;
//   public:
//   void setData(int x,int y)
//   {
//     a = x;
//     b = y;
//   }
//   operator int()
//   {
//     cout<<"Int() called"<<endl;
//     return (a+b);
//   }
// };
//  int main()
// {
//  Complex c1;
//  c1.setData(3,4);
//  int x;
//  x=c1;
//  return 0;
// }

// 3. Create a Product class and convert Product type to Item type using constructor
// #include <iostream>
// using namespace std;
// class Product
// {
//   int a,b;
//    public:
//   void setData(int x,int y)
//   {
//     a = x;
//     b = y;
//   }
//   void display()
//   {
//     cout<<"a = "<<a<<" b = "<<b<<endl;
//   }
//   int geta() {return a;};
//   int getb() {return b;};
// };
// class Item
// {
//   int i;
//   public:
//   Item(){}
//   Item(Product obj)
//   {
//     i = obj.geta() + obj.getb();
//   }
//   void display()
//   {
//     cout<<"item i = "<<i<<endl;
//   }
// };
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  i1.display();
//  return 0;
// }

// 4. Create Product class and convert Product type to Item type using casting operator
// #include <iostream>
// using namespace std;
// class Item
// {
//   int i;
//   public:
//   Item(){}
//   Item(int x)
//   {
//     i = x;
//   }
//   void display()
//   {
//     cout<<"item i = "<<i<<endl;
//   }
// };
// class Product
// {
//   int a,b;
//    public:
//   void setData(int x,int y)
//   {
//     a = x;
//     b = y;
//   }
//   void display()
//   {
//     cout<<"a = "<<a<<" b = "<<b<<endl;
//   }
//   int geta() {return a;};
//   int getb() {return b;};
//   operator Item()
//   {
//     Item i(a+b);
//     return i;
//   }
// };

// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  i1.display();
//  return 0;
// }

// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//  Invent1 x(4,5);
//  Invent2 y;
//  float z;
//  z = x; // Invent1 to float
//  y = x; // Invent1 to Invent2
//  return 0;
// }

// #include <iostream>
// using namespace std;
// class Invent1
// {
//    public:
//    int a,b;
//    Invent1(int x,int y)
//    {
//     a = x;
//     b = y;
//    }
//    operator float()
//    {
//       cout<<"Float fun called"<<endl;
//       return (a+b);
//    }
// };
// class Invent2
// {
//   int x,y;
//   public:
//   Invent2(){}
//   Invent2(Invent1 obj)
//   {
//     x = obj.a;
//     y = obj.b;
//   }
//   void display()
//   {
//     cout<<"x = "<<x<<" y = "<<y<<endl;
//   }
// };
// int main()
// {
//   Invent1 x(4,5);
//   Invent2 y;
//   float z;
//   z = x;
//   y = x;
//   cout<<"z = "<<z<<endl;
//   y.display();
//   return 0;
// }

// 6. Create a Time class and take Duration in minutes. Now you need to convert seconds(i.e int )
// to Time class.
// Example -
// #include <iostream>
// using namespace std;
// class Time
// {
//   int sec = 0;
//   public:
//   Time(int dur)
//   {
//      while (dur != 0)
//      {
//        sec = sec + 60;
//        dur--;
//      }
//   }
//   void display()
//   {
//     cout<<"Seconds = "<<sec<<endl;
//   }
// };
// int main()
// {
//  int duration;
//  cout<<"Enter time duration in minutes";
//  cin>>duration;
//  Time t1 = duration;
//  t1.display();
//  return 0;
// }

// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// #include <iostream>
// using namespace std;
// class Time
// {
//   int hr;
//   int min;
//   public:
//   Time(int h,int m)
//   {
//     hr = h,min = m;
//   }
//   void display()
//   {
//     cout<<hr<<"hr : "<<min<<" min"<<endl;
//   }
//   int getMin()
//   {
//     return min;
//   }
//   int getHr()
//   {
//     return hr;
//   }
// };
// class Minute
// {
//   int m = 0;
//   public:
//   Minute(){}
//   Minute(Time obj)
//   {
//     m = obj.getMin() + obj.getHr()*60;
//   }
//   void display()
//   {
//     cout<<"Minutes = "<<m<<endl;
//   }
// };
// int main()
// {
//  Time t1(2,30);
//  t1.display();
//  Minute m1;
//  m1.display();
//  m1=t1; // Fetch minute from time
//  t1.display();
//  m1.display();
//  return 0;
// }

// 8. Create a Rupee class and convert it into int. And Display it.
// Example-
// #include <iostream>
// using namespace std;
// class Rupee
// {
//    int rs;
//    public:
//    Rupee(int r)
//    {
//      rs = r;
//    }
//    operator int()
//    {
//      return rs;
//    }
// };
// int main()
// {
//  Rupee r = 10;
//  int x = r;
//  cout<<x;
//  return 0;
// }

// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example-
// #include <iostream>
// using namespace std;
// class Dollar
// {
//   int d;
//   public:
//   Dollar(int x = 0)
//   {
//     d = x;
//   }
//   void display()
//   {
//     cout<<"Dollar = $"<<d<<endl;
//   }
// };
// int main()
// {
//  int x = 50;
//  Dollar d;
//  d = x;
//  d.display();
//  return 0;
// }

// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
// Example-
// #include <iostream>
// using namespace std;
// class Rupee
// {
// public:
//   float rs;
//   Rupee(int r = 0)
//   {
//     rs = r;
//   }
//   void display()
//   {
//     cout << "Rupees = " << rs << "Rs" << endl;
//   }
// };
// class Dollar
// {
//   float d;
// public:
//   Dollar(Rupee obj)
//   {
//     d = (obj.rs) * 80.7;
//   }
//   operator Rupee()
//   {
//     d = d/80.7;
//     return d;
//   }
//   void display()
//   {
//     cout << "Dollar = $" << d << endl;
//   }
// };
// int main()
// {
//   Rupee r = 23;
//   Dollar d = r; // Rupee to Dollar conversion
//   d.display();
//   r.display();
//   r = d; // Dollar to Rupee Conversion
//   d.display();
//   r.display();
//   return 0;
// }