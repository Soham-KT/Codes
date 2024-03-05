import random
import requests


class Wordle:
    def __init__(self):
        # list of all the words
        self.words = []
        response = requests.get('https://raw.githubusercontent.com/charlesreid1/five-letter-words/master/sgb-words.txt')
        data = response.text
        lines = data.split('\n')
        for line in lines:
            self.words.append(line)

        # randomly choosing a word
        self.WORD = random.choice(self.words)
        self.guesses = []
        self.feedbacks = []

    def feedback(self, guessword):
        feedback = []
        for i, letter in enumerate(guessword):
            if letter not in self.WORD:
                feedback.append(0)
            else:
                if letter == self.WORD[i]:
                    feedback.append(1)
                else:
                    feedback.append(2)

        return feedback

    def generate_guess(self, feedback=None):
        raise NotImplementedError("Implement the generate_guess() function first.")

    def run(self):
        feedback = None
        flag = False
        for i in range(10):
            guessword = self.generate_guess(feedback)
            feedback = self.feedback(guessword)
            self.feedbacks.append(feedback)
            self.guesses.append(guessword)

            print("\tGuess #", i + 1, "\t:", guessword, "\tFeedback: ", feedback)

            if guessword == self.WORD:
                flag = True
                print("\t\nSuccess.\tCorrect word: ", guessword, "\tNumber of guesses: ", len(self.feedbacks))
                break

        if not flag:
            print("\tFailed to find correct word within 10 guesses. \t Correct word: ", self.WORD)

        print('\n')


class Game:
    def __init__(self, Solver, N=10):
        self.Solver = Solver
        self.N = N

    def run(self):
        print("Simulating for ", self.N, " words.\n")
        for i in range(self.N):
            solver = self.Solver()
            print("WORD #[", i + 1, "/", self.N, "]")
            solver.run()


class Solver(Wordle):
    def __init__(self):
        super().__init__()

    def generate_guess(self, feedback=None):
        possible_words = []

        # If it's the first guess, pick a random word
        if not feedback:
            guess = random.choice(self.words)
        else:
            # Otherwise, narrow down the list of possible words based on the feedback
            for word in self.words:
                if len(word) == len(feedback):
                    valid_word = True
                    for i, letter in enumerate(word):
                        if feedback[i] == 1 and letter != self.guesses[-1][i]:
                            valid_word = False
                        elif feedback[i] == 2 and letter == self.guesses[-1][i]:
                            valid_word = False
                        elif feedback[i] == 0 and letter == self.guesses[-1][i]:
                            valid_word = False
                    if valid_word:
                        possible_words.append(word)

            # If there are possible words, pick a random one. Otherwise, pick a random word from the original list

            if possible_words:
                best_case = []
                for word in possible_words:
                    if word not in self.guesses:
                        best_case.append(word)
                guess = random.choice(best_case)
            else:
                guess = random.choice(self.words)

        return guess


if __name__ == "__main__":
    game = Game(Solver, N=10)
    game.run()
