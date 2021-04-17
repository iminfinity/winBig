package models

// Player struct
type Player struct {
	Name              string  `json:"name,omitempty"`
	Credits           float32 `json:"credits,omitempty"`
	Position          int     `json:"position,omitempty"`
	IsGameCaptain     bool    `json:"isGameCaptain,omitempty"`
	IsGameViceCaptain bool    `json:"isGameViceCaptain,omitempty"`
	IsBaised          bool    `json:"isBaised,omitempty"` //true if I want this player to be game captain or vice captain of atleast one team
}