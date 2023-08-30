#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h> 
using namespace std;

void loading() 
{ 
 	int i = 0;
	 int a=219; 
 	char load[26]; 
 	while(i < 25) 
 	{ 
 		system("cls"); 
 		load[i++] = a; 
 		load[i] = '\0'; 
  
		printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING %-25s", load);
 		usleep(199900); 
 	} 
 
 system("cls"); 
 printf("\n"); 
} 

/* Mail work */

    FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE *locBit4;
	FILE* MainCRET;
int Init(void)
{
	locBit = fopen("GmailUR.txt","w");
	locBit1 =fopen("Mail.txt","w");
	locBit2 =fopen("Message.txt","w");
	locBit3 =fopen("PassUR.txt","w");
	locBit4 =fopen("Subject.txt","w");	
	MainCRET=fopen("Mail.aysoat","w");
//	loading();
	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody =''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, message)\n#print('We Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail')\n\n");
	fclose(MainCRET);
    return 0;
}




void fillDat(char *msg,char emi[256], char subj[256])
{
	Init();
	char GMAILID[2561]=/*"Your Email From which you are wanting to send Email"*/;
	fprintf(locBit,"%s",GMAILID);
	char PASSWARD[256]=/*"For Password of above email for this code use this video (https://www.youtube.com/watch?v=hXiPshHn9Pw&ab_channel=TweakLibrary)"*/;
	fprintf(locBit3,"%s",PASSWARD);
	char SENDMAIL[256];
    strcpy(SENDMAIL,emi);
	fprintf(locBit1,"%s",SENDMAIL);
	char SUBJECT[20];
    strcpy(SUBJECT,subj);
	fprintf(locBit4,"%s",SUBJECT);
	char MESSAGE[256];
    strcpy(MESSAGE,msg);
    fprintf(locBit2,"%s",MESSAGE);
	printf("\a");
	fclose(locBit);
	fclose(locBit1);
	fclose(locBit2);
	fclose(locBit3);
	fclose(locBit4);
}


int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}


/* * * * * * * */

/* Accounts Class */

fstream fileout;
fstream filein;




/* User Class */

class User
{
    private:
    char balance[50];
    char facilityFor[50];
    int age;
    char name[50];
    char CNIC[50];
    char dOb[50];
    char accType[50];
    char pass[50];
    char email[50];
    
    public:
	
	
    User()
    {
        strcpy(facilityFor,"You did not withdrawl on last activity!");
    	strcpy(balance,"0");
    }


    char* setDepoBal()
    {
    	fstream fo;
    	fo.open("UserData.dat", ios::out | ios::ate | ios::binary);
    	int temp=atoi(balance);
        int bal=0;
        cout<<"\nEnter your balance to which you are wanting to deposit : ";
        cin>>bal;
        temp=temp+bal;
        char newtemp[10+sizeof(char)];
        sprintf(newtemp, "%d", temp);
        strcpy(balance,newtemp);
        fo.write((char *)this,sizeof(*this));
        fo.close();
        char ch[10+sizeof(char)];
        sprintf(ch, "%d", bal);
        char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\nTotal ");
        strcpy(fourthstr,ch);
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," PKR have been deposited to your account successfully!");
        strcpy(sixthstr,"\n\nThanks.\nRegards:  Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Thanks For Deposit in Fast-Paisa Account\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
        loading();
        cout<<"\n\n\tWe Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail\n";
        return balance;
    }



    char* setwithdrawBal()
    {
    	fstream fn;
    	fn.open("UserData.dat", ios::out | ios::ate | ios::binary);
    	int temp=atoi(balance);
    
        int wbal=0;
        cout<<"\nEnter your balance to which you are wanting to withdraw : ";
        cin>>wbal;
        if(wbal>temp)
        {
        char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\nYou ");
        strcpy(fourthstr,"have");
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," not sufficient Balance!");
        strcpy(sixthstr,"\n\nThanks.\nRegards: Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Thanks For Withdrawl from Fast-Paisa Account\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
         loading();
        cout<<"\n\n\tWe Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail\n";
         return balance;
        }
        else 
        {
        temp=temp-wbal;
        char newtemp[10+sizeof(char)];
        sprintf(newtemp, "%d", temp);
        strcpy(balance,newtemp);
        fn.write((char *)this,sizeof(*this));
        fn.close();
        char ch[10+sizeof(char)];
        sprintf(ch, "%d", wbal);
        char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\nTotal ");
        strcpy(fourthstr,ch);
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," PKR have been Withdrawl from your account successfully!");
        strcpy(sixthstr,"\n\nThanks.\nRegards:  Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Thanks For Withdrawl from Fast-Paisa Account\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
         loading();
        cout<<"\n\n\tWe Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail\n";
         return balance;
        }
        
    }


