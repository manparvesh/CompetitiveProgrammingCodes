__author__ = 'Man Parvesh'

from PyPDF2 import PdfFileReader

f = open('Civil.pdf', 'rb')
reader = PdfFileReader(f)
contents = reader.getPage(0).extractText().split('\n')
f1 = open('myfile','w')
for i in contents:
    i=i.encode('ascii','ignore')
    f1.write(i) # python will convert \n to os.linesep


contents = reader.getPage(1).extractText().split('\n')
for i in contents:
    i=i.encode('ascii','ignore')
    f1.write(i) # python will convert \n to os.linesep
f1.close() # you can omit in most cases as the destructor will call if
f.close()