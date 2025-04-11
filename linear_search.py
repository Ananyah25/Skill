import random

def my_search(given_array: list[int], key: int) -> int:
    for i in range(len(given_array)):
        match = False
        if given_array[i] == key:
            match = i
            break
    return match

if __name__ == "__main__":
    random.seed(42)
    my_arr = [random.randint(1, 100000) for _ in range(1000000)] # unsorted array
    key = int(input("Enter the value you want to search: "))

    match = my_search(my_arr, key)

    if (match):
        print(f"Found a match at {match}th position.") # Successful search
    else:
        print("The given value doesn't exist in an array.") #Unsuccessful search
