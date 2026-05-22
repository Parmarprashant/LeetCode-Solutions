// Last updated: 22/05/2026, 18:44:46
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        double kelvin = celsius + 273.15;
5        double fahre = (celsius * 9/5) + 32;
6
7
8        return {kelvin, fahre};
9    }
10};