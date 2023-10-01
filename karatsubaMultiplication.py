def karatsubaMultiply(x, y, n):
    if n == 1:
        return x * y
    
    m = n // 2
    
    a = x // (10 ** m)
    b = x % (10 ** m)
    c = y // (10 ** m)
    d = y % (10 ** m)
    
    ac = karatsubaMultiply(a, c, m)
    bd = karatsubaMultiply(b, d, m)
    p = (a + b)
    q = (c + d)
    pq = karatsubaMultiply(p, q, m)
    
    ad_bc = pq - ac - bd
    
    ans = (10 ** (2*m) * ac) + (10 ** m * ad_bc) + bd
    
    return ans

def main():
    
    num1 = input("Enter x: ")
    x = int(num1)
    num2 = input("Enter y: ")
    y = int(num2)
    n = len(num1)
    
    print("Final ans: ", karatsubaMultiply(x, y, n))
    
if __name__ == "__main__":
    main()
