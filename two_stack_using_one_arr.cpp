class TwoStacks:
    def __init__(self, n):
        self.size = n
        self.arr = [0] * self.size
        self.top1 = -1
        self.top2 = self.size

    def push1(self, x):
        if self.top1 < self.top2 - 1:
            self.top1 += 1
            self.arr[self.top1] = x
        else:
            print("Stack Overflow in Stack 1")

    def push2(self, x):
        if self.top1 < self.top2 - 1:
            self.top2 -= 1
            self.arr[self.top2] = x
        else:
            print("Stack Overflow in Stack 2")

    def pop1(self):
        if self.top1 >= 0:
            val = self.arr[self.top1]
            self.top1 -= 1
            return val
        else:
            print("Stack Underflow in Stack 1")
            return -1

    def pop2(self):
        if self.top2 < self.size:
            val = self.arr[self.top2]
            self.top2 += 1
            return val
        else:
            print("Stack Underflow in Stack 2")
            return -1


if __name__ == "__main__":
    ts = TwoStacks(10)

    ts.push1(5)
    ts.push1(10)
    ts.push2(20)
    ts.push2(30)

    print("Popped from Stack 1:", ts.pop1())  # 10
    print("Popped from Stack 2:", ts.pop2())  # 30
