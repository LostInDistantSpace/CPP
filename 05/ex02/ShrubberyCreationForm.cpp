#include "ShrubberyCreationForm.hpp"

const char*	ShrubberyCreationForm::NoOutFileException::what() const throw()
{
	return "Could not open shrubbery outfile!";
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "Shrubbery Creation Form", "Default Target") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "Shrubbery Creation Form", target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) {
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	ShrubberyFile;
	std::string		file_name;

	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (this->isSigned() == false)
		throw NotSignedException();
	else
	{
		file_name = this->getTarget() + "_shrubbery";
		ShrubberyFile.open(file_name.c_str());
		if (!ShrubberyFile)
			throw NoOutFileException();
		ShrubberyFile <<
		"                                                 .\n"
        "                                      .         ;  \n"
        "         .              .              ;%     ;;   \n"
        "           ,           ,                :;%  %;   \n"
        "            :         ;                   :;%;'     .,\n"
        "   ,.        %;     %;            ;        %;'    ,;\n"
        "     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
        "      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
        "       ;%;      %;        ;%;        % ;%;  ,%;'\n"
        "        `%;.     ;%;     %;'         `;%%;.%;'\n"
        "         `:;%.    ;%%. %@;        %; ;@%;%'\n"
        "            `:%;.  :;bd%;          %;@%;'\n"
        "              `@%:.  :;%.         ;@@%;'\n"
        "                `@%.  `;@%.      ;@@%;\n"
        "                  `@%%. `@%%    ;@@%;\n"
        "                    ;@%. :@%%  %@@%;\n"
        "                      %@bd%%%bd%%:;\n"
        "                        #@%%%%%:;;\n"
        "                        %@@%%%::;\n"
        "                        %@@@%(o);  . '\n"
        "                        %@@@o%;:(.,'\n"
        "                    `.. %@@@o%::;\n"
        "                       `)@@@o%::;\n"
        "                        %@@(o)::;\n"
        "                       .%@@@@%::;\n"
        "                       ;%@@@@%::;.\n"
        "                      ;%@@@@%%:;;;. \n"
        "                  ...;%@@@@@%%:;;;;,..\n";
		ShrubberyFile.close();
	}
}