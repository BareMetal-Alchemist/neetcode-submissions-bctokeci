class Solution {
    func hasDuplicate(_ nums: [Int]) -> Bool {
        var list: Set<Int> = []

        for n in nums {
            if !list.contains(n) {
                list.insert(n)
            }
            else {
                return true
            }
        }
        return false
    }
}
