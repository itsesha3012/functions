#include<iostream>
using namespace std;
// // void printname(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //     cout<<"esha"<<endl;
// //     }


// // }
// // int main(){
// //     printname();
// //     printname();
// //     return 1;

      

// // }
// // void printname(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i=i+1){
// //         cout<< "esha rawat"<<endl;
// //     }
// // }
// // int main(){
    
// //     printname();
// // printname();
// //     // return 0;
// //     }                                          name print loop tak

// // int addnum(int num1,int num2)
// // {
//    // return (num1+num2);

// // }
// // int main(){
// //     int num1;
// //     int num2; 

// //     cin>>num1;
// //     cin>>num2;
// //       int ans=addnum(num1,num2);

// //     cout<<ans;
// //     }
    
// // /                                         / // adding two number using function

// // int printcount(int n){
// //     for(int i=0;i<n;i=i+1){
// //         cout<< i<<" ";
// //     }
// // }
// // int main(){
// //   int n;
// //   cin>>n;
// //     printcount( n);
// // }                                   print number for ex 7 output 0123456

// // int printint(int n){
// //     return n;
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i=i+1){
// //         cout << i <" ";
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i=i+1){
// //         cout << i <<" ";
// //     printint(n);
// // }

// // int max(int a,int b, int c){
// // if(a>b && a>c){
// //     cout << "largest number is"<< a;
// //               }
// //     else if(b>c && b>a) {
// //         cout <<"largest"<< b;
// //     }
// //     else
// // {
// //         cout<<"largest"<< c;
// // }
// // }
// // int main(){
// //     int a;
// //     int b;
// //     int c;
// //     cin>>a;
// //     cin>>b;
// //     cin>>c;
// //     int largest=  max(a, b, c);
// //    cout<<"largest number is"<< largest << endl;
// // }                                                            maximum number


 
// //  int evensum(int n){
// //     return(n*(n+1));
// //     // for(int i=0;i<n;i=i+1)
// //     // sum=sum+
// //     // cout<< 2*i <<endl;
// //  } 
// //  int main(){
// //     int n;
// //     cin>> n; 
// //     cout<<"sum of first even number is"<< evensum(n);
// //     evensum(n);
// //  }
// // /                                                          /  even sum 

// //  int factorial(int n)
// // {
// //    int fact=1;
// //    // cin>>n;
// //  for(int i=n;i>0;i=i--){
// //     fact=fact*i;
// //  }
// //  return fact;
// //  }
// // int main(){
// //    int n;
// //    cin>>n;
// // cout<< factorial(n);
// // return 0;
// // }
//                                                              // factorial

// // }

// // double areaofcircle(int r)
// // {  
// //    return(3.14*r*r);
// // }
// // int main(){
// //    float r,area;
// //    cin>>r;
// //    float Area=areaofcircle(r);
   
// //    cout<< Area<<endl;

// // }
// // area of circle
// // int table15(int n){
// //    cin>>n;
// //    for(int i=1;i<=10;i=i+1){
// //       cout<<n*i<<endl;

// //    }
// // }
//                                                              // area of circle
// // int main(){
// //    int n;
// //    cin>>n;
// //  table15(n);
// // }

//                                                                 // table15
// //  int checkoddoreven(int n){
// //    if(n%2==0){
// //       cout<<"even"<<endl;

// //    }
// //    else{
// //       cout<<"odd"<<endl;
// //    }

// //  }
// //  int main(){
// //    int n;
// //    cin>>n;

//                                                                      //    checkoddoreven(n);
// //  }

// // int number(int n)
// // {
// //    while(n!=0){
      
// //       int rem=n%10;
// //       // n=n/10;
// //       cout<<n%10<<endl;
// //       n=n/10;

// //    }

// // }
// // int main(){
// //    int n;
// //    cin>>n;
    
//    // number(n);
//                                        // reverse a number

   

float conversion(float c){
   
   float cel;
    cel=  ((c*9/5)+32);
    return cel;



}
int main(){
 float c;
   cin>>c;
   cout<< conversion(c);
}


