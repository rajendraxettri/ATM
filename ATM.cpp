#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<map>
using namespace std;

class home{
    public:
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int abc,menuOption;
    char accountNumber[5];
    char password[5];
    int count=0;
    char depositOption[30];
    int depositOptionVal;
    int ratepoint;
    char Suggest;
    int depositAmt;
    char agree;
    char exitOption[2];

   char logoutOption[1];

    char uAccount[5][30]={"ram","sita","gita","govinda","shiva"};
    char uPass[5][30]={"abc","bcd","def","fgh","ilu"};


    int ramAcc = 100, sitaAcc = 100, gitaAcc = 100, govindaAcc = 100, shivaAcc = 100;
    






    public:
    void rateUs();
    void withdraw();
    void inquiry();
    void deposit();
    void logIn();
	void menu();
    int intro(){
SetConsoleTextAttribute(h,11);
    cout<<"\t\t                                                                                                \n"; Sleep(30);
	cout<<"\t\t      *   *   *   *********   *            *********    ********     *******    *********       \n"; Sleep(30);
	cout<<"\t\t      *   *   *   *           *           *            *        *   *   *   *   *               \n"; Sleep(30);
	cout<<"\t\t      *   *   *   ******      *           *            *        *   *   *   *   ******          \n"; Sleep(30);
	cout<<"\t\t      *   *   *   *           *           *            *        *   *   *   *   *               \n"; Sleep(30);
	cout<<"\t\t       *******    *********   *********    *********    ********    *   *   *   *********       \n"; Sleep(30);
    cout<<"\t\t   |__                                                                                    __|     \n"; Sleep(30);



SetConsoleTextAttribute(h,1);
   cout<<"\t\t\t\t\t\t"<<"Hii....."; Sleep(200);
    cout<<" W";Sleep(90);
    cout<<"E";Sleep(90);
    cout<<"L";Sleep(90);
    cout<<"C";Sleep(90);
    cout<<"O";Sleep(90);
    cout<<"M";Sleep(90);
    cout<<"E";Sleep(90);
    cout<<" T";Sleep(90);
    cout<<"O";Sleep(90);
SetConsoleTextAttribute(h,4);
    cout<<" |T";Sleep(90);
    cout<<"E";Sleep(90);
    cout<<"C";Sleep(90);
	cout<<"H";Sleep(90);
	cout<<" R";Sleep(90);
	cout<<"A";Sleep(90);    
	cout<<"A|";Sleep(90);
SetConsoleTextAttribute(h,1);
    cout<<" A";Sleep(90);
    cout<<"T";Sleep(90);
    cout<<"M";Sleep(90);
    
    cout<<"\n\n\n \t\t|------------------------>";
   cout<<"E";Sleep(60);
    cout<<"n";Sleep(60);
    cout<<"t";Sleep(60);
	cout<<"e";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<" A";Sleep(60);    
	cout<<"n";Sleep(60);
	cout<<"y";Sleep(60);
	cout<<" K";Sleep(60);
	cout<<"e";Sleep(60);
	cout<<"y";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"o";Sleep(60);
	cout<<" C";Sleep(60);
	cout<<"o";Sleep(60);
	cout<<"n";Sleep(60);
	cout<<"t";Sleep(60);
	cout<<"i";Sleep(60);
	cout<<"n";Sleep(60);
	cout<<"u";Sleep(60);	
	cout<<"e";Sleep(60);
	cout<<" !";Sleep(60);getch();
	
    

    return 0;
 }
    
    
};

int main(){

home h;
h.intro();
h.logIn();
h.menu();




return 0;
}


