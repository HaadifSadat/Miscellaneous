

def find_object(objects : list, point : tuple) -> int:
    for idx, obj in enumerate(objects):
        x, y, z = point
        x_values, y_values, z_values = zip(*obj)
        
        if min(x_values) <= x <= max(x_values) and \
           min(y_values) <= y <= max(y_values) and \
           min(z_values) <= z <= max(z_values):
            return f"Point belongs to object {idx + 1}"
    
    return "Point doesn't belong to any object"

# Example coordinates for objects
object1 = [(9.694780349731445,-14.018527030944824,7.888457298278809), (9.695409774780273,-14.010496139526367,8.959671020507812), (9.674747467041016,-15.895212173461914,9.035609245300293), (9.694960594177246,-15.879796028137207,7.8829569816589355)]
object2 = [(9.34733772277832,8.863290786743164,8.95805549621582), (9.347139358520508,8.886310577392578,7.760686874389648), (9.347257614135742,10.98607349395752,9.000123977661133), (9.368307113647461,10.981321334838867,7.877028465270996)]

# List of objects
objects_list = [object1, object2]
# Point to check
point_to_check = (9.367667198181152,9.8140869140625,8.461943626403809)

# Find the object that contains the point
result = find_object(objects_list, point_to_check)
print(result)
