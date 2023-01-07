// #include<iostream>
// using namespace std;
// class sample {
//             static int count;
//           public:
//             sample()
//             {
//
//               count ++;
//             }
//             int get_count()
//             {
//               return count;
//             }
//
// };
//             int sample::count;
//
// int main(){
//
//       sample s1,s2,s3;
//       cout << "Count is " << s1.get_count() << endl;
//       cout << "Count is " << s2.get_count() << endl;
//       cout << "Count is " << s3.get_count() << endl;
//     }

#include<iostream>
using namespace std;
class demo {
        private:
          static int x;
          static int y;
        public:
          static void print ()     //here we are declare a static member function
                {
                  cout << "Value of x " << x << endl;
                  cout << "Value of y " << y << endl;

                }
};
              int demo :: x = 10;
              int demo :: y = 10;
int main()
{
        cout <<"print ";
        demo::print();

}
