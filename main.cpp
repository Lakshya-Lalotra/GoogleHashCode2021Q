
#include <unordered_map>

#include <bits/stdc++.h>
#define long long int lli
#define endl "\n"

using namespace std;


typedef struct Street
{
    int B, E, L;
    string streetName;
    
    void read(){
        cin >> B >> E;
        cin >> streetName;
        cin >> L;
    }
}street_t;

typedef struct Car
{
    int P;
    vector<string> path;

    void read()
    {
        cin >> P;
        for ( int i = 0; i < P; i++)
        {
            string streetName;
            cin >> streetName;
            path.push_back(streetName);
        }
    }

}car_t;

class Solution
{
public:


    // all intersections with one
    void TryA(unordered_map<int, unordered_map<string, int>>& intersections)
    {
        printIntersections(intersections);
    }


    void solve( vector<car_t>& cars, vector<street_t>& streets,  
        unordered_map<int, unordered_map<string, int>>& intersections)
    {
        // later
    }

private:

    void printIntersections(
        unordered_map<int, unordered_map<string, int>>& intersections)
    {
        // traverse the map to print it
        cout << (int) intersections.size() << endl;
        for ( auto& [id, umapStreetTime] : intersections )
        {
            cout << id << endl;
            cout << (int) umapStreetTime.size() << endl;
            for ( auto& [streetName, timeInGreen] : umapStreetTime )
            {
                cout << streetName << " " << timeInGreen << endl;
            }
        }
    }
};

int main ()
{
    freopen("inputs/f.txt", "r", stdin);
    freopen("outputs/f2.txt", "w", stdout);

    lli D, I, S, V, F;
    cin >> D >> I >> S >> V >> F;
    vector<street_t> streets(S);
    unordered_map<int, unordered_map<string, int>> intersections;

    for ( street_t& street: streets )
    {
        street.read();
        #ifdef DEBUG
        cout << street.B << " " << street.E << " " \
        << street.streetName << " " << street.L << endl;
        #endif
        intersections[street.E][street.streetName] = 1;
    }

    vector<car_t> cars(V);
    for ( car_t& car: cars )
    {
        car.read();
        #ifdef DEBUG
        cout << car.P << " ";
        for ( const string& pathName: car.path ) cout << pathName << " ";
        cout << endl;
        #endif
    }

    Solution sol;
    sol.TryA(intersections);

    return 0;
}
