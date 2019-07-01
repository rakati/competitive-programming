import sys

def ft_readfile(file):
    f = open(file, 'r')
    content = f.readlines()
    photos = []
    for e in content:
        photos.append(e.split())
    return photos[1:]

print(ft_readfile("a_example.txt"))