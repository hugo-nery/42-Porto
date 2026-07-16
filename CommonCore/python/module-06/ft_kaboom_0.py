from alchemy import grimoire

if __name__ == "__main__":

	ingredients = grimoire.light_spellbook.light_spell_allowed_ingredients()
	ingredients = ", ".join(ing for ing in ingredients)

	print("=== Kaboom 0 ===")
	print("Using grimoire module directly")
	print(f"Testing record light spell: "
		f"{grimoire.light_spellbook.light_spell_record("fantasy", "Earth, wind and fire")}")

