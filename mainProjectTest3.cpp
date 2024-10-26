#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

#define ANSI_BOLD "\033[1m"
#define ANSI_RESET "\033[0m"
class RegularUser;
class AdminUser;
char* stringToCharArray(const string& str)
{

    char* charArray = new char[str.length() + 1];
    strcpy(charArray, str.c_str());

    return charArray;
}
class Quiz
{
    friend class AdminUser;

public:
    static int marks;
    void reset_marks()
    {
        marks = 0;
    }

    void validate_answer(char ans, char correct_ans)
    {
        while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D')
        {
            cout << "Invalid input! Please enter a valid option (a, b, c, or d): ";
            cin >> ans;
        }

        if (ans == correct_ans || ans == correct_ans + ('a' - 'A'))
        {
            cout << "Your answer is correct!!!" << endl;
            marks++;
        }
        else
        {
            cout << ans << " is incorrect." << endl;
            cout << correct_ans << " is the correct answer." << endl;
        }
    }

    void view_quiz()
    {
        int i = 0;
        char ans;
        int arr[10] = {0};

        while (i < 10)
        {
            int random;
            do
            {
                random = rand() % 10;
            }
            while (std::find(arr, arr + i, random) != arr + i);
            arr[i] = random;

            switch (random)
            {
            case 0:
                cout << i + 1 << ") What is the largest planet in our solar system?" << endl;
                cout << "a) Earth" << endl;
                cout << "b) Jupiter" << endl;
                cout << "c) Mars" << endl;
                cout << "d) Saturn" << endl;
                cin >> ans;
                validate_answer(ans, 'b');
                break;

            case 1:
                cout << i + 1 << ") Which space agency successfully landed the first human on the moon?" << endl;
                cout << "a) NASA" << endl;
                cout << "b) ESA" << endl;
                cout << "c) Roscosmos" << endl;
                cout << "d) ISRO" << endl;
                cin >> ans;
                validate_answer(ans, 'a');
                break;

            case 2:
                cout << i + 1 << ") What is the name of the telescope that has provided stunning images of distant galaxies and nebulae?" << endl;
                cout << "a) Hubble Space Telescope" << endl;
                cout << "b) Kepler Space Telescope" << endl;
                cout << "c) Chandra X-ray Observatory" << endl;
                cout << "d) James Webb Space Telescope" << endl;
                cin >> ans;
                validate_answer(ans, 'a');
                break;

            case 3:
                cout << i + 1 << ") Which planet is known as the 'Red Planet'?" << endl;
                cout << "a) Venus" << endl;
                cout << "b) Mars" << endl;
                cout << "c) Jupiter" << endl;
                cout << "d) Mercury" << endl;
                cin >> ans;
                validate_answer(ans, 'b');
                break;

            case 4:
                cout << i + 1 << ") In 2015, the New Horizons spacecraft provided the first close-up images of which dwarf planet?" << endl;
                cout << "a) Pluto" << endl;
                cout << "b) Eris" << endl;
                cout << "c) Haumea" << endl;
                cout << "d) Makemake" << endl;
                cin >> ans;
                validate_answer(ans, 'a');
                break;

            case 5:
                cout << i + 1 << ") What is the name of the first artificial Earth satellite, launched by the Soviet Union in 1957?" << endl;
                cout << "a) Explorer 1" << endl;
                cout << "b) Sputnik 1" << endl;
                cout << "c) Vanguard 1" << endl;
                cout << "d) Telstar 1" << endl;
                cin >> ans;
                validate_answer(ans, 'b');
                break;

            case 6:
                cout << i + 1 << ") Which space mission successfully landed the rover 'Curiosity' on Mars in 2012?" << endl;
                cout << "a) Mars Pathfinder" << endl;
                cout << "b) Mars Reconnaissance Orbiter" << endl;
                cout << "c) Mars Science Laboratory" << endl;
                cout << "d) InSight" << endl;
                cin >> ans;
                validate_answer(ans, 'c');
                break;

            case 7:
                cout << i + 1 << ") What is the name of the largest moon of Saturn?" << endl;
                cout << "a) Titan" << endl;
                cout << "b) Europa" << endl;
                cout << "c) Ganymede" << endl;
                cout << "d) Io" << endl;
                cin >> ans;
                validate_answer(ans, 'a');
                break;

            case 8:
                cout << i + 1 << ") Who was the first human to orbit the Earth?" << endl;
                cout << "a) Yuri Gagarin" << endl;
                cout << "b) Alan Shepard" << endl;
                cout << "c) John Glenn" << endl;
                cout << "d) Valentina Tereshkova" << endl;
                cin >> ans;
                validate_answer(ans, 'a');
                break;

            case 9:
                cout << i + 1 << ") What is the name of the famous space telescope launched by NASA in 1990?" << endl;
                cout << "a) Chandra X-ray Observatory" << endl;
                cout << "b) James Webb Space Telescope" << endl;
                cout << "c) Kepler Space Telescope" << endl;
                cout << "d) Hubble Space Telescope" << endl;
                cin >> ans;
                validate_answer(ans, 'd');
                break;

            default:
                break;
            }
            i++;
        }
    }