void home::menu(){
	SetConsoleTextAttribute(h,5);
cout<<"\n\n\t\t  <======================================> ";
SetConsoleTextAttribute(h,4);
cout<<"| TECH RAA |";
SetConsoleTextAttribute(h,5);

cout<<"<=========================================>   "<<endl;

    cout<<"\t\t  __________       __________       ___________       __________       ___________       _________    \n";
    cout<<"\t\t |  DEPOSIT |     | Withdraw |     |  INQUERY  |     |   ADMIN  |     |  RATE US  |     | LOG OUT |   \n";
    cout<<"\t\t |     1    |     |     2    |     |     3     |     |    4     |     |     5     |     |    0    |   \n";
    cout<<"\t\t  __________       __________       ___________       __________       ___________       _________    \n\n";
	cout<<"\t\t  <===================================> SELECT ANY OPTION <=======================================>   \n\n";
	
	cout<<"\t\t  ------------->:";
     cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" A";Sleep(60);    cout<<"n";Sleep(60);cout<<"y";Sleep(60);cout<<" O";Sleep(60);cout<<"p";Sleep(60);cout<<"t";Sleep(60);Sleep(60);cout<<"i";Sleep(60);Sleep(60);cout<<"o";Sleep(60);Sleep(60);cout<<"n   : ";Sleep(60);


	cin>>menuOption;

    switch (menuOption)
    {
    case 0 : 
        system("cls");
        exit(0);
        

    case 1 :
        deposit();
        break;

    case 2 : 
            withdraw();
            break;

     case 3 : 
            inquiry();
            break;

     case 4 : 
     cout<<"|=====================================> Under development !\n\n";
     
SetConsoleTextAttribute(h,4);

cout<<"\t\t=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}
     break;

     case 5 : 
        rateUs();
        break;
    
    default:
    cout<<"|=============================================> INVALIDE OPTION TRY AGAIN !";
    
SetConsoleTextAttribute(h,4);

cout<<"\t\t=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}
        break;
    }
}

void home:: logIn(){
SetConsoleTextAttribute(h,ABE_TOP);


    // cout<<"\t\t==================================================================================\n"; 
	// cout<<"\t\t      *           *********   *********                 *********   *      *      \n"; 
	// cout<<"\t\t      *           *       *   *                             *       * *    *      \n"; 
	// cout<<"\t\t      *           *       *   *   *****                     *       *  *   *      \n"; 
	// cout<<"\t\t      *           *       *   *       *                     *       *    * *      \n"; 
	// cout<<"\t\t      ********    *********   *********                 *********   *      *      \n";
    cout<<"\n\n\t\t==================================>|TECH RAA|<====================================\n\n"; 
    start:
    SetConsoleTextAttribute(h,2);
    cout<<"\t\t|============================>";
    cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);
	cout<<"e";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<" Y";Sleep(60);    
	cout<<"o";Sleep(60);
	cout<<"u";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<" U";Sleep(60);
	cout<<"s";Sleep(60);
	cout<<"e";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<" N";Sleep(60);
	cout<<"a";Sleep(60);
	cout<<"m";Sleep(60);
	cout<<"e : ";Sleep(60);
    cin>>accountNumber;
    cout<<"\t\t|============================>";
      cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);
	cout<<"e";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<" P";Sleep(60);    
	cout<<"a";Sleep(60);
	cout<<"s";Sleep(60);
	cout<<"s";Sleep(60);
	cout<<"w";Sleep(60);
	cout<<"o";Sleep(60);
	cout<<"r";Sleep(60);
	cout<<"d : ";Sleep(60);
    cin>>password;
    
        if(strcmp(uPass[0],password)==0 && strcmp(uAccount[0],accountNumber)==0){
            SetConsoleTextAttribute(h,10);
            cout<<"\t\t\n\n\t\t|============================>Login Successful.........";
            getch();
            
        }
		else if(strcmp(uPass[1],password)==0 && strcmp(uAccount[1],accountNumber)==0){
            SetConsoleTextAttribute(h,10);
            cout<<"\t\t\n\n\t\t|============================>Login Successful.........";
            getch();
           
        }
        else if(strcmp(uPass[2],password)==0 && strcmp(uAccount[2],accountNumber)==0){
            SetConsoleTextAttribute(h,10);
            cout<<"\t\t\n\n\t\t|============================>Login Successful.........";
            getch();
           }
           else if(strcmp(uPass[3],password)==0 && strcmp(uAccount[3],accountNumber)==0){
            SetConsoleTextAttribute(h,10);
            cout<<"\t\t\n\n\t\t|============================>Login Successful.........";
            getch();
           }
           else if(strcmp(uPass[4],password)==0 && strcmp(uAccount[4],accountNumber)==0){
            SetConsoleTextAttribute(h,10);
            cout<<"\t\t\n\n\t\t|============================>Login Successful.........";
            getch();
           }
           else{
        	SetConsoleTextAttribute(h,4);
        	cout<<"\n\t\t|============================>Wrong Password !\n";
    goto start;
		}

    

    
 
