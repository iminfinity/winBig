package main

import (
	"github.com/iminfinity/dream11/utils"
)

func main() {
	homeTeam := utils.ReadData("home")
	awayTeam := utils.ReadData("away")

	dream11 := utils.DreamTeam(homeTeam, awayTeam)

	utils.PrintTeam(dream11)
}
