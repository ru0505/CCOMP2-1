#include <string>
using namespace std;

class v_motor{
    public:
    v_motor(string mar,string com,int fab,string col,int engine){
        Mar=mar;
        Com = com;
        Fab = fab;
        Col = col;
        Engine =engine;
    }
     
        void setmar(string mar){
            Mar = mar;
            }
        string getMar() {
           return Mar;
        }
        void setCom(string com){
            Com =com;
            }
        string getCom() {
           return Com;
        }
        void setfab(int fab){
            Fab = fab;
            }
        int getFab(){
            Fab =Fab;
        }
        void setfab(string col){
            Col = col;
            }
        void setengine(int engine){
            Engine =engine;
            }
        
    

        private:
           
        string Marca;
        string Com;
        string Mar;
        int Fab;
        string Col;
        int Engine;

};
