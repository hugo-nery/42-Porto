import abc


class BattleStrategy(abc.ABC):

	@abc.abstractmethod
	def act(self) -> None:
		pass

	@abc.abstractmethod
	def is_valid(self) -> bool:
		pass
