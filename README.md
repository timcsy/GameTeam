GameTeam (跑關表產生器)
===

需求
---
基本需求：
- 一個隊伍在同一回合只能去一個關卡
- 同一隊不能同時出現在兩個關卡
- 同一回合只能有兩隊在同一關

考量需求（需要排優先次序）：
- ALL_BATTLE：每一隊都要兩兩對戰到
- CAN_BATTLE_REPRAT：對戰可以重複
- CAN_LEVEL_REPEAT：可以重複玩關卡
- CAN_BATTLE_REPRAT_CONTI：對戰可以重複，而組合可以連續
- CAN_LEVEL_REPEAT_CONTI：可以重複玩關卡，而可以連續重玩同一個
- CAN_TEAM_EMPTY：可以有空隊
- CAN_LEVEL_EMPTY：可以有空關
- CAN_ROUND_EXCEED：最終回合數可以多於預定的
- CAN_ROUND_SHORT：最終回合數可以少於預定的

演算法
---
使用Backtracking

參考資料
---
- https://github.com/ensky/GroundGame-scheduler