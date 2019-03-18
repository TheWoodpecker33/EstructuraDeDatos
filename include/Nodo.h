#ifndef NODO_H
#define NODO_H


class Nodo
{
    private:
        char a;
        Nodo* sig;
    public:
        Nodo();
        Nodo(char);
        void newSig(Nodo*);
        void newChar(char);
        char getChar();
        Nodo* getSig();
        virtual ~Nodo();
};

#endif // NODO_H
