class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var compliments = [Int:Int]()

        for i in 0..<nums.count {
            let compliment = target - nums[i]

            if let j = compliments[compliment]{
                
                return [j, i]
            }
            else {
                compliments[nums[i]] = i
            }
        }
        return [0]
    }
}
