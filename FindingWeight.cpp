#include <iostream>
#include<iomanip>
#include <math.h>

using namespace std;

int main()
{
    double earthAccel, venusAccel, marsAccel, earthMass, venusMass, marsMass, mass;
    string heavy;
    earthAccel = 9.807;
    venusAccel = 8.87;
    marsAccel = 3.7;
    
    cout << "Enter mass in kilograms: " << endl;
    cin >> mass;
    
    if (mass <= 0)
    {
        cout << "Error: mass must be greater than zero" << endl;
        exit(-1);
    }
    
    cout << "Planet" << "\t" << setw(14) << "Weight (N)" << endl;
    
    earthMass = mass * earthAccel;
    venusMass = mass * venusAccel;
    marsMass = mass * marsAccel;
    
    if(earthMass > 1500)
    {
        heavy = "\tThe object is heavy";
    }
    if(earthMass < 5)
    {
        heavy = "\tThe object is light";
    }
    
    
    cout << fixed << setprecision(4) << "\nEarth " << "\t" << setw(14) << earthMass << heavy << endl;
    cout << "Venus " << "\t" << setw(14) << venusMass << endl;
    cout << "Mars" << setw(3) << "\t" << setw(14) << marsMass << endl;

    return 0;
}

