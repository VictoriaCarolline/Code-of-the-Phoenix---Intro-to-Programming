def create_full_name(first_name, last_name):
    full_name = first_name.upper() + " " + last_name.upper()
    return full_name

result = create_full_name("Neil", "Armstrong")
print(result)