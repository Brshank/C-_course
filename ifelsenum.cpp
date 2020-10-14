// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//       string s[t]={"one","two","three","four","five","six","seven","eight","nine"};
//       cin>>t;
//       if(t<=9)
//       { 
//           cout<<s[t-1]<<endl;
//       }
//       else
//       cout<<"Greater Than 9";
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
      int ch;

       cin>>ch;
       switch (ch)
       {
        case 9:
         cout<<"nine"<<endl;
        
         break;

       case 8:
         cout<<"eight"<<endl;
         
         break;

         case 7:
         cout<<"seven"<<endl;
         break;
       
       case 6:
         cout<<"six"<<endl;
         break;
       
       case 5:
         cout<<"five"<<endl;
         break;
       
       case 4:
         cout<<"four"<<endl;
         break;
       
       case 3:
         cout<<"three"<<endl;
         break;

         case 2:
         cout<<"two"<<endl;
         break;
       
       case 1:
         cout<<"one"<<endl;
         break;
    
       default:
       
        cout<<"Greater than 9";
      
    
       }
    return 0;
}
