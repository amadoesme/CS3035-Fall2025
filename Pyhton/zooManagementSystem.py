#Programmed: September 14, 2025
#Student Name: Esmeralda Amado
#Description: creating a zoo management system that categorizes
#animals based on their characteristics like species, name, legs 
#and habitat

#dictionary of animals in zoo. Fun fact, listed animals I like
animals = [ {'name': 'Whale Shark', 'species' : 'Rhincodon typus', 'legs' : 'no legs', 'habitat' : 'Tropical and warm seas'},
            {'name' : 'Sifaka Lemur', 'species' : 'Genus Propithecus', 'legs' : 'Two legs', 'habitat' : 'Northwestern Madagascar'},
            {'name' : 'Bernese Mountain Dog', 'species' : 'Mamal', 'legs' : 'four legs', 'habitat' : 'cool mountainous enviorenments'},
            {'name' : 'Green Parrot', 'species' : 'budgerigar', 'legs' : 'Two legs', 'habitat' : 'grasslands'},
            {'name' : 'Panther', 'species' : 'Big Cat Family', 'legs' : 'Four legs', 'habitat' : 'Tropical Forests'}]

#function to show the animals characteristics in order
#used StackOverflow to investigate the f inside the parenthesis. Called f string
#allows variables and expressions to be evaluated inside curly braces.

def print_animal_details(animals):
    print(f"Name: {animal['name']}")
    print(f"Species: {animal['species']}")
    print(f"Legs: {animal['legs']}")
    print(f"Habitat: {animal['habitat']}")
    print("-" * 30) #used CS2011 tips so my output could look more organized

#calling the print_animal_function to output all the info in the dictionary
for animal in animals:
    print_animal_details(animal)


#------------- CODE OUTPUT -----------------------
#eamado3@eamado3-vm:~/test_directory$ touch zooManagementSystem.py
#eamado3@eamado3-vm:~/test_directory$ python3 zooManagementSystem.py
#Name: Whale Shark
#Species: Rhincodon typus
#Legs: no legs
#Habitat: Tropical and warm seas
#------------------------------
#Name: Sifaka Lemur
#Species: Genus Propithecus
#Legs: Two legs
#Habitat: Northwestern Madagascar
#------------------------------
#Name: Bernese Mountain Dog
#Species: Mamal
#Legs: four legs
#Habitat: cool mountainous enviorenments
#------------------------------
#Name: Green Parrot
#Species: budgerigar
#Legs: Two legs
#Habitat: grasslands
#------------------------------
#Name: Panther
#Species: Big Cat Family
#Legs: Four legs
#Habitat: Tropical Forests
#------------------------------

