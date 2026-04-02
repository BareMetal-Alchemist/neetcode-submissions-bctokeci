class Solution {
    func plusOne(_ digits: [Int]) -> [Int] {
            var x: Int = 0
            for n in digits {
                x += n
                x *= 10
            }

            x /= 10
            x += 1
            var ans = [Int]()
            
            while x != 0 {
                var n = x%10
                ans.insert(n, at: 0)
                x /= 10
            }
            return ans
    }
}
