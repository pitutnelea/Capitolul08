#ifndef MENTOR_H
#define MENTOR_H
#include "Persoana.h"

class Mentor : public Persoana
{
    public:
        Mentor(string, string, string);
        string GetNumeComplet();
        string Activitate();
        void SchimbaMaterie(string);
        void SchimbaMentor(string, string);
        virtual ~Mentor();
    protected:
    private:
};

#endif // MENTOR_H
