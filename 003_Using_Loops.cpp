
// Decimal to Binary conversion
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Decimal is : ";
//   cin>>n;
//   int ans=0;
//   int i=0;
//   while(n!=0)
//     {
//       int bit=n&1;
//       ans=(bit*pow(10,i))+ans;
//       n=n/2;
//       i++;
//     }
//   cout<<"Binary is : "<<ans<<endl;
// }

// Binary to Decimal conversion
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter binary : ";
//   cin>>n;
//   int i=0;
//   int ans=0;
//   int ten=10;
//   while(n!=0){
//     int unit = n%ten;
//     ans=(pow(2,i)*unit)+ans;
//     n=n/10;
//     i++;
//   }
//   cout<<"Decimal is : "<<ans<<endl;
// }

// Reverse Integer
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the number : ";
//   cin>>n;
//   int length=0;
//   int temp=n;
//   while(temp!=0)
//     {
//       temp=temp/10;
//       length++;
//     }

//   int mul=length-1;
//   int digit=0;
//   int ans=0;
//   while(n!=0)
//     {
//       digit=n%10;
//       ans+=digit*pow(10,mul);
//       n=n/10;
//       mul--;
//     }
//   cout<<"Reverse is : "<<ans;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
  
// }