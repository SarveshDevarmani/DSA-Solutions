class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0, altitude = 0;

        for(int i=0; i<gain.size(); i++) {
            altitude += gain[i];

            if(altitude > high) {
                high = altitude;
            }
        }
        return high;
    }
};