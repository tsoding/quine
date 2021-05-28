import sys

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('No input file is provided')
        exit(1)

    input_file_path = sys.argv[1]

    with open(input_file_path, 'r') as f:
        s = f.read()
        for x in s:
            if x == '?':
                for y in s:
                    if y == '\n':
                        print("\\n", end='')
                    elif y == '"':
                        print('\\"', end='')
                    elif y == '\\':
                        print('\\\\', end='')
                    else:
                        print(y, end='')
            else:
                print(x, end='')
