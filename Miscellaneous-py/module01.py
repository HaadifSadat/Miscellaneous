
import time as t
di ={
    "apt install beef" : '''
Reading package lists. Done
Building dependency tree Reading state information. Done
The following packages were automatically installed and are no longer required quile-2.0-11bs libbindo-160 Libens export1102 Libdns1100 11bencan 11bestep13 libgdhas libgeos 3.7.0 Libhunspell 16-0 libiries lilac-expertis Libisecciso Libisccfg100 Liblouise Lintumapp2.2 Litv2cd2.02 Liptures 160 Libofs11 Linftal7 tibetfs3g Liban Libopence care). 2
opencv-ingorac3.2 libper15.26 tibpoppler74 11bpoplereo libprotobuf-litele Libprotobuf10 libasis analysis2.14 21 Libogis-cerez 14.21 Thagis core2 18.24 libagis quiz. 14.21 Libogis qu12.15.24 libogis-neturkanalysis2.14.21 Libqgis-server2.14.21 libogispython2, 14.21 Libradare2 2.9 Libradare2-3.0 Libsane extras libsane-extras common libts bund3.12.0 Labunbound Linux-image-4.10.0-kal12-amd64 pp.2-mysql python-any 
Python-capstone python couchabit python-http-parser sython jut python-libenu python pan sythen restkit python socketpost kilprats driz de
Use 'apt autoresve to remove them. The following additional packages will be installed: Tabcattle 1.00
The following tw packages will be installed: upgraded, 8 newly installed, 0 to remove and 9225 not upgraded.

Need to get 3.28 GB of archives.

After this operation, 43.3GB of additional disk space will be used.

Do you want to continue?[Y/N] : 
    '''
}

for i in range(100):
    print()
while(True):
    print("root@user1:~#",end=" ")
    st = input()
    if(st not in di):
        print('''\n {} : The term '{}' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the
spelling of the name, or if a path was included, verify that the path is correct and try again.
At line:1 char:1 '''.format(st))
        t.sleep(100000)
    else:
        print("\n {}",end="".format(di.get(st)))
        op = input()
        
