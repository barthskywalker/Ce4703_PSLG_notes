#!/bin/bash
#01-06-2017 by Barth O'Keeffe
  ########################################################
  ## 	       Script to automate pushing to git 	 #
  ########################################################

  git add --all --verbose
  #get commit message form user
  echo "Please enter commit message \n"
  read -r Message
  # command to commit to git
  git commit -m "$Message"
  # finally push code
  git push
    