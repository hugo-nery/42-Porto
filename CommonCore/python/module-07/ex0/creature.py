import abc


class Creature(abc.ABC):

    name: str
    creature_type: str

    @abc.abstractmethod
    def attack(self) -> str:
        pass

    def describe(self) -> str:
        return (f"{self.name} is a {self.creature_type} type Creature")
