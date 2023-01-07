// #include<iostream>
// using namespace std;
// class box {
//
//           private:
//                 int length;
//               public:
//                 box():length(0)
//                 {
//
//                 }
//
//                 friend int printlength(box);
//
// };
// int printlength (box b)
// {
//     b.length += 15;
//     return b.length;
// }
// int main ()
// {
//       box b;
//       cout << "Length of box " << printlength(b) ;
// }


#include<iostream>
using namespace std;
class rectangle{
        int l,b;
      public:
        rectangle()
        {
          l = 10;
          b = 20;

        }
        friend class square;

};
class square
{
          int s;
        public:
          square ()
          {
            s = 5;
          }
          void display (rectangle rect)
          {
            cout << "\t Lenght : " << rect.l << endl;
            cout << "\t Breadth :  " << rect.b << endl;
          }

};
int main()
{
        rectangle r;
        square s;
        s.display(r);
}
