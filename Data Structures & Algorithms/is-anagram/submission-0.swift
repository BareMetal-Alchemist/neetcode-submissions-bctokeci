class Solution {
    func isAnagram(_ s: String, _ t: String) -> Bool {
        if s.count != t.count {
            return false
        }
        var freq1 = [Character: Int]()
        var freq2 = [Character: Int]()
        
        for (c1, c2) in zip(s, t) {
            freq1[c1, default: 0] += 1
            freq2[c2, default: 0] += 1
        }

        for c in s {
            if freq1[c] != freq2[c] {
                return false
            }
        }
        

        return true
    }
}
