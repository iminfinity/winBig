package utils

import "github.com/iminfinity/dream11/models"

func copyPlayerInfo(player models.Player) models.Player {
	var tempPlayer models.Player

	tempPlayer.Name = player.Name
	tempPlayer.Position = player.Position
	tempPlayer.Credits = player.Credits
	tempPlayer.ID = player.ID

	return tempPlayer
}
