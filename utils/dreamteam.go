package utils

import (
	"math/rand"

	"github.com/iminfinity/dream11/models"
)

func DreamTeam(homeTeam, awayTeam models.Team) models.Dream11 {
	var dream11 models.Dream11
	for i := 0; i < 11; i++ {
		var CREDITS float32
		keeper := 0
		batsmen := 0
		bowler := 0
		allrounder := 0
		homePlayer := 0
		awayPlayer := 0

		var currentTeam models.Team
		var chosedPlayerNumbers [11]int

		for j := 0; j < 11; j++ {
			choosePlayer := rand.Intn(22) + 1

			for chooseDifferentPlayer(chosedPlayerNumbers, choosePlayer, j) {
				choosePlayer = rand.Intn(22) + 1
			}

			if choosePlayer <= 11 {
				homePlayer++
			} else {
				awayPlayer++
			}

			var tempPlayer models.Player

			if choosePlayer <= 11 { // this is because playerNumber for home team starts from 1 to 11
				tempPlayer = copyPlayerInfo(homeTeam.Players[choosePlayer-1])
			} else { // similarly playerNumber for away team starts from 12 to 22
				tempPlayer = copyPlayerInfo(awayTeam.Players[choosePlayer-12])
			}

			switch tempPlayer.Position {
			case "keeper":
				keeper++
				break
			case "batsmen":
				batsmen++
				break
			case "allrounder":
				allrounder++
				break
			case "bowler":
				bowler++
				break
			default:
				break
			}

			if keeper > 4 {
				keeper--
				j--
				continue
			}
			if batsmen > 6 { // maximum batsmen allowed is 6
				batsmen--
				j--
				continue
			}
			if allrounder > 4 { // maximum allrounder can be 4
				allrounder--
				j--
				continue
			}
			if bowler > 6 { // maximum bowler = 6
				bowler--
				j--
				continue
			}
			if homePlayer > 7 { //max player from one team is 7
				homePlayer--
				j--
				continue
			}
			if awayPlayer > 7 { // same as above
				awayPlayer--
				j--
				continue
			}

			currentTeam.Players[j] = tempPlayer
			CREDITS += currentTeam.Players[j].Credits
			chosedPlayerNumbers[j] = currentTeam.Players[j].ID

		}

		if CREDITS > 100 || batsmen < 3 || bowler < 3 || allrounder < 1 || keeper < 1 { // these are the restrictions
			i--
			continue
		}

		chooseCaptain := rand.Intn(11)
		chooseViceCaptain := chooseCaptain
		for chooseCaptain == chooseViceCaptain { // so that vc and c are not same
			chooseViceCaptain = rand.Intn(11)
		}

		currentTeam.Players[chooseCaptain].IsGameCaptain = true
		currentTeam.Players[chooseViceCaptain].IsGameViceCaptain = true

		dream11.Teams[i] = currentTeam
	}
	return dream11
}
