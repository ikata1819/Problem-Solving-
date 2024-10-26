#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

#define ANSI_BOLD "\033[1m"
#define ANSI_RESET "\033[0m"
class RegularUser;
char* stringToCharArray(const string& str)
{

    char* charArray = new char[str.length() + 1];
    strcpy(charArray, str.c_str());

    return charArray;
}

class Question
{
private:
    map<string, string> mp;

public:
    Question()
    {
        view_question();
    }

    void view_question()
    {
        mp["What is the distance to the nearest star?"] = "The nearest star, Proxima Centauri, is about 4.24 light-years away.";
        mp["What is a black hole?"] = "A black hole is a region in space where gravity is so strong that nothing, not even light, can escape from it.";
        mp["How many planets are there in our solar system?"] = "There are eight planets in our solar system: Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, and Neptune.";
        mp["How do rockets work?"] = "Rockets work on the principle of action and reaction. They expel mass in one direction, and the rocket moves in the opposite direction.";
        mp["What is dark matter?"] = "Dark matter is a hypothetical form of matter that is believed to make up approximately 27% of the universe. It does not emit, absorb, or reflect light and is detected through its gravitational effects on visible matter.";
    }

    void manage_question()
    {
        while (true)
        {
            cout << "\t\t--------------------------------------------------" << endl;
            cout << "Select an operation:\n";
            cout << "1. View Questions\n2. Add Question\n3. Remove Question\n0. End\n";
            int operation;
            cin >> operation;

            switch (operation)
            {
            case 1:
                view_class();
                break;
            case 2:
                add_question();
                break;
            case 3:
                remove_question();
                break;
            case 0:
                cout << "Exiting manage_questions." << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    void view_class() const
    {
        cout << "\t\t--------------------------------------------------" << endl;
        cout << "Current Questions:\n";
        int i = 1;
        for (const auto& a : mp)
        {
            cout << i << ". " << a.first << endl;
            i++;
        }
        cout << "\t\t--------------------------------------------------" << endl;
    }

    void add_question()
    {
        string newQuestion, newAnswer;
        cout << "Enter the new question: ";
        cin.ignore();
        getline(cin, newQuestion);
        cout << "Enter the answer to the question: ";
        getline(cin, newAnswer);
        mp[newQuestion] = newAnswer;
        cout << "Question added successfully." << endl;
    }

    void remove_question()
    {
        cout << "Enter the question number to remove: ";
        int questionNumber;
        cin >> questionNumber;

        if (questionNumber <= 0 || questionNumber > mp.size())
        {
            cout << "Invalid question number. Please try again." << endl;
            return;
        }

        auto it = mp.begin();
        advance(it, questionNumber - 1);

        cout << "Removing Question: " << it->first << endl;
        mp.erase(it);

        cout << "Question removed successfully." << endl;
    }

    void ask_question(int questionNumber) const
    {
        if (questionNumber == 0)
        {
            cout << "Exiting program." << endl;
            return;
        }
        auto it = mp.begin();
        advance(it, questionNumber - 1);

        cout << "Answer: " << it->second << endl;
    }
};


class Image
{

public:
    vector <char *> imgUrl;
    void viewImage();
    vector <char *> getUrlvec()
    {
        return imgUrl;
    }
};
class User
{
private:
    string userName;
    string password;
    string userHandle;
    string countryName;
    string institution;
    string profession;
    string position;
protected:
    string role;
public:

    void registration();
    void registration(string);
    virtual void login();
    void logout();
    void showInfo();
};
class AdminUser : public User
{
private:
    Image img;
    Question & view_questions;
    vector <string> printimgmenu;

public:

    AdminUser() : view_questions(*(new Question()))
    {
        // Additional initialization if needed
        //role_initialize();
    }

    AdminUser(Question& questions) : view_questions(questions)
    {
        // Additional initialization if needed
        //role_initialize();
    }

    void login();
    void manage_question()
    {
        view_questions.manage_question();
    }

    void answerQuestion();
    void manageQuiz();
    void manageImage();
    void manageImage(string,string);
    void manageWebsite();
    void manageUser();
    void manageArticle();
    vector <char *> returnImage();
    void adminmenu();
    friend void imagemenu(RegularUser *,AdminUser);

};

class RegularUser : public User
{
private:
    int badge;
    const Question& view_question;

public:
    RegularUser() : view_question(*(new Question()))
    {
        // Additional initialization if needed
        //role_initialize();
    }
    RegularUser(const Question& questions) : view_question(questions)
    {
        // Additional initialization if needed
        //role_initialize();
    }

    void login();
    void playQuiz();
    void viewImage(AdminUser,int);
    void ask_Question() const ;
    void viewArticle();
    void usermenu(AdminUser);
    friend void imagemenu(RegularUser *,AdminUser);
};


class Quiz
{
public:
    void viewQuiz();
};



class Article
{
public:
    void viewArticle();
};

// Implementation of functions (dummy implementation)

void User::registration()
{
    int op;
    string pass_con;
    cout<<"Resister to our website with all valid information\n";
    cout << "Enter your name: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";

    getline(cin,userName);
    cout<<"Enter your country name: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";

    getline(cin,countryName);
    cout<<"You are entering for \n"
        <<"Press 1 : Educational purpose\n"
        <<"Press 2 : Professional purpose\n";
    cin>>op;

    if(op==1)
    {
        profession="Student";
        cout<<"Enter your School Name: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        cin.ignore();
        getline(cin,institution);
    }
    else
    {
        profession="Job/Business Holder";
        cout <<"Enter your Workplace Name: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        getline(cin,institution);
    }
    cout<<"Enter your User Handle: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin>>userHandle;
    while(true)
    {
        cout<<"Enter your password [at least 8 characters]: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        cin>>password;
        if(password.size()<8)
        {
            cout<<"Password too small\n";
            continue;
        }
        while(true)
        {
            cout<<"Confirm your password: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
            cin>>pass_con;
            if(password==pass_con)
                break;
            else
                cout<<"Password didn't match\n";
        }
        break;
    }
    cout<<"Congratilations!!! Resistration Completed.\n";

//    if(role=="Admin"){
//    ofstream outfile("admin_info.txt");
//    outfile<<userHandle<<endl<<userName<<" "<<countryName<<" "<<institution;
//    }
// if(role=="Regular_user"){
    ofstream outfile("user_info.txt");
    outfile<<userHandle<<endl<<userName<<endl<<countryName<<endl<<institution;
    // }


}
void User::registration(string s)
{
//    if(s=="Admin"){
//    ifstream infile ("user_info.txt");
// infile>>userHandle>>userName>>countryName>>institution;
//    }
//    else{
    ifstream infile ("user_info.txt");
    infile>>userHandle>>userName>>countryName>>institution;
    //}
}
void User::login()
{
    string handle,pass;
    cout<<"Enter userhandle and password to login\n";
//    cout<<"What are you loging in as?\n"
//        <<"Press 1 : Admin\n"
//        <<"Press 2 : Regular User\n";
//    cin>>op;
//    if(op==1)
//        role="Admin";
//    else
//        role="Regular User";
    while(true)
    {
        cout<<"Enter userhandle :\n";
        cin>>handle;
        cout<<"Enter password :\n";
        cin>>pass;
        if(handle!=userHandle)
        {
            cout<<"Incorrect User Handle\n";
            continue;
        }
        if(pass!=password)
        {
            cout<<"Incorrect Password\n";
            continue;
        }
        break;
    }
    cout<<"Login Successful\n";

}

void User::logout()
{
    int op;
    cout<<"Do You Want To Logout?\n"
        <<"Press 1 to logout\n"
        <<"Press 2 to continue\n";
    cin>>op;
    if(op==1)
    {
        exit(0);
    }


}

void User::showInfo()
{
    cout<<"\n\t\t\t\t*-*-*-*-*-*-*-*-*-* Your Profile *-*-*-*-*-*-*-*-*-*\n\n"
        <<ANSI_BOLD<<userHandle<<ANSI_RESET<<endl<<endl
        <<userName<<endl
        <<"From "<<institution<< " , "<<countryName<<endl;


}
void RegularUser::login()
{

    cout<<"Welcome Back!!!\n";
    User:: login();
//usermenu();

}
void RegularUser::playQuiz()
{
    // Implementation
}

void RegularUser::viewImage(AdminUser a,int i)
{

    vector <char *> v=a.returnImage();
    const char* link = v[i];
    ShellExecute(NULL, "open", link, NULL, NULL, SW_SHOWNORMAL);
}

void RegularUser::ask_Question() const
{
    int userInput;
    do
    {
        view_question.view_class();
        cout << "Select a question number (1-5) or type '0' to end:" << endl;
        cin >> userInput;
        cin.ignore();
        view_question.ask_question(userInput);
    }
    while (userInput != 0);
}


void RegularUser::viewArticle()
{
    // Implementation
}
void imagemenu(RegularUser *R,AdminUser a)
{

    int option;

    while(true)
    {
        cout<<"-----------------------------------------------------\n";
        cout<<"\t\t  Image Gallery\n\n";

        for(auto p: a.printimgmenu)
        {
            cout<<p;
        }
        cout<<"-----------------------------------------------------\n";
        cin>>option;
        if(option==0)
            break;
        R->viewImage(a,option-1);
        system("cls");
        Sleep(2000);
    }
}
void RegularUser::usermenu(AdminUser a)
{
//cout<<"Usermenu\n";

    imagemenu(this,a);
}
void AdminUser::login()
{

}


void AdminUser::answerQuestion()
{
    // Implementation
}

void AdminUser::manageQuiz()
{
    // Implementation
}

void AdminUser::manageImage()
{
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/1ZTgfchv3VBRwy8IgjM3Oq6njIWikbT77/view?usp=sharing"));//assebmly elements
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/13CWKFvW1cW5DYJojHsuv6XFCnt1NSw1Z/view?usp=drive_link"));//SPACEWALk
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/17gGwXAYOOI3G9Psf7dGB1vygtO9a8l8B/view?usp=drive_link"));// crewlife
    printimgmenu.push_back("Press 0 to exit Image Gallery\n");
    printimgmenu.push_back("Press 1 to view ISS Assembly Elements Image Gallery\n");
    printimgmenu.push_back ("Press 2 to view ISS Members Spacewalks Image Gallery\n");
    printimgmenu.push_back ("Press 3 to view ISS Crew life on Board Image Gallery\n");
}
void AdminUser::manageImage(string link, string menuop)
{
    img.imgUrl.push_back(stringToCharArray(link));
    printimgmenu.push_back(menuop);
}
vector <char *> AdminUser::returnImage()
{
    return img.imgUrl;
}
void AdminUser::manageWebsite()
{
    // Implementation
}

void AdminUser::manageUser()
{
    // Implementation
}

void AdminUser::manageArticle()
{
    // Implementation
}
void AdminUser :: adminmenu()
{

}
void Quiz::viewQuiz()
{
    // Implementation
}

void Image::viewImage()
{

}

void Article::viewArticle()
{
    // Implementation
}


int main()
{
    AdminUser aa;
    aa.manageImage();

    RegularUser r;
    User u;
    User *ptr;
    ptr=&r;

    r.registration("Hghgh");
    r.showInfo();
    r.usermenu(aa);
    system("cls");

//     cout<<"*************Welcome to International SpaceStation Website*************\n"
//    <<"Press 1 to Resister\n"
//    <<"Press 2 to login\n";
//    int option;
//    cin>>option;
//    switch(option){
//    case 1:
//
//    }
//
//

    Question questions;
    RegularUser admin(questions);
    admin.ask_Question();

    return 0;
}
