#include <string>
#include <cstring>
#include <stdbool.h>
class TournamentMember {
private:
    char fn[36], ln[36], dob[11];
    double height;
    int age;
    static std::string location; //static location
public:
    //constructors and destructor
    TournamentMember();
    TournamentMember(char *nfn, char* nln, char* ndob, double nh, int na);
    TournamentMember(const TournamentMember&);
    ~TournamentMember();

    //setters
    inline void setdob(const char *a){
        unsigned int i = 0;
        while (i < std::strlen(a) && i < 11){
            this->dob[i] = a[i];
            i++;
        }
        this->dob[10] = '\0';
    }
    inline void setln(const char *a){
        unsigned int i = 0;
        while (i < std::strlen(a) && i < 36){
            this->ln[i] = a[i];
            i++;
        }
        this->ln[i] = '\0';
    }
    inline void setfn(const char *a){
        unsigned int i = 0;
        while (i < std::strlen(a) && i < 35){
            this->fn[i] = a[i];
            i++;
        }
        this->fn[i] = '\0';
    }
    inline void setheight(double a){this->height = a;}
    inline void setage(int a){this->age = a;}
    inline void setlocation(std::string a){location = a;}//location changing

    //getters
    inline char* getln(){return this->ln;}
    inline char* getfn(){return this->fn;}
    inline char* getdob(){return this->dob;}
    inline double getheight(){return this->height;}
    inline int getage(){return this->age;}
    inline std::string getlocation(){return location;}

    //service method
    void print() const;
}; 

class Player : public TournamentMember{
private:
    int playernumber;
    std::string position;
    int goal;
    bool left;
public:
    Player();
    Player(char*, char*, char*, double, int, int, std::string, int, bool);
    Player(const Player&);
    ~Player();
    //setters
    void setnumber(int a){playernumber = a;}
    void setposition(std::string a){position = a;}
    void setleft(bool a){left = a;}

    //getters
    int getnumber(){return playernumber;}
    std::string getposition(){return position;}
    bool getleft(){return left;}

    //other methods
    void print_player();
    void goal_increment(){goal++;}
};