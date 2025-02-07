#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > func(vector<vector<int> > teams) {
    // you have to implement the func() only
    int maxTeamEliminations = 0;
    int n = teams.size();
    vector<pair<int,int> > totalAndMax(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < teams[i].size(); j++){
            totalAndMax[i].first += teams[i][j];
            if(teams[i][j] > totalAndMax[i].second)
                totalAndMax[i].second = teams[i][j];
        }
        if(totalAndMax[i].first > maxTeamEliminations)
            maxTeamEliminations = totalAndMax[i].first;
    }
    int maxInWinningTeam = 0;
    for(int i = 0; i < n; i++)
        if(totalAndMax[i].first == maxTeamEliminations && totalAndMax[i].second > maxInWinningTeam)
            maxInWinningTeam = totalAndMax[i].second;
    
    vector<vector<int> > winningTeams;
    for(int i = 0; i < n; i++){
        if(totalAndMax[i].first == maxTeamEliminations && totalAndMax[i].second == maxInWinningTeam){
            vector<int> temp;
            temp.push_back(i+1); temp.push_back(maxTeamEliminations); temp.push_back(maxInWinningTeam);
            winningTeams.push_back(temp);
        }
    }
    return winningTeams;
}

int main() {
    // initial code 
    vector<vector<int> > teams;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int team_size;
        cin >> team_size;
        vector<int> team(team_size);
        for (int j = 0; j < team_size; j++) {
            cin >> team[j];
        }
        teams.push_back(team);
    }
    // you have to implement the func() only
    vector<vector<int> > result = func(teams);

    // print the result(please don't modify this)
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2];
        } else {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        }
    }   
    // end of initial code
    return 0;
}