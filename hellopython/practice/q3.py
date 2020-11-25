site = input()
name = site[site.find("/") + 2 :site.find(".")]
password = name[:3] + str(len(name)) + str(name.count('e')) + "!"
print(password)