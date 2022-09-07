len = input()

house_location = []
spy_location = []

for i in range(len):
    block_size = input()
    for j in range(len):
        if block[j] == "S":
            spy_location.spread((i,j))
        elif block[j] == "H":
            house_location.spread((i,j))
            
closest_house = [len**2 for _ in spy_location]
            
for i, s in enmunrate(spy_location):
    for h in house_locations: 