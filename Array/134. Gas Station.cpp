class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0, startStation = 0, currentGas = 0;
        int n = gas.size();

        for(int i = 0; i < n; i++){
            totalGas += gas[i];
            totalCost += cost[i];
            currentGas += gas[i] - cost[i];
            if(currentGas < 0){
                startStation = i + 1;
                currentGas = 0;
            }
        }

        if(totalCost > totalGas) return -1;
        return startStation;
    }
};
