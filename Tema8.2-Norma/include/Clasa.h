#ifndef CLASA_H
#define CLASA_H

class Clasa
{
    private:
        unsigned short _an;
        char _litera;
        unsigned short _orePeSapt;

    public:
        Clasa();
        Clasa(unsigned short, char, unsigned short);
        void AfiseazaOre();
        void SetOrePeSapt(unsigned short OrePeSapt){_orePeSapt = OrePeSapt;}
        unsigned short GetOrePeSapt(){return _orePeSapt;}
        virtual ~Clasa();

    protected:
};

#endif // CLASA_H
