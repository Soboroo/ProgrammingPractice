def solution(progresses, speeds):
    size = len(progresses)
    index = 0
    answer = []
    while index != size:
        dist = 0
        for i in range(size):
            progresses[i] += speeds[i]
        while progresses[index] >= 100:
            index += 1
            dist += 1
        answer.append(dist)
    return answer


def main():
    print(solution([93, 30, 55], [1, 30, 5]))


if __name__ == '__main__':
    main()
