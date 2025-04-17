//Roue.h
#pragma once // pour éviter les inclusions multiples

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
    
    //getter
        double getZ();
        double getD();
        double getM();
    
    //setter
        void setD(double);
        void setZ(int);
        void setM(double);
};
