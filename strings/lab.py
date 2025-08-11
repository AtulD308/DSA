# Hamming Code calculation for given bit positions

# Positions: 1-based index: [c1, c2, d1, c3, d2, d3, d4, c4, d5, d6, d7, d8]
# We'll use 0 as placeholder for check bits initially

# Example data: replace d bits with your actual values
bits = [0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1]  # Example bits, 0's for parity bits

def calculate_parity(bits, parity_position):
    count = 0
    i = parity_position - 1  # Convert to 0-based index
    while i < len(bits):
        # Take parity_position bits, then skip parity_position bits
        block = bits[i:i+parity_position]
        count += sum(block)
        i += 2 * parity_position
    return count % 2  # Even parity

# Calculate each parity bit
bits[0] = calculate_parity(bits, 1)  # c1
bits[1] = calculate_parity(bits, 2)  # c2
bits[3] = calculate_parity(bits, 4)  # c3
bits[7] = calculate_parity(bits, 8)  # c4

# Output results
print("Final 12-bit Hamming codeword:", bits)
print("x (c1) =", bits[0])
print("y (c2) =", bits[1])
