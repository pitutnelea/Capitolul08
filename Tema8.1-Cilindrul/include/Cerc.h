#ifndef CERC_H
#define CERC_H

class Cerc
{
    private:
        double _raza;

    public:
        Cerc();
        Cerc(double);
        double Arie();
        void SetRaza(double raza){_raza = raza;}
        double GetRaza(){return _raza;}
        virtual ~Cerc();

    protected:
};

#endif // CERC_H
