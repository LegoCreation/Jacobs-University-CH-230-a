#include <string>

class City{
private:
    std::string cityname;
    int number;
    std::string mayor;
    double area;
public:
    //setters
    void setname(std::string& newcityname);
    void setnumber(int n);
    void setmayor(std::string& newmayor);
    void setarea(double area);
    //getters
    std::string& getcityname();
    int getnumber();
    std::string& getmayor();
    double getarea();
    //service method
    void print();
};