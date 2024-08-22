
// #include<iostream>
// using namespace std;
// void  binary_search(int a[],int n,int key)
// {
//    int l=0,h=n;
   
//    while(l<=h)
//    {
//        int mid =(l+h)/2;

//       if(a[mid]==key)
//       {
//         cout<<"it's found & equals to"<<" "<<a[mid]<<endl;
//          return ;
//       }
//       else if(key>a[mid])
//           l=mid+1;
//       else
//           h=mid-1;
//    }
//    cout<<"it's not found"<<endl;
// }
// int main()
// {
//   int a[] ={10,17,21,23,25,26,234};
//   cout<<"enter Key element";
//   int key;
//   cin>>key;

//   binary_search(a,6,key);
   
//    return 0;
// }






// #include<iostream>
// using namespace std;
// main()
// {
//   int a[3][2];
  
//   for(auto &x:a)
//     {
//       for(auto &y:x)
//       cin>>y;
//     }

//     for(int (&x)[2]:a)
//     {
//       for(int y:x)
//       cout<<y<<" ";

//       cout<<endl;
//     }
 
// }


