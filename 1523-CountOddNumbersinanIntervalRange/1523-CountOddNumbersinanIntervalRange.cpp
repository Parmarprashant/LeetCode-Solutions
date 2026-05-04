// Last updated: 04/05/2026, 20:48:50
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> answer;
5        for(long long i = 1; i<=n; i++){
6            if(i%3==0 && i%5==0){
7               answer.push_back("FizzBuzz");
8            }
9            else if(i%3==0 && i%5!= 0){
10                answer.push_back("Fizz");
11            }
12            else if(i%5 == 0 && i%3 != 0){
13                answer.push_back("Buzz");
14            }
15            else{
16                answer.push_back(to_string(i));
17            }
18        }
19
20        return answer;
21    }
22};