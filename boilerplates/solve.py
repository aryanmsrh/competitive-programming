import sys

def solve():
    # Read a single integer
    # n = int(sys.stdin.readline())
    
    # Read multiple integers on one line
    # a = list(map(int, sys.stdin.readline().split()))
    
    # Read a string
    # s = sys.stdin.readline().strip()
    pass

def main():
    input = sys.stdin.read
    data = input().split()
    if not data:
        return
    # If the problem gives multiple test cases (t):
    # t = int(data[0])
    # ... parse via pointer or standard line-by-line:
    
if __name__ == '__main__':
    # Standard line-by-line fallback for interactive/simple testcases:
    lines = sys.stdin.read().splitlines()
    if lines:
        t = int(lines[0])
        # Iterate test cases