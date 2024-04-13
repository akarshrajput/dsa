// #include <iostream>
// using namespace std;

// // Print Square of Stars
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<"*"<<" ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print Square of Numbers
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <= n) {
//       cout << j << " ";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print Square of Numbers in Decreasing Order
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = n;
//     while (j >= 1) {
//       cout << j << " ";
//       j--;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print Counting of numbers in the square of size n
// int main() {
//   int n;
//   cin >> n;
//   int count=1;
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <=n) {
//       cout <<count<< " ";
//       count++;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print the number of row(i) in upper left Triangle
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <=i) {
//       cout << i << " ";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print Upper Left Triangle of Numbers(starting from 1)
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <=i) {
//       cout << j << " ";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print Upper Left Triangle of Numbers(starting from n)
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = n-i+1;
//     while (j <=n) {
//       cout << j << " ";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // Print the Lower Left Triangle of Numbers
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = i;
//     while (j <=n) {
//       cout << j << " ";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // 1 
// // 2 3 
// // 3 4 5 
// // 4 5 6 7 
// // 5 6 7 8 9 
// // Code:
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     int value=i;
//     while(j<=i){
//       cout<<value<<" ";
//       value++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // 1 
// // 2 1 
// // 3 2 1 
// // 4 3 2 1 
// // 5 4 3 2 1 
// // Code:
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     int value=i;
//     while(j<=i){
//       cout<<value<<" ";
//       value--;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // A A A A A 
// // B B B B B 
// // C C C C C 
// // D D D D D 
// // E E E E E 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       char ch='A'+i-1;
//       cout<<ch<<" ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // A B C D E 
// // A B C D E 
// // A B C D E 
// // A B C D E 
// // A B C D E 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       char ch='A'+j-1;
//       cout<<ch<<" ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // A B C D E 
// // B C D E F 
// // C D E F G 
// // D E F G H 
// // E F G H I 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     char ch='A'+i-1;
//     while(j<=n){
//       cout<<ch<<" ";
//       ch++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// // E 
// // D E 
// // C D E 
// // B C D E 
// // A B C D E 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     char ch='A'+n-i;
//     while(j<=i){
//       cout<<ch<<" ";
//       ch++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print right angle triangle of star:
// //         * 
// //       * * 
// //     * * * 
// //   * * * * 
// // * * * * * 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int space=n-i;
//     while(space){
//       cout<<" "<<" ";
//       space--;
//     }
//     int j=1;
//     while(j<=i){
//       cout<<"*"<<" ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }
// ******************************************************************
// // To print:
// //         1 
// //       1 2 1 
// //     1 2 3 2 1 
// //   1 2 3 4 3 2 1 
// // 1 2 3 4 5 4 3 2 1 
// // Code:
// int main()
// {
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int space=n-i;
//     while(space){
//       cout<<" "<<" ";
//       space--;
//     }
//     int j=1;
//     while(j<=i){
//       cout<<j<<" ";
//       j++;
//     }
//     int k=i-1;
//     while(k) {
//       cout<<k<<" ";
//       k--;
//     }
//     cout<<endl;
//     i++;
//   }
// }