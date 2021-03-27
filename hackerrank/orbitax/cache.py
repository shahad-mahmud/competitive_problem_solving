from typing import OrderedDict



def get_page(cache, page_key):
    if(page_key not in cache):
        return 1
    cache.move_to_end(page_key)
    return 0

def add_page(cache, key, page, c):
    cache[key] = page
    cache.move_to_end(key)

    if(len(cache) > c):
        cache.popitem(last = False)

a = input()
c = int(a.split()[0])
n = int(a.split()[1])

p = input()
pages = p.split()

cache = OrderedDict()
val = 0

for p in pages:
    v = get_page(cache, p)

    val += v
    if v == 1:
        add_page(cache, p, p, c)

print(val)