    void totalBalance()
    {
        char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\nYou have total ");
        strcpy(fourthstr,balance);
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," PKR in your Fast-Paisa bank account!");
        strcpy(sixthstr,"\n\nThanks.\nRegards:  Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Total Balance in your Fast-Paisa Account\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
         loading();
        cout<<"\n\n\tWe Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail\n";
    }

    char* setFacility()
     {
        char fa[50];
        cout<<"\n\tPlease enter a reason why you are wanting to Deposit or with-draw: ";
        cin.sync();
        cin.getline(fa,49);
        strcpy(facilityFor,fa);
        return facilityFor;
     }

    void finalizedBalance()
    {
        int count=0;
        int ch;
        cout<<"\n\t\tWhat do you want from us do you want from us\n\n\t\t1. Deposit amount\n\t\t2. With-Draw amount\n\t\t3. View Balance\n\t\t4. Exit\n\tEnter choice : ";
        cin>>ch;
        if(ch==1)
        {
            setDepoBal();
            cout<<"\n\nPress any key to exit-----";
            getch();
            exit(0);
        }
        else if(ch==2)
        {
            setFacility();
            setwithdrawBal();
            cout<<"\n\nPress any key to exit-----";
            getch();
            exit(0);
        }
        else if(ch==3)
        {
            cout<<"\n\t\tYour Total Balance : "<<balance;
            totalBalance();
            cout<<"\n\nPress any key to exit-----";
            getch();
            exit(0);
        }
        else
        {
        	exit(0);
		}
       

    }


     int setAge()
     {
        int a;
        cout<<"\tEnter age : ";
        cin>>age;
        this->age=age;
        return age;
     }
     char* setName()
     {
        char n[50];
        cout<<"\n\n\tEnter Name : ";
        cin.sync();
        cin.getline(n,49);
        strcpy(name,n);
        return name;
     }
     char* setCnic()
     {
        char C[50];
        cout<<"\tEnter your CNIC : ";
        cin.sync();
        cin.getline(C,49);
        strcpy(CNIC,C);
        return CNIC;
     }
     char* setDOB()
     {
        char d[50];
        cout<<"\tEnter DOB : ";
        cin.sync();
        cin.getline(d,49);
        strcpy(dOb,d);
        return dOb;
     }
     char* setAccountType()
     {
        char aT[50];
        cout<<"\tEnter account type : ";
        cin.sync();
        cin.getline(aT,49);
        strcpy(accType,aT);
        return accType;
     }
     char* setPassword()
     {
        char p[50];
        cout<<"\tEnter a password : ";
        cin.sync();
        cin.getline(p,49);
        strcpy(pass,p);
        return pass;
     }
     char* setEmail()
     {
        char e[50];
        cout<<"\tEnter email : ";
        cin.sync();
        cin.getline(e,49);
        strcpy(email,e);
        return email; 
     }
     
    void getUserData();
    void accountInfo();
    void SaveUser();
    void loginUser();
    void showAllUser();
    void showData();
    void deleteAccount(char *t);
};



void User::getUserData()
{
   setName();
   setAge();
   setCnic();
   setDOB();
   setAccountType();
   setEmail();
   setPassword();
   
}

void User::deleteAccount(char *t)
{
    fstream fin;
    fstream fout;
    fin.open("UserData.dat",ios::in | ios::binary);
    if(!fin)
    {
        cout<<"\nSorry no record Found!";
    }
    else
    {
        fout.open("temp.dat",ios::out | ios::binary);
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if(strcmp(pass,t))
            {
                fout.write((char *)this, sizeof(*this));
            }
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("UserData.dat");
        rename("temp.dat","UserData.dat");

    }

        


}

