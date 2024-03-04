#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

void menu();

class managemenu
{
  protected:
      string userName;

      public:
      managemenu()
      {
        system("color 0A");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter Your Name To Continue as an Admin:";
        cin>>userName;
        menu();
      }
      ~managemenu(){

      }
};

class Customers
{
  public:   
     string name, gender,adress;
     int age, mobileNo;
     static int cusID;
     char all[900];

     void getDetails()
     {
        ofstream out("old-customers.txt",ios::app);
    {
        cout <<"Enter Customer ID:";
        cin>>cusID;
        cout <<"Enter Name:";
        cin>>name;
        cout <<"Enter Age:";
        cin>>age;
        cout <<"Enter Mobile Number:";
        cin>>mobileNo;
        cout <<"Enter Adress:";
        cin>>adress;
        cout <<"Enter Gender:";
        cin>>gender;
    }
       out <<"\nCustomer ID:"<<cusID <<"\nName:"<<name <<"\nAge:" <<age <<"\nMobile Number:" <<mobileNo << "\nAdress:" <<adress << "\nGender:" <<gender <<endl;
       out.close();
       cout<< "\nSAVES \nNOTE:we save your record for future purpose\n"<<endl;
     }
    void showDetails()
      {
        ifstream in("old-customer.txt");
        {

            if(!in)
            {
              cout<<"file Error!"<<endl;  
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<< all <<endl;
            }
            in.close();

        }
      }
};
int Customers::cusID;

class Cabs
{
 public:
       int cabChoice;
       int kilometers;
       float cabcost;
       static float lastcabcost;

       void cabDetails()
       {
         cout<<"we collaborated with fatest,sefest and smartest cab service around the country"<<endl;
         cout<<"----------------------------------ABC  Cabs---------------------------------\n"<<endl;
         cout<<"1.Rent a Standard Cab - Rs.15 for 1KM"<<endl;
         cout<<"2.Rent a Luxury Cab - 25 per 1KM"<<endl;

         cout<< "\nTo calculate the cost for your jurney:"<<endl;
         cout<<"Enter which kind of cab you need:";
         cin >>cabChoice;
         cout<<"Enter kilometers you have to travel:";
         cin>>kilometers;

       int hireCab;

       if(cabChoice==1){
        cabcost=kilometers*15;
        cout<<"\nYour tour cost"<< cabcost<<"rupees for a Standard cab"<<endl;
        cout<<"press 1 to hire this cab: or ";
        cout<<"press 2 to select another cab:";
        cin>>hireCab;

        system("CLS");

        if(hireCab==1){
           lastcabcost=cabcost;
           cout<<"\nyou have successfully hired a Standard cab"<<endl;
           cout<<"GoTo Menu and take the receipt"<<endl;
           
        }
        else if (hireCab==2)
        {
          cabDetails();
        }
        else {
          cout<<"Invalid Input! redirecting to previous menu\nplease Wait!"<<endl;
          Sleep(1100);
          system("CLS");
          cabDetails();
        }
       }
       else if (cabChoice==2)
       {
        cabcost=kilometers*25;
        cout<<"\nYour tour cost"<< cabcost<<"rupees for a luxury cab"<<endl;
        cout<<"press 1 to hire this cab: or ";
        cout<<"press 2 to select another cab:";
        cin>>hireCab;
        system("CLS");
        if(hireCab==1){
           lastcabcost=cabcost;
           cout<<"\nyou have successfully hired a luxury cab"<<endl;
           cout<<"GoTo Menu and take the receipt"<<endl;
           
        }
        else if (hireCab==2)
        {
          cabDetails();
        }
        else {
          cout<<"Invalid Input! redirecting to previous menu\nplease Wait!"<<endl;
          Sleep(999);
          system("CLS");
          cabDetails(); 
        }
       }
      else{
        cout<<"Invalid Input! Redirecting to Main menu\nplease wait"<<endl;
        Sleep(1100);
        system("CLS");
        menu();
      }
      cout<<"\nPress 1 to Redirect Main menu:";
      cin>>hireCab;
      system("CLS");
      if(hireCab==1){
      menu();
      } 
       else{
           menu();
       }

      }
};

float Cabs::lastcabcost;

