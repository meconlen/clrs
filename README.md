# Introduction

This repo is a template repo that can be used to start a LaTeX document repo. The repo is designed to support automatically building and releasing versions of documents to support iterative design processes. 

This will give you a LaTeX document template that builds a document with the following features:

* Ttile Page
* Versioning History
* Table of Contents
* List of listings (using the lstlistings package)
* List of tables
* Chapters and Sections
* Footnotes
* Appendices 
* Definition of Acronyms
* Glossary 
* Bibliography
* Index

This makes for a rather complete document with all the features a reader could hope for. 

# Getting Started

## LaTeX

To compile LaTeX files locally find a TexLive distribution. On Linux this is usually a package your package manager can install. On Mac the best option is [MacTex](https://www.tug.org/mactex/); this also includes the BibDesk program for managing BibTeX bibliographies. On Windows you want [MikTex](https://miktex.org/). 

## The Repo

To get started create a new repo in Github and use this repo as the template. You can use this as-is however you may wish to chnage filenames. 

### Document filename

If you wish to change the document filename change the name of `document.tex` to the file name you wish. When you do this you should change the reference to `document.pdf` in `.github/workflows/build_document.yaml` and `.github/workflows/create_release.yaml`. 

The bibliography is managed by BibTex in the file `document.bib`. If you wish to change the name of this file you should change the reference to this file in `design.tex`. 

The build systme will automatically name the PDF file to have the same name as the `.tex` file with the extention changed. 

## Building the document

### Local Builds

On Linux use `latexmk -pdf` to build the document. On Mac using TeXShop that ships with MacTex use the steps in [this TeX Stackexchange](https://tex.stackexchange.com/questions/127788/cant-get-latexmk-to-work-in-texshop). On MikTeX you're on your own. 

### Github Action

If you edit your file and push changes to the `main` or `dev` branch then a Github action will build the file for you and produce an artifact that you can download. If you push to any other branch you can run the action manually. 

# Further Information

The best introduction on LaTeX is [The Not So Short Introduction to LaTeX](https://tobi.oetiker.ch/lshort/lshort.pdf). You can learn not only the details of how to accomplish tasks in LaTeX but also understand the context and motivations of design choices. 

There is an excellent [LaTeX Wikibook](https://en.wikibooks.org/wiki/LaTeX). 

Overleaf is an online LaTeX system which has begun to produce [excellent documentation](https://www.overleaf.com/learn). NB: While there may be great temptation to use Overleaf for it's easse of use and features it is not suitable for Akamai Confidential information which is pretty much everything we produce. 
 
