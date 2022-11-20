from pathlib import Path
import os
import nltk
from nltk.stem import WordNetLemmatizer
from nltk.corpus import stopwords

class LinuxPreProcessCSV:

    def __init__(self):

        #Run this block only once for testing... remember to include in final executable
        #nltk.download('punkt')
        #nltk.download('averaged_perceptron_tagger')
        #nltk.download('maxent_ne_chunker')
        #nltk.download('words')
        #nltk.download('state_union')
        #nltk.download('universal_tagset')
        #nltk.download('city_database')
        #nltk.download('maxent_treebank_pos_tagger')
        #print('done with downloads')

        self.lemmatizer = WordNetLemmatizer()
        self.stop_words_set = stopwords.words('english')
        self.custom_stop_words = ["um", "uhm", "uh", "oh", "ok", "turn!"]
        self.stop_words_set = set(self.stop_words_set + self.custom_stop_words)
        self.last_removed_set = set()
    def runPreProcess(self, filename):
        newLines = []
        removeList = ['`','~','!','@','#', '\"', '$','%','^','&','*','(',')','{','}','[',']','|',';',':','.','/','?','<','>']

        path = Path(filename + ".csv")
        with open(path, 'r') as file:
            lines = file.readlines()
            file.close()
        for line in lines:
            copiedLine = line            
            for character in removeList:
                copiedLine = copiedLine.replace(character, "")
            newLines.append(copiedLine)

        Path.unlink(path)
        
        with open(path, "w") as file:
            for line in newLines:
                file.write(line)
            file.close()
        with open("new_" + str(path), "w") as file:
            for line in newLines:
                file.write(self.find_and_replace(line))
            file.close()   


    def find_and_replace(self, sentence):
        dic = {}
        self.last_removed_set = set()
        for sent in nltk.sent_tokenize(sentence):
            for chunk in nltk.ne_chunk(nltk.pos_tag(nltk.word_tokenize(sent))):
                if hasattr(chunk, 'label'):
                    #print(f"{' '.join(c[0] for c in chunk):<35} {chunk.label()}")
                    thing = ' '.join(c[0] for c in chunk)
                    dic[thing] = chunk.label()
                    #print(thing, chunk.label())
        for key in dic:
            sentence = sentence.replace(key, dic[key])
            self.last_removed_set.add(key)
        return sentence

    def remove_punctuation(self, word):
        if word[0].isalpha() == False and word[0].isdigit() == False:
            word = word[1:]
        if len(word) > 0:
            if word[-1].isalpha() == False and word[-1].isdigit() == False:
                word = word[:-1]
        return word


    def preprocesser(self, text, lower, punctuation, named_entity, white_space, stop_words):
        if lower:
            text = text.lower()
        if punctuation:
            text = self.remove_punctuation(text)
        if named_entity:
            text = self.find_and_replace(text)
        if white_space:
            text = text.strip()
        if stop_words:
            for word in text.split():
                if word in self.stop_words_set:
                    text = text.replace(word, "")    
        return text