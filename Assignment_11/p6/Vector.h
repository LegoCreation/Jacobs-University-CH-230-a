class vector{
    private:
        int size; //size of vector
        double *value; //pointer vector
    public:
        vector(); //default constructor
        vector(double*, int); //paratmetric constructor
        vector(const vector&); //copy constructor
        ~vector(); //destructor
        int getsize(); //getter
        double* getvector(); //getter
        void setsize(int); //setter
        void setvector(double*); //setter
        void print() const; //printing method
        double norm(); //norm calculation
        double sp(const vector); //scalar product
        vector add(const vector) const; //add
        vector diff(const vector) const; //difference
};
