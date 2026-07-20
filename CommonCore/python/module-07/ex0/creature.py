import abc


class Creature (abc.ABC):

    def __init__(self, c_type: str) -> None:
        self.name = self.__class__.__name__
        self.creature_type = c_type

    @abc.abstractmethod
    def attack(self) -> str:
        pass

    def describe(self) -> str:
        return (f"{self.name} is a {self.creature_type} type Creature")
