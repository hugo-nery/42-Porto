import abc


class TransformCapability(abc.ABC):

    def __init__(self) -> None:
        super().__init__()
        self.transform_state: bool = False

    @abc.abstractmethod
    def transform(self) -> str:
        self.transform_state = True

    @abc.abstractmethod
    def revert(self) -> str:
        self.transform_state = False