system("cls");


}

void home:: deposit(){
    SetConsoleTextAttribute(h,7);

cout<<"\t\t  <===================================>|TECH RAA|<=======================================>   \n";
cout<<"\t\t  <===================================>DEPOSITING<=======================================>   \n";
cout<<"\t\t  <======================================================================================>   \n\n";
start:
cout<<"\t\t  ===================================>";
cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" U";Sleep(60);    cout<<"s";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" N";Sleep(60);cout<<"a";Sleep(60);Sleep(60);cout<<"m";Sleep(60);Sleep(60);cout<<"e";Sleep(60);Sleep(60);cout<<": ";Sleep(60);
cin>>depositOption;
cout<<"\n\t\t  ===================================>";
cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" Y";Sleep(60);    cout<<"o";Sleep(60);cout<<"u";Sleep(60);cout<<"r";Sleep(60);cout<<" A";Sleep(60);cout<<"m";Sleep(60);Sleep(60);cout<<"o";Sleep(60);Sleep(60);cout<<"u";Sleep(60);Sleep(60);cout<<"n";Sleep(60);cout<<"t : ";Sleep(60);
cin>>depositAmt;

cout<<"\n\n\t\t===================================> I agree to deposit the specified amount into my bank account ?   ";
cout<<"[Y/N] :";
cin>>agree;
system("cls");

cout<<"\n\n\t\t|===================================>PROCESSING<======================================|\n\n";
    SetConsoleTextAttribute(h,4);

cout<<"\t\t||";Sleep(100);
for (int i = 0; i < 83; i++)

{
    cout<<"|";Sleep(100);
}
cout<<"||";Sleep(100);

system("cls");
    SetConsoleTextAttribute(h,11);


if(agree == 'Y' || agree == 'y'){
    if(strcmp(depositOption,"ram")==0){
    
        ramAcc =ramAcc  + depositAmt;
        cout<<"\n\n\t\t===================================> Amount deposited Sucessfully .........";
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<ramAcc<<endl;
    }
    else if(strcmp(depositOption,"sita")==0){
        sitaAcc = sitaAcc + depositAmt;
        cout<<"\n\n\t\t===================================> Amount deposited Sucessfully .........";
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<sitaAcc<<endl;
    }
    else if(strcmp(depositOption,"gita")==0){
        gitaAcc = gitaAcc + depositAmt;
        cout<<"\n\n\t\t===================================> Amount deposited Sucessfully .........";
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<gitaAcc<<endl;
    }
     else if(strcmp(depositOption,"govinda")==0){
        govindaAcc = govindaAcc + depositAmt;
        cout<<"\n\n\t\t===================================> Amount deposited Sucessfully .........";
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<govindaAcc<<endl;
    }
    else if(strcmp(depositOption,"shiva")==0){
        shivaAcc = shivaAcc + depositAmt;
        cout<<"\n\n\t\t===================================> Amount deposited Sucessfully .........";
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<shivaAcc<<endl;
    }
else{
      SetConsoleTextAttribute(h,4);
      
    cout<<"\n\n\t\t===================================> Account not Found Please Try again .....\n\n";
    getch();
    system("cls");
    goto start;
}

}


else{
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\t\t===================================> Cancled   \n\n";
    goto start;

}
SetConsoleTextAttribute(h,11);

cout<<"\t\t=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}

}

//Withdrawing function starting 

