#include <iostream>
using namespace std;

class seseorang
{
public:
    // virtual void pesan() = O
    void pesan(){
        cout << "Pesan dari seseorang" << endl;
    }
    };

    class joko :public seseorang {
    public:
        void pesan(){
            cout << "Pesan dari joko" << endl;
        }
    };
    