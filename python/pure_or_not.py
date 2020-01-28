import math


def pure_or_not_1(n1, n2):
    if n1 > 0:
        n1 -= 4
        return max(n1, n2)
    return n2


class PureOrNot2:
    _x = 1

    def pure_or_not_2(self, n):
        return self._x + n


def pure_or_not_3(s):
    if s:
        return f"Hello, {s}"
    else:
        return "Hello, World!"


def pure_or_not_4(s):
    if s:
        print(f"Hello, {s}")
    else:
        print("Hello, World!")


class PureOrNot5:
    x = 1

    class Total:
        def __init__(self, total):
            self.total = total

    def pure_or_not_5(self, running_total):
        running_total.total += self.x
        return running_total


def pure_or_not_6(n):
    if n > 0:
        return math.sqrt(n)
    else:
        return 0


def pure_or_not_7():
    x = input()
    return f"They said: {x}"
