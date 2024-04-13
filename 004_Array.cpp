// #include<iostream>
// using namespace std;
// void printArr(int arr[],int size)
// {
//   for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
// }
// int max(int arr[],int n)
// {
//   int max=INT8_MIN;
//   for(int i=0;i<n;i++)
//     {
//       if(max<arr[i])
//       {
//         max=arr[i];
//       }
//     }
//   return max;
// }
// int min(int arr[],int n)
// {
//   int min=INT8_MAX;
//   for(int i=0;i<n;i++)
//     {
//       if(min>arr[i])
//       {
//         min=arr[i];
//       }
//     }
//   return min;
// }
// bool LinearSearch(int arr[],int size,int key)
// {
//   for(int i=0;i<size;i++)
//     {
//       if(arr[i]==key)
//         return 1;
//     }
//   return 0;
// }
// void reverse(int arr[],int n)
// {
//   int start=0;
//   int end=n-1;
//   while(start<=end)
//     {
//       swap(arr[start],arr[end]);
//       start++;
//       end--;
//     }
// }
// int main()
// {
//   int size;
//   cout<<"Enter array size: ";
//   cin>>size;
//   int arr[100];
//   cout<<"Enter array elements: "<<endl;
//   for(int i=0;i<size;i++)
//     {
//       cin>>arr[i];
//     }

  // cout<<"Array elements: ";
  // printArr(arr,size);
  // cout<<endl<<"Max element is: "<<max(arr,size);
  // cout<<endl<<"Min element is: "<<min(arr,size);

  // int key;
  // cout<<"Enter the element for search: ";
  // cin>>key;
  // bool found = LinearSearch(arr,size,key);
  // if(found)
  // {
  //   cout<<"Element "<<key<<" found in array";
  // }else{
  //   cout<<"Element "<<key<<" not found in array";
  // }

//   cout<<"Reverse elements: ";
//   reverse(arr,size);
//   printArr(arr,size);
  
// }