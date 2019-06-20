#include <iostream>
using namespace std;

int main()
{
int cities, groups;
cin >> cities >> groups;

// Map cities Groups
int *citiesIdentifier = new int[cities];
for(int i=0; i<groups; i++) {
int groupSize;
cin >> groupSize;
for(int j=0; j<groupSize; j++) {
int city;
cin >> city;
citiesIdentifier[city-1] = i;
}
}

int queries;
cin >> queries;

for(int i=0; i<queries; i++) {
int cityA, cityB;
cin >> cityA >> cityB;
int cityAGroup = citiesIdentifier[cityA-1];
int cityBGroup = citiesIdentifier[cityB-1];

int distance = cityAGroup - cityBGroup;
if(distance < 0) distance *= -1;
cout << min(distance, groups-distance) << endl;


}

return 0;
}
