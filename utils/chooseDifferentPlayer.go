package utils

func chooseDifferentPlayer(chosedPlayerNumbers [11]int, chosedPlayer, size int) bool {
	for i := 0; i < size; i++ {
		if chosedPlayerNumbers[i] == chosedPlayer {
			// If required number is found
			return true
		}
	}
	return false
}
