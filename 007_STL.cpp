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

// // 3) deque

// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//   deque<int> a;
//   a.push_back(1);
//   a.push_back(2);
//   a.push_front(3);
//   a.push_front(4);

//   for(int i:a)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   a.pop_back();
//   a.pop_front();

//   for(int i:a)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;

//   a.erase(a.begin(),a.begin()+1); // Remove first element
//   for(int i:a)
//   {
//     cout<<i<<" ";
//   }
// }

// // 4) list -> It is a doubly linked list
// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int> l;
//     l.push_back(1);
//     l.push_front(2);

//     list<int> n(5,100);

//     for(int i:n)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;


//     for(int i:l)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     l.erase(l.begin()); // Remove first value
//     cout<<"After erase"<<endl;
//     for(int i:l)
//     {
//         cout<<i<<" ";
//     }
//     cout<<"Size of list: "<<l.size()<<endl;
// }

// // 5) stack -> lifo
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<string> a;
//     a.push("Hello");
//     a.push("World");
//     cout<<"Size of stack: "<<a.size()<<endl;
//     cout<<"Top element: "<<a.top() <<endl;
//     a.pop();
//     cout<<"Top element: "<<a.top() <<endl;

//     cout<<"Size of stack: "<<a.size()<<endl;
//     cout<<"Is empty: "<<a.empty()<<endl;
// }

// // 6) queue -> fifo
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<string> a;
//     a.push("Hello");
//     a.push("World");
//     cout<<"Size of queue: "<<a.size()<<endl;
//     cout<<"Front element: "<<a.front() <<endl;
//     cout<<"Back element: "<<a.back() <<endl;    
//     a.pop();
//     cout<<"Front element: "<<a.front() <<endl;
//     cout<<"Back element: "<<a.back() <<endl;
//     cout<<"Size of queue: "<<a.size()<<endl;
//     cout<<"Is empty: "<<a.empty()<<endl;
// }

// // 7) priority_queue -> (max-heap)first element always greatest, (min-heap)first element always smallest 
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     // max-heap
//     priority_queue<int> a;

//     // min-heap
//     // priority_queue<int, vector<int>, greater<int>> b;

//     a.push(1);
//     a.push(2);
//     a.push(3);
//     a.push(4);
//     a.push(5);
//     a.push(6);
//     a.push(7);
//     a.push(10);
//     a.push(9);
//     a.push(8);
//     cout<<"All elements inside max-heap a: "<<endl;
//     int n=a.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<<a.top()<<" ";
//         a.pop();
//     }
//     cout<<endl;
//     // cout<<"Size of priority_queue: "<<a.size()<<endl;
//     cout<<"Top element: "<<a.top() <<endl;
//     a.pop();
//     cout<<"Top element: "<<a.top() <<endl;  
//     cout<<"Size of priority_queue: "<<a.size()<<endl;
//     cout<<"Is empty: "<<a.empty()<<endl;
// }

// // 8) set -> store only unique elements
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> a;

//     a.insert(4);
//     a.insert(2);
//     a.insert(2);
//     a.insert(3);
//     a.insert(1);
//     a.insert(1);

//     cout<<"All elements inside set a: "<<endl;
//     for(auto i:a)
//     {
//         cout<<i<<endl;
//     }
//     cout<<endl;
//     a.erase(a.begin());
//     for(auto i:a)
//     {
//         cout<<i<<endl;
//     }
//     cout<<"Is present: "<<a.count(4)<<endl;
//     set<int>::iterator it=a.find(4);
//     cout<<"Iterator: "<<*it;
// }

// // 9) map -> store key value pair    --> unordered_map -> store key value pair in random order
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> a;
    a[1]="akarsh";
    a[2]="rajput";
    a[13]="layakpuri";
    a.insert(make_pair(5, "bheem"));
    cout<<"Before erase: "<<endl;
    for(auto i:a)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<"Finding 13: "<<a.count(13)<<endl;
    cout<<"After erase: "<<endl;
    a.erase(13);
    for(auto i:a)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
}