class Booking
{
public:
int choiceHote1;
int packchoice;
static float hotelCost;

void hotels()
{
  string hotelNo[]={"Avendra,ChoiceYou","ElephantBay"};
  for(int a=0;a<3; a++){
    cout<<(a+1)<<".Hotel"<<hotelNo[a]<<endl;
  }

  cout<<"\nCurrently we collaborated with above hotels"<<endl;

  cout<<"press any key to bank or\nEnter number of the hotel you want to book:";
  cin>>choiceHote1;
  system("CLS");

  if (choiceHote1==1)
  {
    cout<<"-------------WELCOME TO HOTEL AVENDRA--------------\n"<<endl;
    cout<<"The Garden,food and beverage.Enjoy all you can drink, Stay cool and get chilled in the summer sun."<<endl;
    cout<<"Package offered by Avendra:\n"<<endl;
    cout<<"1.Standard pack"<<endl;
    cout<<"\tAll basic facilities you need just for:RS.5000.00"<<endl;
    cout<<"2.Premium Pack"<<endl;
    cout<<"\tEnjoy premium:RS.10000.00"<<endl;
    cout<<"3.Luxury pack"<<endl;
    cout<<"\tLive a Luxury at Avendra: RS.15000.00"<<endl;
    cout<<"\npress another key to back or\nEnter package number you want to book:";
    cin>>packchoice;

  if (packchoice==1)
{
  hotelCost=5000.00;
  cout<<"\nyou have successfuly booked Standard pack at Avendra"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else if (packchoice==2)
{
  hotelCost=10000.00;
  cout<<"\n you  have successfuly booked Premium pack at Avendra"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else if (packchoice==3)
{
  hotelCost=15000.00;
  cout<<"\n you  have successfuly booked Luxury pack at Avendra"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else{
  cout<<"Invalid Input! Redireting to preivious menu \nplease wait!"<<endl;
  Sleep(1100);
  system("CLS");
  hotels();
    }
    int gotoMenu;
    cout<<"\npress 1 to redirect main menu:";
    cin>>gotoMenu;
    system("CLS");
    if (gotoMenu==1)
    {
      menu();
    }
    else{
      menu();
    }
    
  }
  else if (choiceHote1==2)
  {
    cout<<"-----------chioce YOU-----------"<<endl;
    cout<<"1.Family Pack" <<endl;
    cout<<"\tRS.15000.00 for a day"<<endl;
    cout<<"2.couple pack"<<endl;
    cout<<"\tRS.10000.00 for a day"<<endl;
    cout<<"3.singal"<<endl;
    cout<<"\t RS.5000.00 for a day"<<endl;
    cout<<"\npress another key to back or\nEnter package number you want to book:";
    cin>>packchoice;

  if (packchoice==1)
{
  hotelCost=15000.00;
  cout<<"\nyou have successfuly booked Family pack at choiceYou"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else if (packchoice==2)
{
  hotelCost=10000.00;
  cout<<"\n you  have successfuly booked couple pack at choiceYou"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else if (packchoice==3)
{
  hotelCost=5000.00;
  cout<<"\n you  have successfuly booked single pack at choiceYou"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else{
  cout<<"Invalid Input! Redireting to preivious menu \nplease wait!"<<endl;
  Sleep(1100);
  system("CLS");
  hotels();
    }
    int gotoMenu;
    cout<<"\npress 1 to redirect main menu:";
    cin>>gotoMenu;
    system("CLS");
    if (gotoMenu==1)
    {
      menu();
    }
    else{
      menu();
    }
    
  }
else if(choiceHote1==3)
  {
    cout<<"---------------WELCOME TO HOTEL ELEPHANTBAY--------------\n"<<endl;
    cout<<"set in tropical gardens on the bank of the Maha Oya river While Seeing Elephantas"<<endl;
    cout<<"Amazing offer in this summer: RS.5000.00 for a one day!!!"<<endl;
    cout<<"\npress another key to back or\nEnter package number you want to book:";
    cin>>packchoice;

  if (packchoice==1)
{
  hotelCost=5000.00;
  cout<<"\nyou have successfuly booked ElephantBay Special pack"<<endl;
  cout<<"GotoTo menu and take the receipt"<<endl;
}

else{
  cout<<"Invalid Input! Redireting to preivious menu \nplease wait!"<<endl;
  Sleep(1100);
  system("CLS");
  hotels();
    }
    int gotoMenu;
    cout<<"\npress 1 to redirect main menu:";
    cin>>gotoMenu;
    system("CLS");
    if (gotoMenu==1)
    {
      menu();
    }
    else{
      menu();
    }
    
  }
  else{
    cout<<"Invalid Input!Redirecting to previous /menu \nplease wait"<<endl;
    Sleep(1100);
    system("CLS");
    menu();
  }
    
}
  
};

float Booking::hotelCost;

class Charges : public Booking,Cabs,Customers
{
   public:
        void printBill() 
        {
          ofstream outf("receipt.txt");
          {
             
            outf<<"----------ABC Travel Agency----------"<<endl;
            outf<<"--------------Receipt----------------"<<endl;
            outf<<"_____________________________________"<<endl;
              
             outf<<"Customer ID:"<< Customers ::cusID<<endl <<endl; 
             outf<<"Description\t\t Total"<<endl;
             outf<<"Hotel cost:\t\t"<<fixed <<setprecision(2) <<Booking::hotelCost<<endl;
             outf<<"Travel (cab) cost:\t"<<fixed <<setprecision(2) <<Cabs :: lastcabcost <<endl;


             outf<<"_______________________________________"<<endl;
             outf<<"Total Charge:\t\t"<<fixed<<setprecision(2)<<Booking::hotelCost+Cabs::lastcabcost<<endl;
             outf<<"_______________________________________"<<endl;
             outf<<"--------------*THANK YOU*----------------"<<endl;

          }
          outf.close();
        }

        void showBill(){
          ifstream inf("receipt.txt");
          {
            if(!inf)
            {
              cout<<"File opening error!"<<endl;
            }
            while (!(inf.eof()))
            {
               inf.getline(all,999);
               cout<<all<<endl;
            }
            
          }
          inf.close();
        }
};

void menu()
{

   int mainChoice;
   int inChoice;
   int gotomenu;

  cout<<"\t\t         *ABC Travel*                           \n"<<endl;
  cout<<"\t---------------------Main Menu----------------------"<<endl;

  cout<<"\t---------------------------------------------"<<endl;
  cout<<"\t\t\t\t\t\t"<<endl;
  cout<<"\t|t\tCustomer Management -> 1\t|"<<endl;
  cout<<"\t|t\tCabs Management     -> 2\t|"<<endl;
  cout<<"\t|t\tBookings Mnagement  -> 3\t|"<<endl;
  cout<<"\t|t\tCharges & Bill      -> 4\t|"<<endl;
  cout<<"\t|t\tExit                -> 5\t|"<<endl;
  cout<<"\t|\t\t\t\t\t|"<<endl;  
  cout<<"\t|-----------------------------|"<<endl;

  cout<<"\nEnter Your Choice:";
  cin>> mainChoice;

  system("CLS");
   
   Customers a2;
   Cabs a3;
   Booking a4;
   Charges a5;

   if(mainChoice==1){
     cout<<"--------Customers--------\n"<<endl;
     cout<<"1.Enter New Customer"<<endl;
     cout<<"2.See Old Customers"<<endl; 
     cout<<"\nEnter Choice:";
     cin>>inChoice;
     system("CLS");
     if (inChoice==1)
     {
      a2.getDetails();
     }
     else if (inChoice==2)
     {
      a2.showDetails();
     }
     else{
          cout<<"Invalid Input! Redirecting to Previous Menu \nplease wait"<<endl;
          Sleep(1100);
          system("CLS");
          menu();
     }

     cout<<"\npress 1 to Redirct main menu:";
     cin>>gotomenu;
     system("CLS");
     if(gotomenu==1){
      menu();
     }
     else {
      menu();
     }
   }

   else if (mainChoice==2)
   {
    a3.cabDetails();
   }
   else if (mainChoice==3)
   {
    cout<<"-->  BOOk a luxury Hotel using the system--->"<<endl;
    a4.hotels();
   }
   else if (mainChoice==4)
   {
    cout<<"--->Get your reciept<---"<<endl;
    a5.printBill();

    cout<<"your reciept is already printed you can get in from file path\n"<<endl;
    cout<<"to display the your reciept in the sreen,Enter 1:or Enter another key to back main menu:";
    cin>>gotomenu;

    if (gotomenu==1)
    {
      system("CLS");
      a5.showBill();
      cout<<"\npress 1 to redirct main menu:";
      cin>>gotomenu;
      system("CLS");
      if (gotomenu==1)
      {
        menu();
      }
      else {
        menu();
      }
    
    }
    else{
      system("CLS");
      menu();
    }
    
   }
   else if (mainChoice==5)
   {
     cout<<"--GOOD-BYE--"<<endl;
     Sleep(999);
     system("CSL");
     menu();
   }
   else{
    cout<<"Invalid Input ! Redirecting to previous menu \nplease wait!"<<endl;
    Sleep(1100);
    system("CLS");
    menu();
   }
   
}

int main()
{
  managemenu startobj;
  return 0;
}

