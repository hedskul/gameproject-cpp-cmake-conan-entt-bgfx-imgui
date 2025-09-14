## nuke renv
if (requireNamespace("renv", quietly = TRUE)) renv::deactivate()
unlink("renv", recursive = TRUE, force = TRUE)
unlink("renv.lock", force = TRUE)
# rprofile
if (file.exists(".Rprofile")) {
  txt <- readLines(".Rprofile", warn = FALSE)
  writeLines(txt[!grepl("renv/activate\\.R", txt)], ".Rprofile")
}
# disconnect
q(save = "no")

# init
install.packages("renv")               
renv::init(bare = TRUE)  

# include
renv::install(c(
  "tidyverse",     
  "readxl",        
  "reticulate",    
  "knitr",         
  "rmarkdown"      
))

renv::install(c(
  "yaml",     
  "magrittr",        
  "stringi",        
  "stringr",     
  "knitr",         
  "rmarkdown"      
))

#lock
renv::snapshot()  

# if (!requireNamespace("rmarkdown", quietly = TRUE)) install.packages("rmarkdown")
# if (!requireNamespace("renv", quietly = TRUE)) install.packages("renv")
# if (!renv::project()) renv::activate()
# renv::snapshot()








# # if (!requireNamespace("renv", quietly = TRUE)) install.packages("renv")
# #
# # if (!renv::project()) renv::activate()
# 
# required <- c("reticulate", "knitr", "rmarkdown")
# for (pkg in required) {
#   if (!requireNamespace(pkg, quietly = TRUE)) install.packages(pkg)
# }
# 
# # Set global chunk options
# knitr::opts_chunk$set(echo = TRUE)