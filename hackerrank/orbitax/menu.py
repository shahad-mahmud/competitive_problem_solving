class Node():
    def __init__(self, name):
        self.vertixs = []
        self.name = name 

def build_tree(root, menu_name, parent):
    if parent == '0':
        node = Node(menu_name)
        # node.name = menu_name
        root.vertixs.append(node)
    
    
    
n = int(input())
root = Node('root')

level = {}
while(n > 0):
    line = input()
    items = line.split()

    menu = items[0]
    parent = items[1]

    # build_tree(root, menu, parent)
    
    # if parent == '0':
    #     level[menu] = 0
    #     print(menu)
    
    # else:
    #     l = level[parent] + 1
    #     level[menu] = l

    #     res = "\t" * l + menu
    #     print(res)


    n-=1
