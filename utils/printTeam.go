package utils

import (
	"fmt"
	"strings"

	"github.com/iminfinity/dream11/models"
)

func PrintTeam(dream11 models.Dream11) {
	for i := 0; i < 11; i++ {
		fmt.Printf("\n Team %d \n", i+1)
		currentTeam := dream11.Teams[i]
		fmt.Printf("------------------------------------------------")
		fmt.Println("------------------------------------------------")
		for j := 0; j < 11; j++ {
			currentPlayer := currentTeam.Players[j]
			fmt.Printf("%s \t\t %s \t", currentPlayer.Name, strings.Title(currentPlayer.Position))

			if currentPlayer.IsGameCaptain {
				fmt.Printf("Captain")
			}
			if currentPlayer.IsGameViceCaptain {
				fmt.Printf("Vice Captain")
			}

			fmt.Printf("\n")
		}
		fmt.Printf("------------------------------------------------")
		fmt.Println("------------------------------------------------")
	}
}
