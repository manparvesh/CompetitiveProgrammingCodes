#include <iostream>
#include <queue>

using namespace std;
typedef long long ll;

struct city {
    ll population;
    ll no_of_clinics;
    ll load; /* population assigned per clinic */
};

class cmp_cities {
  public:
    bool operator () (city &city1, city &city2) {
        if (city1.load < city2.load) return true;
        return false;
    }
};

int main() {
    ll  i;
    city temp_city;
    ll no_of_cities, no_of_clinics;
    priority_queue <city, vector<city>, cmp_cities> pq;

    cin >> no_of_cities >> no_of_clinics;

    for (i = 0; i < no_of_cities; i++) {
        cin >> temp_city.population;

        /* assign one clinic per city */
        temp_city.no_of_clinics = 1;

        /* Initial load per clinic is total population of city */
        temp_city.load = temp_city.population;

        pq.push(temp_city);
    }


    /* assign one remaining clinic to the city
     * having highest load (priority_queue is sorted in increasing
     * order) in each iteration to reduce the max load
     */
    for (i = 0; i < (no_of_clinics - no_of_cities); i++) {
        temp_city = pq.top();

        temp_city.no_of_clinics++;
        temp_city.load = temp_city.population / temp_city.no_of_clinics;

        /* population=1001 and clinics=2 then load=501 */
        if (temp_city.population % temp_city.no_of_clinics) temp_city.load++;

        pq.pop();

        /* priority_queue remains sorted in increasing order of load */
        pq.push(temp_city);
    }

    /* Dump the clinic having highest load */
    temp_city = pq.top();
    cout << temp_city.load << endl;

    return 0;
}