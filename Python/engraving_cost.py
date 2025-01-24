def cost_of_project(engraving, solid_gold):
    cost = solid_gold * (100 + 10*len(engraving)) + (not solid_gold)*(50+7*len(engraving))
    return cost

def cost_of_project_kaggle(engraving, solid_gold):
    cost = solid_gold * (100 + 10 * len(engraving)) + (not solid_gold) * (50 + 7 * len(engraving))
    return cost

angel_ring = cost_of_project("Charlie+Denver", False)
print("The cost of the angel's ring engraving is: ", angel_ring)


