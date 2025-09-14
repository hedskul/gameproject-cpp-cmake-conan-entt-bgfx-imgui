statistical-analysis-notes-r-reticulate-python-quarto-starter-template
================
hedskul
2025-09-14

## REQUIREMENTS

CPP

## README is created using rmarkdown, knitr, and renv

This is an R Markdown format used for publishing markdown documents to
GitHub. When you click the **Knit** button all R code chunks are run and
a markdown file (.md) suitable for publishing to GitHub is generated.

1: Install R <https://cran.rstudio.com/>

2: Install RStudio RStudio requires R 3.6.0+. Choose a version of R that
matches your computer’s operating system.
<https://posit.co/download/rstudio-desktop/>

3 Recreate RStudio environment. RStudio: File -\> Open Project Browse to
README.Rproj

**File - Open Project**

4 R Console:

``` r
install.packages("renv")
renv::restore()
```

## Requirements

    wsl --install

## Installation guide

``` bash
# hello world
```

# python interop

# create/point to a Python env

# then in R:

# reticulate::py_config()

## Including Code

You can include R code in the document as follows:

``` r
summary(cars)
```

    ##      speed           dist       
    ##  Min.   : 4.0   Min.   :  2.00  
    ##  1st Qu.:12.0   1st Qu.: 26.00  
    ##  Median :15.0   Median : 36.00  
    ##  Mean   :15.4   Mean   : 42.98  
    ##  3rd Qu.:19.0   3rd Qu.: 56.00  
    ##  Max.   :25.0   Max.   :120.00

## Including Plots

You can also embed plots, for example:

![](figs/pressure-1.png)<!-- -->

Note that the `echo = FALSE` parameter was added to the code chunk to
prevent printing of the R code that generated the plot.

# `{r a} # R #`

# `{python b} # Python #`

# `{dot c} # GraphViz #`

# `{mermaid d} # Mermaid #`

# `{bash e} # Bash #`

# `{julia f} # Julia #`

# `{Rcpp g} # Rcpp #`

# `{sql connection=} # SQL #`

# `{stan output.var=} # Stan #`
