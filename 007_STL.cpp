// // 1) array
// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//   array<int,4> a={1,2,3,4};
//   int size = a.size();
//   for(int i=0;i<=size;i++)
//     {
//       cout<<a[i]<<" ";
//     }
//   cout<<endl;
//   cout<<"Element at second index: "<<a.at(2)<<endl;
//   cout<<"Empty or not: "<<a.empty()<<endl;
//   cout<<"First value: "<<a.front()<<endl;
//   cout<<"Last value: "<<a.back()<<endl;
// }

// // 2) vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   vector<int> a;
//   int size = 5;
//   for(int i=0;i<size;i++)
//     {
//       int input;
//       cin>>input;
//       a.push_back(input);
//     }
//   vector<int> copy(a); // Copy all elements of one vector to another vector.
//   for(int i:a)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   for(int i:copy)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   cout<<"Vector capacity: "<<a.capacity()<<endl;
//   cout<<"Vector size: "<<a.size()<<endl;
//   a.pop_back(); // Pop last element
//   cout<<"First element: "<<a.front()<<endl;
//   cout<<"Last element: "<<a.back()<<endl;
// }

// 3) deque

#include<iostream>
#include<deque>
using namespace std;
int main()
{
  cout<<"Hello";
}