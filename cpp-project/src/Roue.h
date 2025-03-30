// filepath: /cpp-project/cpp-project/src/Roue.h
// Roue.h
#ifndef Roue_h
#define Roue_h

class Roue{
    private :
        int Z;
        double D;
        double M;
        
    public :
        Roue(double module, int nbDents);
        Roue(int diametre, double module);
        double getZ();
        double getD();
        double getM();
        void setD(double);
        void setZ(int);
        void setM(double);
};

#endif // Roue_h