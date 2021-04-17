package models

// Team struct
type Team struct {
	Players [11]Player `json:"playing11,omitempty"`
}

// Dream11 struct
type Dream11 struct {
	Teams [11]Team
}
