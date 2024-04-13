// // 1) Swap alternate elements

// #include<iostream>
// using namespace std;

// void swapAlternate(int arr[],int size)
// {
//   int s=0;
//   while(s<size)
//     {
//       if(s+1<size)
//       {
//         swap(arr[s],arr[s+1]);
//       }
//       s=s+2;
//     }
// }

// void printArr(int arr[], int size)
// {
//   for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//   int size=6;
//   int arr[6]={2,1,7,3,2,4};
//   swapAlternate(arr,size);
//   printArr(arr,size);
// }

// // 2) Find unique element in array

// #include<iostream>
// using namespace std;
// void printArr(int arr[], int size)
// {
//   for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
// }
// int findUnique(int arr[], int size)
// {
//   int ans=0;
//   for(int i=0;i<size;i++)
//     {
//       ans=ans^arr[i];
//     }
//   return ans;
// }
// int main()
// {
//   int size = 7;
//   int arr[7]={1,3,7,3,7,4,1};
//   int unique = findUnique(arr,size);
//   cout<<unique;
// }

// // 3) Find the intersection of two arrays (given array in ascending order)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   int n=7;
//   int arr1[7]={1,3,4,6,7,8,9};
//   int m=3;
//   int arr2[3]={1,6,9};
//   vector<int> ans;
//   int i=0,j=0;
//   while(i<n && j<m)
//     {
//       if(arr1[i]==arr2[j])
//       {
//         ans.push_back(arr1[i]);
//         i++;
//         j++;
//       }
//       else if(arr1[i]<arr2[j])
//       {
//         i++;
//       }
//       else{
//         j++;
//       }
//     }
//   for(int i=0;i<ans.size();i++)
//     {
//       cout<<ans[i]<<" ";
//     }
// }

// // 4) Two sum

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   int s=5;
//   int n=6;
//   int arr[6]={1,3,0,5,2,3};
//   vector<int> ans;
//   for(int i=0;i<n;i++)
//     {
//       for(int j=i+1;j<n;j++)
//         {
//           if(arr[i]+arr[j]==s)
//           {
//             cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
//           }
//         }
//     }
//   for(int i=0;i<ans.size();i++)
//     {
//       cout<<ans[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// void Pair(int arr[], int target)
// {
  
// }
// int main()
// {
//   int arr[6]={4,3,5,2,0,1};
//   int target=5;
//   Pair(arr,target);
// }