void User::SaveUser()
{
  fileout.open("UserData.dat",ios::app | ios::binary);
  getUserData();
  fileout.write((char *)this, sizeof(*this));
  fileout.close();
        char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\n\t********Welcome To Fast-Paisa Bank********");
        strcpy(fourthstr,"\nThanks For Registration In Fast-Paisa.");
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr,"If you need any help feel free to contact us!");
        strcpy(sixthstr,"\n\nThanks.\nRegards:  Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Welcome To Fast-Paisa Banking System!\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
        finalizedBalance();

}


void User::loginUser()
{
    int counter;
    char p[50];
    cout<<"\n\t\tEnter your Password for login : ";
    cin.sync();
    cin.getline(p,49);
    system("cls");
    filein.open("UserData.dat",ios::in | ios::binary);
    if(!filein)
    {
        cout<<"\nSorry no record Found!\n";
    }
    else
    {
        filein.read((char *)this, sizeof(*this));
        while (!filein.eof())
        {
            if(!strcmp(pass,p))
            {
            	char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\nA new ");
        strcpy(fourthstr,"Device ");
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr,"was logged in for your Fast-Paisa bank account!");
        strcpy(sixthstr,"\n\nThanks.\nRegards:  Fast Paisa Bank.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"New Login to Fast-Paisa Account\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
        loading();
                showData();
                finalizedBalance();
            }
                 filein.read((char *)this, sizeof(*this));   
        }
        if(counter==0)
        {
            cout<<"\nSorry You are not register!";
            cout<<"\nPress any key to continue-----";
            getch();
            SaveUser();
        }
       
        
    }
    filein.close();
    
    	
    
}


void User::showData()
{
        cout<<"\n\n\t\tName : "<<name<<endl;
        cout<<"\t\tAge : "<<age<<endl;
        cout<<"\t\tEmail : "<<email<<endl;
        cout<<"\t\tCNIC : "<<CNIC<<endl;
        cout<<"\t\tDate Of Birth : "<<dOb<<endl;
        cout<<"\t\tPassword : "<<pass<<endl;
        cout<<"\t\tAccount Type : "<<accType<<endl;
        cout<<"\t\tLast time Reason for with-Drawal money : "<<facilityFor<<endl; 
}

void User::showAllUser()
{
       filein.open("UserData.dat",ios::in | ios::binary);
    if(!filein)
    {
        cout<<"\nSorry NO Record Found!\n";
    }
    else
    {
       filein.read((char *)this, sizeof(*this)); 
       while (!filein.eof())
       {
        cout<<endl<<endl;
        showData();
        filein.read((char *)this, sizeof(*this));
       }
       filein.close();
    }
}

void User::accountInfo()
     {
        int choice;
        cout<<"\n\t\t\tIf you want\n\n\nTo register for an Bank account press 1\nTo login in our bank Fast Paisa press 2\nTo delete account press 3\nIf you are admin press 4\n\n\t\t\tEnter choice :> ";
        cin>>choice;
        if(choice==1)
        {
            SaveUser();  
            cout<<"\n\nPress any key to exit-----";
            getch();
        }
        else if(choice==2)
        {
            loginUser();
            cout<<"\n\nPress any Key to Exit .....";
            getch();
            
        }
        else if(choice==3)
        {
            char t[50];
            cout<<"Enter password to delete your account : ";
            cin.sync();
            cin.getline(t,49);
            deleteAccount(t);
        }
        else if(choice==4)
        {
            int password;
            cout<<"Please enter a password to confirm that you are a admin : ";
            cin>>password;
            if(password==720728)
            {
                showAllUser();
                cout<<"\n\nPress any Key to Exit .....";
                getch();
            }
            else
            {
                cout<<"\nSorry you are not a Admin!";
                accountInfo();
            }
        }
     }




/* Driver Code */

int main()
{
    cout<<"\n\n\n\t\t\t********* WELCOME TO FAST-PAISA BANKING SYSTEM **********\n\n\n";
    User obj;
   obj.accountInfo();
    return 0;
}