void home:: withdraw(){
    SetConsoleTextAttribute(h,7);


cout<<"\t\t  <===================================>|TECH RAA|<=======================================>   \n";
cout<<"\t\t  <===================================>WITHDRAWING<======================================>   \n";
cout<<"\t\t  <======================================================================================>   \n\n";
start:
cout<<"\t\t  ===================================>";
cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" U";Sleep(60);    cout<<"s";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" N";Sleep(60);cout<<"a";Sleep(60);Sleep(60);cout<<"m";Sleep(60);Sleep(60);cout<<"e";Sleep(60);Sleep(60);cout<<": ";Sleep(60);
cin>>depositOption;
cout<<"\n\t\t  ===================================>";
cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" Y";Sleep(60);    cout<<"o";Sleep(60);cout<<"u";Sleep(60);cout<<"r";Sleep(60);cout<<" W";Sleep(60);cout<<"i";Sleep(60);Sleep(60);cout<<"t";Sleep(60);Sleep(60);cout<<"h";Sleep(60);Sleep(60);cout<<"d";Sleep(60);cout<<"r";Sleep(60);cout<<"w";Sleep(60);cout<<" A";Sleep(60);cout<<"m";Sleep(60);cout<<"t : ";Sleep(60);
cin>>depositAmt;

cout<<"\n\n\t\t|================================> I agree to deposit the specified amount into my bank account ?   ";
cout<<"[Y/N] :";
cin>>agree;
system("cls");

cout<<"\n\n\t\t|===================================>PROCESSING<======================================|\n\n";
    SetConsoleTextAttribute(h,11);

cout<<"\t\t||";Sleep(100);
for (int i = 0; i < 83; i++)

{
    cout<<"|";Sleep(100);
}
cout<<"||";Sleep(100);

system("cls");

if(agree == 'Y' || agree == 'y'){
    if(strcmp(depositOption,"ram")==0){
    
        if(ramAcc>=depositAmt){
            ramAcc =ramAcc  - depositAmt;
        cout<<"\n\n\t\t===================================> Amount Withdraw Sucessfully .........";
        }else{
    SetConsoleTextAttribute(h,4);

        cout<<"\n\n\t\t===================================> You Havent Enough Money    !";

    SetConsoleTextAttribute(h,7);

        }
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<ramAcc<<endl;
    }
    else if(strcmp(depositOption,"sita")==0){
         if(sitaAcc>=depositAmt){
            sitaAcc =sitaAcc  - depositAmt;
    SetConsoleTextAttribute(h,11);

        cout<<"\n\n\t\t===================================> Amount Withdraw Sucessfully .........";
        }else{
    SetConsoleTextAttribute(h,4);

        cout<<"\n\n\t\t===================================> You Havent Enough Money    !";

        }
    SetConsoleTextAttribute(h,11);

        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<sitaAcc<<endl;
    }
    else if(strcmp(depositOption,"gita")==0){
          if(gitaAcc>=depositAmt){
            gitaAcc =gitaAcc  - depositAmt;
    SetConsoleTextAttribute(h,11);
        cout<<"\n\n\t\t===================================> Amount Withdraw Sucessfully .........";
        }else{
    SetConsoleTextAttribute(h,4);

        cout<<"\n\n\t\t===================================> You Havent Enough Money    !";

        }
    SetConsoleTextAttribute(h,11);

        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<gitaAcc<<endl;
    }
     else if(strcmp(depositOption,"govinda")==0){
         if(govindaAcc>=depositAmt){
            govindaAcc =govindaAcc  - depositAmt;
    SetConsoleTextAttribute(h,11);

        cout<<"\n\n\t\t===================================> Amount Withdraw Sucessfully .........";
        }else{
    SetConsoleTextAttribute(h,4);

        cout<<"\n\n\t\t===================================> You Havent Enough Money    !";
    SetConsoleTextAttribute(h,11);


        }
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<govindaAcc<<endl;
    }
    else if(strcmp(depositOption,"shiva")==0){
       if(shivaAcc>=depositAmt){
            shivaAcc =shivaAcc  - depositAmt;
    SetConsoleTextAttribute(h,11);
    system("cls");

        cout<<"\n\n\t\t===================================> Amount Withdraw Sucessfully .........";
        }else{
    SetConsoleTextAttribute(h,4);

        cout<<"\n\n\t\t===================================> You Havent Enough Money    !";

        }
    SetConsoleTextAttribute(h,11);

        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<shivaAcc<<endl;
    }
else{
      SetConsoleTextAttribute(h,4);
      
    cout<<"\n\n\t\t===================================> Account not Found Please Try again .....\n\n";
    getch();
    system("cls");
    goto start;
}

}

else{
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\t\t===================================> Cancled   !\n\n";
    goto start;

}
    SetConsoleTextAttribute(h,11);


cout<<"\t\t=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}

}


