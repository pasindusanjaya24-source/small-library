#include<iostream>
#include<string>
using namespace std;
void create_page();
int main(){
string email,password;
cout<<"enter your email:";
cin>>email;

if (email=="amal@gmail.com"){
   cout<<"enter your password: ";
   cin>>password;
   if(password=="amal123"){
   create_page();
   }
   else{
    cout<<"your password is incorrect";
   }
}
else{
    cout<<"\nyour email addrsess is incorrect";
}
    return 0;
}
void create_page(){
    cout<<"\t=============================================\t"<<endl;
	cout<<"\t====== WELCOME TO ONLINE LIBRARY PLATFORM ======\t"<<endl;
	cout<<"\t=============================================\t"<<endl;
	cout<<"hey! amal lets start your jounery;"<<endl;
    cout<<"\t1.My Status \n\t2.online Books\n\t3.physical book\n\t4.search library\n\t5.Setting\n\t6.Rate This App\n\t7.Exist\n";

}