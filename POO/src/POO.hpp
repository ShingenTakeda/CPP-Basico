#pragma once

class BaseVirtual
{
    public:
        virtual void FOO() = 0;
};

class Base
{
    public:
        void FOO();
    private:
        void SECRET();
    protected:
        void BAR();
};

class PubliClass : public Base
{

};

class ProtectedClass : protected Base
{

};