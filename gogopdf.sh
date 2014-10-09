if [ "$#" -gt "0" ]
then echo "CAP"$1; pdflatex -c-style-errors -output-directory=output -aux-directory=aux $1; fi
if [ "$#" -eq "0" ]
then echo "TESIS"; pdflatex -c-style-errors -output-directory=output -aux-directory=aux tesis; fi