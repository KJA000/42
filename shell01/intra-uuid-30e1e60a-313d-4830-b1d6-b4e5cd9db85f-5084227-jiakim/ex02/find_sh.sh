printf '%s\n' $(find . -type f -name "*.sh" -execdir basename '{}' .sh ';')
