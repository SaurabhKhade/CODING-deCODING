class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        long training = 0, energy_required=0;
        for(int i=0; i<energy.size(); i++) {
            energy_required += energy[i];
            if(initialExperience <= experience[i]) {
                training += experience[i] - initialExperience + 1;
                initialExperience += experience[i] + (experience[i] - initialExperience + 1);
            } else {
                initialExperience += experience[i];
            }
        }
        if(energy_required - initialEnergy + 1 > 0) training += energy_required - initialEnergy + 1;
        return training;
    }
};