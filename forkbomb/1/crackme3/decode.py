def decode_file(filename):
    data = open(filename, 'rb').read()
    result = []
    for i in range(1, len(data) + 1, 2):
        cipher_byte = data[i - 1]
        random_byte = data[i]
        result.append(chr(cipher_byte ^ random_byte))
    return ''.join(result)

print(decode_file('encoded_flag3'))