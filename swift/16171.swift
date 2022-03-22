import Foundation
var input = readLine()!
input.removeAll(where: {!$0.isLetter})
print(input.contains(readLine()!) ? 1 : 0)