func checkValidString(s string) bool {
    low, high := 0, 0
    for _, ch := range s {
        switch ch {
        case '(':
            low++
            high++
        case ')':
            low--
            high--
        case '*':
            low--
            high++
        }
        if high < 0 {
            return false
        }
        if low < 0 {
            low = 0
        }
    }
    return low == 0
}
