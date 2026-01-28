#include<iostream>
#include<string>
using namespace std;
void create_page();
void books_catatgary();
void choosen(int option);
int main(){
int option;    
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
int choise;
cout<<"enter your choise from above list : ";
cin>>choise;

 switch(choise){
      case 1:
       cout<<"\t================ MY STATUS ================="<<endl;
     	cout<<"NAME  BOOKS CATAGORY  BOOKS NAME       START DATE    END OF DATE"<<endl;
     	cout<<"amal  ict             learn c++        2025/06/07    2025/07/02"<<endl;
    	cout<<"amal  ict             python intro     2025/07/07    2025/07/25"<<endl;
      	cout<<"amal  story           harry potter 2   2025/09/07    2025/10/02"<<endl;
     	cout<<"amal  story           harry potter 3   2025/10/07    not yet\n"<<endl;
       break;
      case 2:
      cout<<"\t================ ONLINE BOOKS ================="<<endl;
       books_catatgary();
        cout<<"enter your book catagory: ";
          cin>>option;
       choosen(option);
       break;
      case 3:
      cout<<"\t================ PHYSICAL BOOKS ================="<<endl;
       
       break;
      case 4:
       cout<<"hey! you can search,what do you want library";
       break;
      case 5:
       cout<<"setting";
       break;
      case 6:
       cout<< "you can rate for our app!" ;
       break;  
      case 7:
       cout<<"thank you for use our platform." ;
       break;
      defalut:
       cout<<"invaild input.try again!";
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
void books_catatgary(){
    cout<<"BOOKS CATAGORIES :"<<endl;
	 	cout<<"1.story\n";
	 	cout<<"2.ict\n";
	 	cout<<"3.sports\n";
	 	cout<<"4.science\n";
	 	cout<<"5.arts\n";
	 	
    }

void choosen(int option){	 	
           
	 	switch(option){
	 		case 1:
	 			cout<<"a).harry potter\n";
	 			cout<<"b).lord of the ring\n";
	 			cout<<"c).sherlock \n";
	 			cout<<"d).robin hood\n";

	 			break;
	 		case 2:
			 cout<<"a).learn c++\n";
			 cout<<"b).learn php\n";
			 cout<<"c).learnpython\n";
			 cout<<"d).learn java script\n";
			 break;	
			case 3:
			 cout<<"a).how to play cricket\n";
			 cout<<"b).how to play elle\n";
			 cout<<"c).how to play football\n";
			 cout<<"d).how to play caram\n";		 
			 break;
			case 4:
		    	cout<<"a).heat\n";
		    	cout<<"b).motion\n";
				cout<<"c).electronics\n";
				cout<<"d).dopllar effect\n";			
			 break; 
			case 5:
			 cout<<"how to gitar";
			 break;
			default:
			 cout<<"invaild input"; 
		 }
}