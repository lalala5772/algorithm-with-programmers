#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map <string, int> score_map;
    int score = 0;

	for (int i = 0; i < name.size(); i++) {
		score_map[name[i]] = yearning[i];
	}

	for (int i = 0; i < photo.size(); i++) {
		score = 0;
		for (int j = 0; j < photo[i].size(); j++) {
			score += score_map[photo[i][j]];
		}
		answer.push_back(score);
	}
    
    
    return answer;
}
