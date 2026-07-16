
from .dark_spellbook import dark_spell_allowed_ingredients

def validate_ingredients(ingredients: str) -> str:

	for ing in dark_spell_allowed_ingredients():
		if ing.casefold() in ingredients.casefold():
			return f"{ingredients} - VALID"
	
	return f"{ingredients} - INVALID"
