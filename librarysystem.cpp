#include<iostream>
#include<string>
using namespace std;
int setting_option;


char select; 
void create_page();
void books_catatgary();
void choosen(int option);
void array(string location);
void setting(int setting_option);
void rateapp(int rate);

int main(){
int option,rate;
 string location;  
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
	return 0;
   }
}
else{
    cout<<"\nyour email addrsess is incorrect";
	return 0;
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
        books_catatgary();
		cout<<"enter your book catagory: ";
          cin>>option;
       choosen(option);
       break;
      case 4:
	  cout<<"\t================ SEARCH LIBARY ================="<<endl;
      cout<<"hey! you can search,what do you want library"<<endl;
	  cout<<"enter your location: ";
	  cin>>location;
      array(location); 
       break;
      case 5:
      cout<<"\t================ SETTING ================="<<endl;
      cout<<"\t1.add another account";
	  cout<<"\n\t2.change my email address";
	  cout<<"\n\t3.change my password";
	  cout<<"\n\t4.select theme"<<endl;
	  cout<<"enter your choise number : ";
	  cin>>setting_option;
	 setting(setting_option);

       break;
      case 6:
       cout<< "enter your rate for our app: " ;
	   cin>>rate;
	   rateapp(rate);
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
    cout<<"\t================================================\t"<<endl;
	cout<<"\t====== WELCOME TO ONLINE LIBRARY PLATFORM ======\t"<<endl;
	cout<<"\t================================================\t"<<endl;
	cout<<"\they! amal lets start your jounery;"<<endl;
    cout<<"\t1.My Status \n\t2.online Books\n\t3.physical book\n\t4.search library\n\t5.Setting\n\t6.Rate This App\n\t7.Exist\n";

}

void books_catatgary(){
    cout<<"BOOKS CATAGORIES :"<<endl;
	 	cout<<"1.story\n";
	 	cout<<"2.ict\n";
	 	cout<<"3.sports\n";
	 	cout<<"4.science\n";
	 	cout<<"5.arts\n";	
		cout<<"6.politicals\n";
    }

void choosen(int option){	 	
           
	 	switch(option){
	 		case 1:
	 			cout<<"a).harry potter\n";
	 			cout<<"b).lord of the ring\n";
	 			cout<<"c).sherlock \n";
	 			cout<<"d).robin hood\n";
				cout<<"enter a number of book name :";
				cin>>select;
                  switch(select){
					case 'a':
					 cout<<"Harry Potter 1 : online view :download \n";
					 cout<<"Harry Potter 2 : online view :download \n";
					 cout<<"Harry Potter 3 : online view :download \n";
					 cout<<"Harry Potter 4 : online view :download \n";
					 cout<<"Harry Potter 5 : online view :download \n";
					 cout<<"Harry Potter 6 : online view :download \n";  
					 cout<<"Harry Potter 7 part 1 : online view :download\n ";  
					 cout<<"Harry Potter 7 part 2 : online view :download\n ";  
					 break;
                    case 'b':
					 cout<<"lord of the ring 1 : online view :download \n ";
					 cout<<"lord of the ring 2 : online view :download \n ";
					 cout<<"lord of the ring 3 : online view :download \n ";
					 break;
					case 'c':
					 cout<<"sherlock homes 1 : online view :download\n";
					 cout<<"sherlock homes 2 : online view :download\n";
					 break;
					case 'd':
					 cout<<"robind hood old : online view :download\n";
					 cout<<"robind hood new : online view :download\n";
					 break;
					default:
					 cout<<"invaild input";

				  }

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
			case 6:
			 cout<<"political history";
			 break; 
			default:
			 cout<<"invaild input"; 
		 }
}

void array(string location){
	string array[10][3]={ {"trincomalee","pinsara libray","opened today"},
                        {"embilipitiya","mahajana libraray","opened today"},
						{"nuwara","old library","closed today"},
						{"sevanagala","nanasala library","opned today"},
						{"horana","new sarasawi library","closed today"},
						{"monaragala","senura library","opend today"},
						{"anuradhapura","samagi library","closed today"},
						{"polonnaruwa","parakrama library","opend today"},
						{"gampaha","star library","closed today"},
						{"nawalapitiya","nimantha library","opend today"},
					};

for(int i=0;i<10;i++){
	if(location==array[i][0]){
		for(int j=1;j<3;j++){
			location[i] = tolower(location[i]);
            cout<<array[i][j]<<" : ";
		}cout<<endl;
	}
	
}
}

void setting(int setting_option){
string emailnew1,newemail,newpassword;
	switch(setting_option){
		case 1:
		 cout<<"enter your email address for new account :";
		 cin>>emailnew1;
		 if(emailnew1=="amal@gmail.com"){
			cout<<"already, you have a account from that email";
		 }
		 else{
			cout<<"\t========== SUCCECES =========";
			cout<<"\naccount added! you can swith another account.";

		 }break;

	    case 2:
          cout<<"enter your new email: ";
		  cin>>newemail;
		  if(newemail=="amal@gmail.com"){
			cout<<"already, you have a account from that email";
		 }
		 else{
			cout<<"\t========== SUCCECES =========";
			cout<<"\naccount added! you can swith another account.";
		 }
		  break;
		case 3:
		 cout<<"enter your current password: ";
         cout<<"your new password : ";
		 cin>>newpassword;
		 if(newpassword=="amal123"){
			cout<<"your password is already use,try again with new password";
		 }
		 else{
			cout<<"your password is updated!";
		 }
		 
		 break;
		case 4:
		 cout<<"what do you want dark theme or light theme :";
		 break;
		defalut:
		 cout<<"invaild input";
             
}
}

void rateapp(int rate){
	switch(rate){
		case 1:
		 cout<<"thank for your rating in *";
		 break;
		case 2:
		 cout<<"thank for your rating in **";
		 break;
	    case 3:
		 cout<<"thank for your rating in ***" ;
		 break;
		case 4:
		 cout<<"thank for your rating in ****";
		 break; 
		case 5:
		 cout<<"thank for your rating in *****";
		 break;
		default:
		 cout<<"invaild rating value!";

	}
}
               

	
