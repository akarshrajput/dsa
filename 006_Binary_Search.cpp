// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int key)
// {
//   int start=0;
//   int end=size-1;
//   int mid=(start+end)/2;
  
//   // int mid = start+((end-start)/2); // We can use this for calculating mid for optimization.

//   while(start<=end)
//     {
//       if(key==arr[mid])
//       {
//         return mid;
//       }
//       else if(key > arr[mid])
//       {
//         start=mid+1;
//       }
//       else{
//         end=mid-1;
//       }
//       mid=(start+end)/2;
//     }
//   return -1;
// }
// int main()
// {
//   int arr1[6]={3,7,9,34,68,567};
//   int index = binarySearch(arr1,6,4);
//   cout<<"Index of 4 is "<<index;
// }