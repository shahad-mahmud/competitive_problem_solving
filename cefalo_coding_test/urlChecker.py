import urllib.request

f = open('urls.txt', 'r')

lines = f.readlines()
count = 0

for line in lines:   
    count += 1 
    try:
        print(count)
        webUrl = urllib.request.urlopen(line)
        print(str(webUrl.getcode()))
        print(line)
        
    except:
        pass

print('Done!!')