package utils

func DreamTeam(playing22 [22]models.Player) [11]models.Dream11 {
	var dream11 [11]models.Dream
	for i := 0; i < 11; i++ {
		var CREDITS float32
		keeper := 0
		batsmen := 0
		bowler := 0
		allrounder := 0
		var currentTeam models.Team

		// for j := 0; j < 11; j++{
		//     int choosePlayer = rand() % 22 + 1;

		//     while(chooseDifferentPlayer(chosedPlayerNumbers,choosePlayer,j))
		//       choosePlayer = rand() % 22 + 1;

		//     if(choosePlayer <= 11)
		//       homePlayer++;
		//     else
		//        awayPlayer++;

		//     struct player temp;
		//     if(choosePlayer <= 11) { // this is because playerNumber for home team starts from 1 to 11, and 1 is reserved for wk
		//         strcpy(temp.name,home[choosePlayer-1].name);
		//         temp.position =  home[choosePlayer-1].position;
		//         temp.credits =  home[choosePlayer-1].credits;
		//         temp.playerNumber =  home[choosePlayer-1].playerNumber;
		//     }
		//     else {  // similarly playerNumber for away team starts from 12 to 22, and 12 is reserved for wk
		//         strcpy(temp.name,away[choosePlayer-12].name);
		//        temp.position =  away[choosePlayer-12].position;
		//         temp.credits =  away[choosePlayer-12].credits;
		//         temp.playerNumber =  away[choosePlayer-12].playerNumber;
		//     }

		//     switch(temp.position) {
		//         case 0: keeper++;break;
		//         case 1: batsmen++; break;
		//         case 2: allrounder++; break;
		//         case 3: bowler++; break;
		//         default: break;
		//     }

		//     if(keeper > 1) {
		//       keeper--;
		//       j--;
		//       continue;
		//     }
		//     if(batsmen > 5) { // maximum batsmen allowed is 5
		//         batsmen--;
		//         j--;
		//         continue;
		//     }
		//     if(allrounder > 3) { // maximum allrounder can be 3
		//         allrounder--;
		//         j--;
		//         continue;
		//     }
		//     if(bowler > 5) { // maximum bowler = 5
		//         bowler--;
		//         j--;
		//         continue;
		//     }
		//     if(homePlayer > 7) { //max player from one team is 7
		//         homePlayer--;
		//         j--;
		//         continue;
		//     }
		//     if(awayPlayer > 7) {// same as above
		//         awayPlayer--;
		//         j--;
		//         continue;
		//     }

		//     dream11[i][j] = temp;
		//     CREDITS += dream11[i][j].credits;
		//     chosedPlayerNumbers[j] = dream11[i][j].playerNumber;

		// }

		// if(CREDITS > 100 || batsmen < 3 || bowler < 3 || allrounder < 1) { // these are the restrictions
		//     i--;
		//     continue;
		// }

		// int chooseCaptain = rand() % 11;
		// int chooseViceCaptain = chooseCaptain;
		// while(chooseCaptain == chooseViceCaptain) // so that vc and c are not same
		//     chooseViceCaptain = rand() % 11;
		// dream11[i][chooseCaptain].gameCaptain = 1;
		// dream11[i][chooseViceCaptain].gameViceCaptain = 1;
	}
}