void home:: inquiry(){
    SetConsoleTextAttribute(h,7);


cout<<"\t\t  <===================================>|TECH RAA|<=======================================>   \n";
cout<<"\t\t  <======================================>INQUIRY<=======================================>   \n";
cout<<"\t\t  <======================================================================================>   \n\n";
start:
cout<<"\t\t  ===================================>";
cout<<"E";Sleep(60);cout<<"n";Sleep(60);cout<<"t";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" U";Sleep(60);    cout<<"s";Sleep(60);cout<<"e";Sleep(60);cout<<"r";Sleep(60);cout<<" N";Sleep(60);cout<<"a";Sleep(60);Sleep(60);cout<<"m";Sleep(60);Sleep(60);cout<<"e";Sleep(60);Sleep(60);cout<<" : ";Sleep(60);
cin>>depositOption;


system("cls");

cout<<"\n\n\t\t|===================================>PROCESSING<======================================|\n\n";
    SetConsoleTextAttribute(h,11);

cout<<"\t\t||";Sleep(100);
for (int i = 0; i < 83; i++)

{
    cout<<"|";Sleep(100);
}
cout<<"||";Sleep(100);

system("cls");


 if(strcmp(depositOption,"ram")==0){

    SetConsoleTextAttribute(h,11);
    
    
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<ramAcc<<endl;
    }
    else if(strcmp(depositOption,"sita")==0){
         
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<sitaAcc<<endl;
    }
    else if(strcmp(depositOption,"gita")==0){
         
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<gitaAcc<<endl;
    }
     else if(strcmp(depositOption,"govinda")==0){
        
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<govindaAcc<<endl;
    }
    else if(strcmp(depositOption,"shiva")==0){
      
        cout<<"\n\n\t\t|===================================> Your Current Balance Is : "<<shivaAcc<<endl;
    }
    SetConsoleTextAttribute(h,9);


cout<<"\n\n\t\t=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}



}


void home:: rateUs(){
    SetConsoleTextAttribute(h,2);


cout<<"\t\t  <===================================>|TECH RAA|<=======================================>   \n";
cout<<"\t\t  <=====================================>RATE US<========================================>   \n";
cout<<"\t\t  <======================================================================================>   \n\n";

cout<<"=====================================>RATE US OUT OF 10 : ";
cin>>ratepoint;

system("cls");

cout<<"\n\n\t\t|===================================>PROCESSING<======================================|\n\n";
    SetConsoleTextAttribute(h,4);

cout<<"\t\t||";Sleep(100);
for (int i = 0; i < 83; i++)

{
    cout<<"|";Sleep(100);
}
cout<<"||";Sleep(100);

system("cls");

    SetConsoleTextAttribute(h,2);

if(ratepoint>=7){
    cout<<"=====================================>Thanks For Posative Reaction !  ";

}else if(ratepoint>=4){
    cout<<"=====================================>Your Suggetion !";
    cin>>Suggest;

    cout<<"=====================================>Thanks for suggetion ! ";
    
}
else if(ratepoint<4){
    cout<<"=====================================>The problem you are facing in our ATM system !";
    cin>>Suggest;
    cout<<"=====================================>Thanks for Feedback ! ";
}
else if (ratepoint>10)
{
    cout<<"=====================================>Sorry Invalide Point !";

}

    SetConsoleTextAttribute(h,9);



cout<<"\n\n=====================================> Log Out [Y/N] : ";
cin>>exitOption;
if(strcmp(exitOption,"Y")==0 || strcmp(exitOption,"y")==0){
    exit(0);


}else{
    system("cls");
    menu();
}


}



