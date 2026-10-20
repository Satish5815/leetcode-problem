package main

import (
	"strconv"
	"strings"
)

func decodeString(s string) string {
	counts := []int{}
	prefixes := []string{}
	current := ""
	number := 0
	for _, ch := range s {
		if ch >= '0' && ch <= '9' {
			digit, _ := strconv.Atoi(string(ch))
			number = number*10 + digit
		} else if ch == '[' {
			counts = append(counts, number)
			prefixes = append(prefixes, current)
			number = 0
			current = ""
		} else if ch == ']' {
			count := counts[len(counts)-1]
			counts = counts[:len(counts)-1]
			prefix := prefixes[len(prefixes)-1]
			prefixes = prefixes[:len(prefixes)-1]
			current = prefix + strings.Repeat(current, count)
		} else {
			current += string(ch)
		}
	}
	return current
}
