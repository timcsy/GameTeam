#include <iostream>
#include <vector>
using namespace std;

enum Consideration {
	ALL_BATTLE, // 兩兩對戰
	CAN_BATTLE_REPRAT, // 對戰可以重複
	CAN_LEVEL_REPEAT, // 可以重複玩關卡
	CAN_BATTLE_REPRAT_CONTI, // 對戰可以重複，而組合可以連續
	CAN_LEVEL_REPEAT_CONTI, // 可以重複玩關卡，而可以連續重玩同一個
	CAN_TEAM_EMPTY, // 可以有空隊
	CAN_LEVEL_EMPTY, // 可以有空關
	CAN_ROUND_EXCEED, // 最終回合數可以多於預定的
	CAN_ROUND_SHORT, // 最終回合數可以少於預定的
	SIZE_OF_CONSIDERATION // Consideration size
};

struct ConsiderationPriority {
	Consideration consideration;
	bool value;
};

int main(int argc, char* argv[]) {
	int roundNum = 6;
	int teamNum = 6;
	int levelNum = 6;
	// status[round][team] = level, level = -1 : haven't determine, level = 0 : empty
	vector< vector< int > > status;
	for (int i = 0; i < roundNum; i++) {
		vector< int > teamvector;
		for (int j = 0; j < teamNum; j++) {
			teamvector.push_back(-1);
		}
		status.push_back(teamvector);
	}

	vector<ConsiderationPriority> priority;
	
	
	return 0;
}