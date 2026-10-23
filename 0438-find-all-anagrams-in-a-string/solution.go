func findAnagrams(s string, p string) []int {
	if len(p) > len(s) {
		return []int{}
	}

	var need, window [26]int
	for i := 0; i < len(p); i++ {
		need[p[i]-'a']++
		window[s[i]-'a']++
	}

	matches := func() bool {
		for i := 0; i < 26; i++ {
			if need[i] != window[i] {
				return false
			}
		}
		return true
	}

	result := make([]int, 0)
	if matches() {
		result = append(result, 0)
	}
	for right := len(p); right < len(s); right++ {
		window[s[right]-'a']++
		window[s[right-len(p)]-'a']--
		if matches() {
			result = append(result, right-len(p)+1)
		}
	}
	return result
}
