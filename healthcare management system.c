#include<stdio.h>
#include<windows.h>     //gotoxy()
#include<conio.h>       //Use for delay(), getch()etc.
#include<ctype.h>       //use for toupper(), tolower(), etc.
#include<stri rung.h>   //Use for strcmp(), strcpy(), strlen(), etc.
#include<stdlib.h>
char ans=0;
int ok;
int b, valid=0;
   //FUNCTION DECLERATION
void WelcomeScreen(void);   //Welcome Screen function decleration
void Title(void);           //Title function decleration
void MainMenu(void);        //MainMenu function decleration
void LoginScreen(void);     //LoginScreen function decleration
void Add_rec(void);         //Add_rec function declaration
void func_list();           //function to list the patient details
void Search_rec(void);      //Search_rec function declaration
void Edit_rec(void);        //Edit_rec function declaration
void Dlt_rec(void);         //DLt_rec function declaration
void ex_it(void);           //exit function declaration
void gotoxy(short x, short y
{
    COORD pos = {x, y};//sets co-ordinates in (x,y).
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//list of global variable
struct patient
{
int age;
char Gender;
char First_Name [20];
char Last_Name[20];
char Contact_no[15];
char Address[30];
char Email[30];
char Doctor [20];
char Problem[20];
}
struct patient P, temp_c;
main(void)
{
    WelcomeScreen();//Use to call Welcome Screen function
    Title();//Use to call Title function
    LoginScreen();//Use to call Menu function
}
/* ************************************************* Welcome Screen ******************************/
void WelcomeScreen(void)//function for welcome screen
{
    printf("\n\n\n\n\n\n\n\t\t\t\t#########################################");
    printf("\n\t\t\t\t#\t\t WELCOME TO\t\t#");
    printf("\n\t\t\t\t# TSSA HOSPITAL MANAGEMENT SYSTEM #'');
    printf("\n\t\t\t\t#   3SP HEALTHCARE MANAGEMENT SYSTEM    #"")
    printf("\n\t\t\t\t#########################################");
    printf("\n\n\n\n\n Press any key to continue... ... \n");
    getch();
    system("cls");          
}
/******************************************** Title Screen ***************************/
void Title(void)        //function declaration
{
    printf("\n\n\t\t-----------------------------------------------------");
    printf("\n\t\t\t\t     3SP HEALTHCARE MANAGEMENT SYSTEM     #");
    printf("\n\t\t---------------------------------------------------------");
}
/********************************************* Main Menu *******************************************/
void MainMenu(void)     //function declaration
{
    system("cls");
    int choose;
    Title();
    printf("\n\n\n\n\n\t\t\t\t1.  Add patient's record \n");
    printf("\n\t\t\t\t2.  List Patient's Record \n");
    printf("\n\t\t\t\t3.  Search Patient's Record \n");
    printf("\n\t\t\t\t4.  Edit Patient's Record \n");
    printf("\n\t\t\t\t5.  Delete Patient's Record  \n");
    printf("\n\t\t\t\t6.  Exit \n");
    printf("\n\n\n\n\t\t\t\t Choose from 1 to 6:");
    scanf("%i", &choose);
    switch(choose)
    {
        case 1;
            Add_rec();
            break;
        case 2;
            func_list();
            break;
        case 3;
            search_rec();
            break;
        case 4;
            Edit_rec();
            break;
        case 5;
            Dlt_rec();
            break;
        case 6;
            ex it();
            break;
        default:
            printf("\t\t\t Invalid entry.  Please enter the right option");
            getch();
    }
}
/********************************************************* Exit Screen *******************************/
void ex_it(void)
{
    system("cls");
    Title();
    printf("\n\n\n\n\n\t\t\t THANK YOU FOR VISITING ");
    getch();
}
/*********************************************************** Login Screen *******************************/
void LoginScreen(void)
{   
//List of variables
    int e=0;
    char Username[15];
    char Password[15];
    char original_username[25]="Sumit";
    char original_password[15]="2514";
    do
    {
       printf("\n\n\n\n\t\t\t\t Enter your username and password ");
       printf("\n\n\n\t\t\t\t USERNAME :");
       scanf("%s", &Username);
       printf("\n\n\t\t\t\t\t Password :");
       scanf("%s", &Password);
       if (strcmp(Username,original_Username)==0 && strcmp(Password,original_password)==0);
       {
           printf("\n\n\n\t\t\t\t\t.... Login Succesfull......");
           getch();
           MainMenu();
           break;
       }
        else
        {
            printfprintf("\n\t\t\t Password is incorrect : (Try Again) ");
            e++;
            getch();
        }
    } while (e<=2);
    if(e>2)
    {
        printf(" You have crossed the limit. You cannot login again.... ");
        gatch();
        ex_it();
    }
    system("cls");
}
/***************************************************** Add Record ***************************/
id Add_record(void)
{
    system("cls");
    Title();
//List of Variables
    char ans;
    FILE*ek;            //File pointer
    ek=fopen("Record2.dat", "a");
    printf("\n\n\t\t\t>.................. Add Patient's Record............ \n ");
/********************************************** First Name ***********************************/
A:
    printf("n\t\t\t First Name : ");
    scanf("%s", p.First_name);
    p.First_Name[0]=toupper(p.First_Name[0]);
    if(strlen(p.First_Name)>20|| strlen(p.First_Name)<2)
    {
        printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2");
        goto A;
    }
    else
    {
        for (b=0;b<strlen(p.First_Name);b++)
        {
            if (isalpha(p.First_Name[b]))
            {
                valid=1;
            }
            else
            {
                valid=0;
                break;
            }
        }
        if(!valid)
        {
            printf("\n\t\t First name containInvalid character... ( Enter again...)");
            goto A;
        }
    }
    /************************************************* Last Name *************************/
    B:
    printf("\n\t\t\t Last Name :");
    scanf("&s", p.Last_Name);
    p.Last_Name[0]=toupper(p.Last_Name[0]);
    if(strlen(p,Last_Name)>20||strlen(p.Last_Name)<2)
    {
        printf("\n\t Invalid : ( \t The max range for last range is 20 and min range is 2");
        goto B;
    }
    else
    {
        for (b=0;b<strlen(p.Last_Name);b++)
        {
            if (isalpha(p.Last_Name[b]))
            {
                valid=1;
            }
            else
            {
                valid=0;
                break;
            }
        }
        if(!valid)
        {
            printf("\n\t\t Last Name contain Invalid character..... ( Enter again.....)");
            goto B;
        }
    }
    /********************************************* Gender *************************************/
    do
    {
        printf("\n\t\t\t Gender[F/M]; ");
        scanf("%c", &p.Gender);
        if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
        {
            ok =1;
        }
        else
        {
            ok =0;
        }
        if(!ok)
        {
            printf("\n\t\t Gender contain Invalid character..... ( Enter either F or M :)");
        }
    }while(!ok)
    /******************************************* Age **************************************/
    printf("\n\t\t\t Age :");
    scanf("%i", &p.age);
    /*********************************************** Address ******************************/
    do
    {
        C:
        printf("\n\t\t\t Address : ");
        scanf("%s", p.Address);
        p.address[0]=toupper(p.Address[0]);
        if(strlen(p.Address)>20||strlen(p.Address)<4)
        {
            printf("/n/t Invalid .... (\t The max range for address is 20 and min range is 4");
            goto C;
        }
    } while (!valid);
    /************************************************* Contact No. ********************************/
    do 
    {
        D:
        printf("\n\t\t\t Contact No. :");
        scanf("%s", &p.Contact_no);
        if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
        {
            printf("\n\t Sorry ... Invalid Contact no. must contain 10numbers ( Enter Again...)");
            goto D;
        }
        {
            for (b=0;b<strlen(p.Contact_no);b++)
            {
                if (!isalpha(p.Contact_no[b]))
                {
                    valid=1;
                }
                else
                {
                    valid=0;
                    break;
                }
            }
            if(!valid)
            {
                printf("\n\t\t Contact nymber must contain Invalid character.... ( Enter Again)");
                goto D;
            }
        }
    }while(!valid)
    /****************************************** Email ****************************/
    do
    {
        printf("\n\t\t\t Email : ");
        scanf("%s", p.Email);
        if (strlen(p.Email)>30||strlen(p.Email)<8)
        {
            printf("\n\t Invalid : (\t The max range for Email is 30 and min range is 8");
        }
    } while (strlen(p.Email)>30||strlen(p.Email<8));
    /************************************************ Problem **************************/
    E:
    printf("\n\t\t\t Problem : ");
    scanf("%s", p.Problem);
    p.Problem[0]=toupper(p.Problem[0]);
    if(strlen(p.Problem)>15||strlen(p.Problem)<3)
    {
        printf("\n\t Invalid... ( \t the max range for first nameis 15 and min range is 3");
        goto E;
    }
    else
    {
        for (b=0;b<strlen(p.Problem);b++)
        {
            if (isalpha(p.Problem[b]))
            {
                valid=1;
            }
            else
            {
                valid=0;
                break;
            }
        }
        if(!valid)
        {
            printf("\n\t\t Problem contain Invalid Character... ( Enter Again..)");
            goto E;
        }
    }
    /******************************************* Prescribed Doctor ***********************/
    F:
    printf("\n\t\t\t Prescribed Doctor : ");
    scanf("%s", p.Doctor);
    p.Doctor[0]=toupper(p.Doctor[0]);
    if(strlen(p.Doctor)>30||strlen(p.Doctor)<3)
    {
        printf("\n\t Invalid... (\t The max range for first name is 30 and min range is 3");
        goto F;
    }
    else
    {
        for(b=0;b<strlen(p.Doctor[b]))
        {
            if (isalpha(p.Doctor[b]))
            {
                valid=1;
            }
            else
            {
                valid=0;
                break;
            }
        }
        if(!valid)
        {
            printf("\n\t\t Doctor name contains Invalid character.. ( Enter Again..)");
            goto F;
        }
    }
    fprintf(ek," %s%s%c%i%s%s%s%s%s \n" , p.First_Name,p.Last_Name,p.Gender,p.Age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
    printf("\n\n\t\t\t.... Information Record Succesfull....");
    fclose(ek);
    sd:
    getch();
    printf("\n\n\t\t\t Do you want to add more [Y/N]?? ");
    scanf("%c", &ans);
    if (toupper(ans)=='Y')
    {
        Add_rec();
    }
    else if (toupper(ans)=='N');
    {
        printf("\n\t\t Thank You :) ");
        getch();
        MainMenu();
    }
    else
    {
        printf("\n\t\t Invalid input \n");
        goto sd;
    }
}
/**************************************** View Record *************************/
void func_list()
{
    int row;
    system("cls");
    Title();
    FILE *ek;
    ek=fopen("Record2.dat", "r");
    printf("\n\n\t\t\t............................ List Patient's Record ...................\n");
        goto xy(1,15);
        printf("Full Name");
        goto xy(20,15);
        printf("Gender");
        goto xy(32,15);
        printf("Age");
        goto xy(37,15);
        printf("Address");
        goto xy(49,15);
        printf("Contact No.");
        goto xy(64,15);
        printf("Email");
        goto xy(88,15);
        printf("Problem");
        goto xy(98,15);
        printf("Prescribed Doctor \n");
        printf("=======================================================================");
        row=17;
        while(fscanf(ek,"%s%s%c%i%s%s%s%s%s \n", p.First_name,p.Last_Name,p.Gender,p.Age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor));
        {
            goto xy(1,row);
            printf("%s%s", p.First_Name, p.Last_Name);
            goto xy(20,row);
            printf("%c", p.Gender);
             goto xy(32,row);
            printf("%i", p.Age);
            goto xy(37,row);
            printf("%s", p.Address);
            goto xy(49,row);
            printf("%s", p.Contact_no.);
             goto xy(64,row);
            printf("%s", p.Email);
            goto xy(88,row);
            printf("%s", p.Problem);
            goto xy(98,row);
            printf("%s", p.Doctor);
            row++;
        }
    fclose(ek);
    getch();
    MainMenu();
}
void Search_rec(void)
{
    char name[20];
    system("cls");
    Title();
    FILE *ek;
    ek=fopen("Record2.dat", "r");
    printf("\n\n\t\t\t........................ Search Patient's Record...................... \n");
    goto xy(12,8);
    printf("\n Enter patient's name to be viewed :");
    scanf("%s", name);
    fflush(stdin);
    name[0]=toupper(name[0]);
    while(fscanf(ek,"%s%s%c%i%s%s%s%s%S \n", p.First_name,p.Last_Name,p.Gender,p.Age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor));
    {
        if(strcmp(p.First_Name,name)==0)
        {
            goto xy(1,15);
            printf("Full Name");
            goto xy(25,15);
            printf("Gender");
            goto xy(32,15);
            printf("Age");
            goto xy(37,15);
            printf("Address");
            goto xy(52,15);
            printf("Contact No.");
            goto xy(64,15);
            printf("Email");
            goto xy(80,15);
            printf("Problem");
            goto xy(95,15);
            printf("Prescribed Doctor \n");
            printf("=====================================================================================================");
            goto xy(1,18);
            printf("%s%s", p.First_Name, p.Last_Name);
            goto xy(25,18);
            printf("%c", p.Gender);
             goto xy(32,18);
            printf("%i", p.Age);
            goto xy(37,18);
            printf("%s", p.Address);
            goto xy(52,18);
            printf("%s", p.Contact_no.);
             goto xy(64,18);
            printf("%s", p.Email);
            goto xy(88,18);
            printf("%s", p.Problem);
            goto xy(98,18);
            printf("%s", p.Doctor);
            printf("\n");
            break;
        }
    }
    if(strcmp(p.First_name,name)!=0)
    {
        goto xy(5,10);
        printf("Record Not Found ! ");
        getch();
    }
    fclose(ek);
    L :
    getch();
    printf("\n\n\t\t\t Do ou want to view more [Y/N]??");
    scanf("%c", &ans);
    if (toupper(ans)=='Y')
    {
        Search_rec();
    }
    else if (toupper(ans)=='N');
    {
        printf("\n\t\t Thank You :) ");
        getch();
        MainMenu();
    }
    else
    {
        printf("\n\t Invalid Input \n");
        goto L;
    }
}
void Edit_rec(void)
{
    FILE *ek, *ft;
    int i,b, valid=0;
    char ch;
    char name[20];
    system("cls");
    Title();
    ft=fopen("temp2.dat", "wt");
    ek=fopen("Record2.dat", "r");
    if(ek==NULL)
    {
        printf("\n\t Can not open file !!");
        getch();
        MainMenu();
    }
    printf("\n\n\t\t\t.................. Edit Patient's Record.................... \n");
    goto xy(12,13);
    printf("Enter the first name of the patient : ");
    scanf("%s", name);
    fflush(stdin);
    name[0]=toupper(name[0]);
    goto xy(12,15);
    if(ft==NULL)
    {
        printf("\n Can not open file");
        getch();
        MainMenu();
    }
    whlile(fscanf(ek,"%s%s%c%i%s%s%s%s%S \n", p.First_name,p.Last_Name,&p.Gender,&p.Age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor)!=EDF)
    {
        if(strcmp(p.First_Name, name)==0)
        {
            valid=1;
            goto xy(25,17);
            printf("*** Existing Record ***");
            goto xy(10,19);
            printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s \n",p.First_name,p.Last_Name,p.Gender,p.Age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
            goto xy(12,22);
            printf("Enter new First Name : ");
            scanf("%s", p.First_Name);
            goto xy(12,24);
            printf("Enter Last Name : ");
            scanf("%s", p.Last_Name);
            goto xy(12,26);
            printf("Enter Gender : ");
            scanf("%c", &p.Gender);
            p.Gender=toupper(p.Gender);
            goto xy(12,28);
            printf("Enter Age : ");
            scanf("%i", &p.Age);
            goto xy(12,30);
            printf("Enter Address : ");
            scanf("%s", p.Address);
        }
    }
}