//Roue.h
#define Roue_h

class Roue{
    private :
        int Z;
        double D;
        double M;
        
    public :
    //constructeur
        Roue();
        Roue(double module, int nbDents);
        Roue(int diametre, double module);
        
    //destructeur
        ~Roue(void);

        double getZ();
        double getD();
        double getM();
        void setD(double);
        void setZ(int);
        void setM(double);
};