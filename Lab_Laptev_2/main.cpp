#include <iostream>
#include <math.h>
using namespace std;
class Pair
{
private:
    int _p_1;
    int _p_2;
public:
    void Input_First()
    {
        cin >> _p_1;
    }
    void Input_Second()
    {
        cin >> _p_2;
    }
    int Composition_Pn()
    {
        int _composition = _p_1 * _p_2;
        return _composition;
    }
    void Displey_Pair()
    {
        cout << _p_1 << " " << _p_2 << " " << Composition_Pn() << endl;
    }
};
class RightAngled: public Pair
{
private:
    int _cat_1;
    int _cat_2;
public:
    void Input_Cat(int _comand)
    {
        switch (_comand) {
            case 1:
                cin >> _cat_1;
                break;
            case 2:
                cin >> _cat_2;
                break;
        }
    }
    void Input_Comand(int _comand)
    {
        switch (_comand) {
            case 1:
                Input_First();
                Displey_Pair();
                break;
            case 2:
                Input_Second();
                Displey_Pair();
                break;
            case 3:
                Input_Cat(1);
                Displey_RightAngled();
                break;
            case 4:
                Input_Cat(2);
                Displey_RightAngled();
                break;
        }
    }
    double Gp_Result()
    {
        double _p_3 = sqrt(pow(_cat_1, 2)+pow(_cat_2, 2));
        return _p_3;
    }
    double Square_pr()
    {
        double _S_pr = (double(_cat_1) * double(_cat_2)) /2;
        return _S_pr;
    }
    void Displey_RightAngled()
    {
        cout << _cat_1 << " " << _cat_2 << " " << Gp_Result() << " " << Square_pr() << endl;
    }
};
int main()
{
    RightAngled _Object;
    int _comand = 0;
    _Object.Input_First();
    _Object.Input_Second();
    _Object.Input_Cat(1);
    _Object.Input_Cat(2);
    _Object.Displey_Pair();
    _Object.Displey_RightAngled();
    for (;;)
    {
        cin >> _comand;
        if(_comand != 0)
        {
            _Object.Input_Comand(_comand);
        }
        else {break;}
    }
    return 0;
}
