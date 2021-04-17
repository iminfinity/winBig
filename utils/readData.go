package utils

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"os"

	"github.com/iminfinity/dream11/models"
)

func ReadData(team string) models.Team {
	var players models.Team
	jsonFile, err := os.Open("./data/" + team + ".json")
	if err != nil {
		fmt.Println(err)
	}
	defer jsonFile.Close()
	byteValue, err := ioutil.ReadAll(jsonFile)
	if err != nil {
		fmt.Println(err)
	}
	json.Unmarshal(byteValue, &players)

	return players
}