    Quiz& operator++()
    {
        marks++;
        return *this;
    }
};

int Quiz::marks = 0;

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
        mp["What is a black hole?"] = "A black hole is a region in spacetime where gravity is so strong that nothing—no particles or even electromagnetic radiation such as light—can escape from it.";
        mp["How many planets are there in our solar system?"] = "There are eight planets in our solar system: Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, and Neptune.";
        mp["What is the significance of the Hubble Space Telescope?"] = "The Hubble Space Telescope has provided stunning images and valuable data, contributing to our understanding of the universe. It helped determine the rate of expansion of the universe and provided images of distant galaxies, nebulae, and other astronomical phenomena.";
        mp["How do rockets work in space?"] = "Rockets work based on Newton's third law of motion: for every action, there is an equal and opposite reaction. The rocket expels mass in one direction (exhaust gases), creating a force in the opposite direction that propels the rocket forward.";
        mp["What is the purpose of the International Space Station (ISS)?"] = "The ISS serves as a microgravity and space environment research laboratory, where scientific research is conducted in astrobiology, astronomy, meteorology, physics, and other fields. It also serves as a habitation space for the international crew.";
        mp["What is dark matter?"] = "Dark matter is a form of matter that does not emit, absorb, or reflect light, making it invisible and detectable only through its gravitational effects on visible matter. It constitutes about 85% of the matter in the universe.";
        mp["Explain the concept of time dilation in the theory of relativity."] = "Time dilation is a phenomenon predicted by Einstein's theory of relativity. It states that time passes at different rates for observers in different gravitational fields or moving at different velocities. As an object's velocity increases or it experiences stronger gravity, time appears to pass more slowly for that object.";
        mp["What is the Goldilocks zone in astronomy?"] = "The Goldilocks zone, also known as the habitable zone, is the region around a star where conditions are suitable for liquid water to exist on the surface of an orbiting planet. It is considered crucial for the potential development of life.";
        mp["How are exoplanets discovered?"] = "Exoplanets are discovered through various methods, including the transit method (detecting the slight dimming of a star as a planet passes in front of it), the radial velocity method (measuring the star's wobbling motion caused by an orbiting planet), and direct imaging.";
    }

    void manage_question()
    {
        while (true)
        {
            //cout << "\t\t--------------------------------------------------" << endl;
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
                cout << "Exiting Manage Questions......." << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    void view_class() const
    {
        //cout << "\t\t--------------------------------------------------" << endl;
        cout << "Current Questions:\n";
        int i = 1;
        for (const auto& a : mp)
        {
            cout << i << ". " << a.first << endl;
            i++;
        }
        cout << "--------------------------------------------------" << endl;
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

class Article
{
public:
    map<string, string> mp1;
    map<string, string> mp2;
    Article()
    {
        // initializeMaps();
        mp_1();
        mp_2();
    }

    void mp_1()
    {
        mp1["Yuri Gagarin (1934-1968)"] = "Yuri Gagarin (1934-1968):\n"
                                          "Yuri Gagarin, a Soviet cosmonaut, etched his name in history as the first human to orbit the Earth on April 12, 1961. Aboard the Vostok 1 spacecraft, Gagarin completed one orbit, lasting about 108 minutes. This historic achievement made him an international icon and a symbol of Soviet space prowess during the Cold War era.";

        mp1["Neil Armstrong (1930-2012)"] = "Neil Armstrong (1930-2012):\n"
                                            "Neil Armstrong, an American astronaut, achieved the pinnacle of space exploration as the first person to set foot on the Moon during the Apollo 11 mission on July 20, 1969. Armstrong's famous words, 'That's one small step for [a] man, one giant leap for mankind,' resonated globally, marking a defining moment in human history.";

        mp1["Valentina Tereshkova (born 1937)"] = "Valentina Tereshkova (born 1937):\n"
                "Valentina Tereshkova, a Soviet cosmonaut, became the first woman to travel to space on June 16, 1963, aboard Vostok 6. She orbited the Earth 48 times during her historic mission.";

        mp1["John Glenn (1921-2016)"] = "John Glenn (1921-2016):\n"
                                        "John Glenn, an American astronaut, was the first American to orbit the Earth on February 20, 1962, aboard the Friendship 7 spacecraft. Later in life, he became the oldest person to fly in space at the age of 77 aboard the Space Shuttle Discovery in 1998.";

        mp1["Sally Ride (1951-2012)"] = "Sally Ride (1951-2012):\n"
                                        "Sally Ride was the first American woman to fly in space. On June 18, 1983, she launched aboard the Space Shuttle Challenger as a mission specialist. Ride later became an advocate for science education, particularly for girls.";

        mp1["Chris Hadfield (born 1959)"] = "Chris Hadfield (born 1959):\n"
                                            "Canadian astronaut Chris Hadfield gained fame for his social media presence and musical performances aboard the International Space Station (ISS). His rendition of David Bowie's 'Space Oddity' went viral, showcasing life on the ISS to a global audience.";

        mp1["Kalpana Chawla (1961-2003)"] = "Kalpana Chawla (1961-2003):\n"
                                            "Kalpana Chawla, an Indian-American astronaut, lost her life in the Space Shuttle Columbia disaster in 2003. She had previously flown on the same shuttle in 1997, becoming the first woman of Indian origin in space.";

        mp1["Buzz Aldrin (born 1930)"] = "Buzz Aldrin (born 1930):\n"
                                         "Buzz Aldrin, an American astronaut, was the second person to walk on the Moon during the Apollo 11 mission in 1969. His contributions to space exploration extend beyond his historic lunar walk.";

        mp1["Eileen Collins (born 1956)"] = "Eileen Collins (born 1956):\n"
                                            "Eileen Collins was the first female Space Shuttle pilot and commander. She commanded the Space Shuttle Columbia in 1999 and Discovery in 2005, solidifying her place as a pioneering figure in space history.";

        mp1["Yang Liwei (born 1965)"] = "Yang Liwei (born 1965):\n"
                                        "Yang Liwei is a Chinese astronaut and the first person sent into space by China. On October 15, 2003, he orbited the Earth aboard the Shenzhou 5 spacecraft, marking a significant achievement for China's space program.";
        mp2["Apollo 11 Moon Landing (1969)"] = "Apollo 11 Moon Landing (1969):\n"
                                               "The Apollo 11 mission, led by NASA, successfully landed humans on the Moon on July 20, 1969. Astronauts Neil Armstrong and Buzz Aldrin became the first and second humans to walk on the lunar surface.";
    }
    void mp_2()
    {
        mp2["Hubble Space Telescope (1990)"] = "Hubble Space Telescope (1990):\n"
                                               "Launched in 1990, the Hubble Space Telescope has provided breathtaking images of distant galaxies and nebulae. It has significantly contributed to our understanding of the universe's vastness and age.";

        mp2["International Space Station (ISS) (2000)"] = "International Space Station (ISS) (2000):\n"
                "The ISS, a collaborative effort involving multiple countries, has served as a microgravity and space environment research laboratory since the arrival of the first module in 2000. It continues to facilitate scientific discoveries in space.";

        mp2["Voyager 1 and 2 (1977)"] = "Voyager 1 and 2 (1977):\n"
                                        "Launched in 1977, the Voyager spacecraft have provided invaluable data about the outer planets of our solar system. Voyager 1 became the first human-made object to reach interstellar space.";

        mp2["Mars Rover Missions (ongoing)"] = "Mars Rover Missions (ongoing):\n"
                                               "Various Mars rover missions, such as Spirit, Opportunity, Curiosity, and Perseverance, have explored the Martian surface, providing crucial data about the planet's geology, climate, and potential habitability.";

        mp2["Cassini-Huygens Mission to Saturn (2004-2017)"] = "Cassini-Huygens Mission to Saturn (2004-2017):\n"
                "The Cassini-Huygens spacecraft explored Saturn and its moons, providing detailed images and data during its mission from 2004 to 2017. The Huygens probe successfully landed on Titan, Saturn's largest moon.";

        mp2["SpaceX Falcon 9 Reusability (2015-present)"] = "SpaceX Falcon 9 Reusability (2015-present):\n"
                "SpaceX, founded by Elon Musk, achieved historic milestones by developing reusable rocket technology. The Falcon 9 rocket has been successfully reused multiple times, significantly reducing the cost of space travel.";

        mp2["New Horizons Pluto Flyby (2015)"] = "New Horizons Pluto Flyby (2015):\n"
                "NASA's New Horizons spacecraft conducted a historic flyby of Pluto in 2015, providing the first close-up images and data about the distant dwarf planet. The mission expanded our understanding of the outer solar system.";

        mp2["James Webb Space Telescope (planned launch 2021)"] = "James Webb Space Telescope (planned launch 2021):\n"
                "The James Webb Space Telescope, set to launch in 2021, is designed to be the successor to the Hubble Space Telescope. It aims to study the universe in infrared wavelengths, providing new insights into the cosmos.";

        mp2["Mars Sample Return Mission (planned)"] = "Mars Sample Return Mission (planned):\n"
                "A collaborative mission between NASA and the European Space Agency (ESA), the Mars Sample Return aims to collect and return samples from the Martian surface, potentially containing signs of past life.";
    }
    void mp_1_show()
    {
        cout << "Current Options : " << endl;
        int i = 1;
        for(const auto& a : mp1)
        {
            cout << i << ". " << a.first << endl;
            i++;
        }
        cout << "----------------------------" << endl;
    }
    void mp_2_show()
    {
        cout << "Current Options : " << endl;
        int i = 1;
        for(const auto& a : mp2)
        {
            cout << i << ". " << a.first << endl;
            i++;
        }
        cout << "----------------------------" << endl;
    }
    void manage_mp1()
    {
        while (true)
        {
            //cout << "\t\t--------------------------------------------------" << endl;
            cout << "Select an operation:\n";
            cout << "1.View Article\n2. Add Article\n3. Remove \n0. End\n";
            int operation;
            cin >> operation;

            switch (operation)
            {
            case 1:
                mp_1_show();
                break;
            case 2:
                add_mp1();
                break;
            case 3:
                remove_mp1();
                break;
            case 0:
                cout << "Exiting Astronaut Article........" << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    void add_mp1()
    {
        string newQuestion, newAnswer;
        cout << "Enter the new article: ";
        cin.ignore();
        getline(cin, newQuestion);
        cout << "Enter information about the article: ";
        getline(cin, newAnswer);
        mp1[newQuestion] = newAnswer;
        cout << "Question added successfully." << endl;
    }
    void remove_mp1()
    {
        cout << "Enter the article number to remove: ";
        int questionNumber;
        cin >> questionNumber;

        if (questionNumber <= 0 || questionNumber > mp1.size())
        {
            cout << "Invalid article number. Please try again." << endl;
            return;
        }

        auto it = mp1.begin();
        advance(it, questionNumber - 1);

        cout << "Removing Article........ " << it->first << endl;
        mp1.erase(it);

        cout << "Article removed successfully." << endl;
    }
    void manage_mp2()
    {
        while (true)
        {
            //cout << "\t\t--------------------------------------------------" << endl;
            cout << "Select an operation:\n";
            cout << "1. View Article\n2. Add Article\n3. Remove \n0. End\n";
            int operation;
            cin >> operation;

            switch (operation)
            {
            case 1:
                mp_2_show();
                break;
            case 2:
                add_mp2();
                break;
            case 3:
                remove_mp2();
                break;
            case 0:
                cout << "Exiting Space Exploration Article......" << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    void add_mp2()
    {
        string newQuestion, newAnswer;
        cout << "Enter the new article: ";
        cin.ignore();
        getline(cin, newQuestion);
        cout << "Enter information about the article: ";
        getline(cin, newAnswer);
        mp2[newQuestion] = newAnswer;
        cout << "Question added successfully." << endl;
    }
    void remove_mp2()
    {
        cout << "Enter the article number to remove: ";
        int questionNumber;
        cin >> questionNumber;

        if (questionNumber <= 0 || questionNumber > mp2.size())
        {
            cout << "Invalid article number. Please try again." << endl;
            return;
        }

        auto it = mp1.begin();
        advance(it, questionNumber - 1);

        cout << "Removing Article...... " << it->first << endl;
        mp2.erase(it);

        cout << "Article removed successfully..." << endl;
    }
    void ans_mp1(int input)
    {
        if(input == 0)
        {
            cout << "Exiting Program...." << endl;
            return;
        }
        auto it1 = mp1.begin();
        advance(it1,input-1);
        cout << it1-> second << endl;
    }
    void ans_mp2(int input)
    {
        if(input == 0)
        {
            cout << "Exiting Program...." << endl;
            return;
        }
        auto it2 = mp2.begin();
        advance(it2,input-1);
        cout << it2-> second << endl;
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

    virtual void registration();
    virtual void registration(string);
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
    Article article;
public:
    Quiz quiz;

    void manageQuiz();
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
    void manage_question();

    void answerQuestion();
    //void manageQuiz();
    void manageImage();
    void manageImage(string);
    void manageWebsite();
    void manageUser();
    void manageArticle();
    vector <char *> returnImage();
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
    Quiz quiz;
    AdminUser admin;
    Article article;
    void play_quiz()
    {
        char press;
        do
        {
            quiz.reset_marks();
            cout << "\n\n\t\t******" << endl;
            cout << "\t\tQUIZ SYSTEM" << endl;
            cout << "\t\t******" << endl;
            cout << "\t\tEnter name: ";
            cin.ignore();
            quiz.view_quiz();
            admin.manageQuiz();
            cout << "Press y if you want to continue or any key to terminate" << endl;
            cin >> press;
            system("CLS");
        }
        while (press == 'y' || press == 'Y');
    }
    void login();
    //void playQuiz();
    void viewImage(AdminUser,int);
    void ask_Question() const ;
    void viewArticle()
    {
        //int userInput;
        int ch;
        char ch1;
        do
        {
            cout << "Press 1 to read article about some of the greatest astronauts." << endl;
            cout << "Press 2 to read article about greatest space explorations." << endl;
            cin >> ch;
            if(ch == 1)
            {
                int u_input1;
                int cho;
                article.mp_1_show();
                cout << "Select an Astronaut(1-10)." << endl;
                cin >> u_input1;
                cin.ignore();
                article.ans_mp1(u_input1);
            }
            else if(ch == 2)
            {
                int u_input2;
                int cho2;
                article.mp_2_show();
                cout << "Select a Space Exploration(1-10)." << endl;
                cin >> u_input2;
                cin.ignore();
                article.ans_mp2(u_input2);
            }
            cout << "Do you want to continue?y/n";
            cin >> ch1;
        }
        while(ch1 == 'y' || ch1 == 'Y');
        cout << "Exiting Article class....." << endl;
    }
    void usermenu(AdminUser);
    friend void imagemenu(RegularUser *,AdminUser);
};

// Implementation of functions (dummy implementation)

void User::registration()
{
    int op;
    string pass_con;
    cout<<"Resister to our website with all valid information\n";

    cout << "Enter your name: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin.ignore();
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
        cin.ignore();
        getline(cin,institution);
    }
    cout<<"Enter your User Handle: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin>>userHandle;
    while(true)
    {
        cout<<"Enter your password [at least 8 characters]: [                             ] \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        cin>>password;
        if(password.size()<4)
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

    cin.ignore();
//    if(role=="Admin"){
//    ofstream outfile("admin_info.txt");
//    outfile<<userHandle<<endl<<userName<<" "<<countryName<<" "<<institution;
//    }
// if(role=="Regular_user"){
    ofstream outfile("user_info.txt", ios::app);
    outfile<<userHandle<<endl<<userName<<endl<<countryName<<endl<<institution<<endl<<password<<endl;;
    // }


}
void User::registration(string s)
{
    ifstream infile ("user_info.txt");
    infile>>userHandle>>userName>>countryName>>institution;

}
void User::login()
{
    ifstream inFile("user_info.txt");
    if (!inFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    getline(inFile, userHandle);
    getline(inFile, userName);
    getline(inFile, countryName);
    getline(inFile, institution);
    getline(inFile, password);



    inFile.close();
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
        <<"From "<<institution<< ", "<<countryName<<endl;


}
void RegularUser::login()
{

    cout<<"Welcome Back!!!\n";
    User:: login();
//usermenu();

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
        cout << "Select a question number (1-10) or type '0' to end:" << endl;
        cin >> userInput;
        cin.ignore();
        view_question.ask_question(userInput);
    }
    while (userInput != 0);
}


void imagemenu(RegularUser *R,AdminUser a)
{

    int option;

    while(true)
    {
        cout<<"-----------------------------------------------------\n";
        cout<<"\t\t  Image Gallery\n\n";
        cout<<"Press 0 to exit and corresponding number to view\n";
        int i=1;
        for(auto p: a.printimgmenu)
        {
            cout<<i<<"."<<p;
            i++;
        }
        cout<<endl;
        cout<<"-----------------------------------------------------\n";
        cin>>option;
        if(option==0)
            break;

        if(option >i-1)
        {
            cout<<"Invalid option\n";
            continue;
        }
        R->viewImage(a,option-1);
        system("cls");
        Sleep(2000);
    }
}
void RegularUser::usermenu(AdminUser a)
{
//cout<<"Usermenu\n";
    cout << "Which operation you would like to perform: " << endl;
    cout << "[1] Image" << endl;
    cout << "[2] Quiz" << endl;
    cout << "[3] FAQ" << endl;
    cout << "[4] ARTICLE" << endl;
    cout<<"[5] LOGOUT"<<endl;
    RegularUser r;
    int choice3;
    char ch1;
    cin >> choice3;
    if(choice3 == 1)
    {

        imagemenu(this,a);
        usermenu(a);
    }
    if(choice3 == 2)
    {
        //user->play_quiz();

        r.play_quiz();
        usermenu(a);
    }
    else if(choice3 == 3)
    {
        Question question;
        cout << "*******Here are some Frequently asked Questions******" << endl;
        RegularUser regular(question);
        regular.ask_Question();
        usermenu(a);
    }
    else if(choice3 == 4)
    {
        //Article article;
        cout << "*********ARTICLE MENU*********" << endl;
        RegularUser regular;
        regular.viewArticle();
        usermenu(a);
    }
    else if(choice3 == 5)
    {
        r.logout();
    }

}
void AdminUser::login()
{
    cout<<"Welcome to management!!!\n";
    User::login();
}


void AdminUser::manageImage()
{
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/1ZTgfchv3VBRwy8IgjM3Oq6njIWikbT77/view?usp=sharing"));//assebmly elements
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/13CWKFvW1cW5DYJojHsuv6XFCnt1NSw1Z/view?usp=drive_link"));//SPACEWALk
    img.imgUrl.push_back(stringToCharArray("https://drive.google.com/file/d/17gGwXAYOOI3G9Psf7dGB1vygtO9a8l8B/view?usp=drive_link"));// crewlife
    printimgmenu.push_back("ISS Assembly Elements Image Gallery\n");
    printimgmenu.push_back ("ISS Members Spacewalks Image Gallery\n");
    printimgmenu.push_back ("ISS Crew life on Board Image Gallery\n");
}
void AdminUser::manageImage( string s)
{
    int op;
    cout << "Select an operation:\n";
    cout << "1. Add Image Gallary\n2. Remove Image Gallary\n3.View Image menu\n0. End\n";
    cin>>op;
    string link,menuop;
    RegularUser r;
    switch(op)
    {
    case 0:
        return;

    case 1:

        cout<<"Enter new link to add:\n";
        cin>>link;
        cout<<"Enter new menu option to add:\n";
        cin.ignore();
        getline(cin,menuop);
        img.imgUrl.push_back(stringToCharArray(link));
        printimgmenu.push_back(menuop);
        r.usermenu(*this);
        manageImage("hg");
        break;
    case 3:

        r.usermenu(*this);
        manageImage("hg");
        break;
    case 2:
        int pos;
        cout<<"Enter the position to remove:\n";
        cin>>pos;
        auto it=img.imgUrl.begin();
        advance(it,pos-1);
        img.imgUrl.erase(it);
        auto itt=printimgmenu.begin();
        advance(itt,pos);
        printimgmenu.erase(itt);
        r.usermenu(*this);
        manageImage("hg");
        break;

    }

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
    ifstream inFile("user_info.txt");
    if (!inFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    string handle, name, country, institution,pass;
    while (getline(inFile, handle))
    {
        getline(inFile, name);
        getline(inFile, country);
        getline(inFile, institution);
        getline(inFile, pass);

        // Do something with the read information, like storing it in a vector or map
        cout << "User Handle: " << handle << endl;
        cout << "Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Institution: " << institution << endl;
        cout << "---------------------------" << endl;
    }

    inFile.close();
}

void AdminUser::manageArticle()
{
    int c;
    while(1)
    {
        cout << "Which article you want to manage?" << endl;
        cout << "[1] Manage Austronauts Article." << endl;
        cout << "[2] Manage Space exploration Article." << endl;
        cout << "[3] Exit." << endl;
        cout << "Enter your choice : " << endl;
        cin >> c;
        if(c == 1)
            article.manage_mp1();
        else if(c == 2)
            article.manage_mp2();
        else if(c == 3)
            break;
        else
            cout << "Please Enter correct input." << endl;

    }

}
void AdminUser::manageQuiz()
{
    float percentage = 0;
    cout << "Marks: " << quiz.marks << " out of 10" << endl;
    percentage = 100 * quiz.marks / 10;
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 50)
    {
        cout << "Status: Pass" << endl;
    }
    else
    {
        cout << "Status: Fail" << endl;
    }
}
void AdminUser :: manage_question()
{
    view_questions.manage_question();
}



void Image::viewImage()
{

}
void adminmenu()
{
    AdminUser ADMIN;
    cout << "Which operation you would like to perform: " << endl;
    cout << "[1] Manage Image" << endl;
    cout << "[2] Manage Quiz" << endl;
    cout << "[3] Manage FAQ" << endl;
    cout << "[4] Manage ARTICLE" << endl;
    cout << "[5] LOGOUT" << endl;

    int choice2;
    char ch1;
    cin >> choice2;

    if(choice2 == 1)
    {


        ADMIN.manageImage("hhg");
        adminmenu();
    }
    if(choice2 == 3)
    {
        Question question;
        cout << "*******Manage FAQ MENU******" << endl;
        AdminUser admin(question);
        admin.manage_question();
        adminmenu();
    }
    else if(choice2 == 4) {
                    Article article;
                    cout << "***MANAGE ARTICLE MENU**" << endl;
                    AdminUser admin;
                    admin.manageArticle();
                }
    else if(choice2 == 5)
    {
        ADMIN.logout();
    }

}
int main()
{
    AdminUser ADMIN;
    ADMIN.manageImage();
    User *user;
    char ch;
    int roleChoice,n = 0;

    cout<<"*************Welcome to International SpaceStation Website*************" << endl;
    cout << "Select your role: " << endl;
    cout << " [1] ADMIN " << endl;
    cout << " [2] REGULAR USER " << endl;
    cout << "********************************" << endl;
    cout << "Enter Your choice: " << endl;
    cin >> roleChoice;
    if(roleChoice == 1)
    {
        int choice;
        AdminUser admin;
        user = new AdminUser;
        cout << "\t\t******Admin User Menu******" << endl;
        admin.manageImage();
        cout << "[1] LOG IN" << endl;
        cout << "[2] REGISTER" << endl;
        cout << "*******************************" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        if(choice == 1)
        {
            user->login();
        }
        else if(choice == 2)
        {
            user->registration();
        }
        else
        {
            cout << "Invalid Choice!!!" << endl;
        }
        adminmenu();
    }
    else if(roleChoice == 2)
    {
        user = new RegularUser;
         int choice;
         cout << "\t\t******Regular User Menu******" << endl;
         cout << "[1] LOG IN" << endl;
         cout << "[2] REGISTER" << endl;
         cin >> choice;
         if(choice == 1) {
             user -> login();
         }
         else if(choice == 2) {
             user -> registration();
         }
        RegularUser r;
        r.usermenu(ADMIN);
    }

    return 0;
}
