def collect_defined_vars(code):
            variables = re.findall(r"(\w+) ?=[^=]", code)
            regex = '([a-zA-z()_]+).=(?!=)'
            return variables
        
        # collect_defined_vars()

        def find_var(code):
            '''
            keyword_pat = r'(if[ \t]|elif{ \t]|else:|and[ \t]or[ \t])'
            function_pat = r'(\w+\()|(\))'
            quotes_pat = r'(\"\w.+)'  n
            operators_pat = r'(<|>|-|\+|=|:)'
            numbers_pat = r'(^| \d)
            '''

            regex = r'(\w+\()|(\))|(if[ \t]|elif{ \t]|else:|and[ \t]or[ \t])|(\"\w.+)  n|(<|>|-|\+|=|:)|(^| \d)'
            rep = re.sub(regex, '', code)
            return rep.split()
        
        # find_var()
        used_variable = find_var(code)
        used_variable_set = set(used_variable)
        all_defined_variables_set = set(collect_defined_vars(code))
        number_line= 0

        for line in code.splitlines():
            number_line += 1
            for thing in code:
                if thing:
                    if not used_variable_set.issubset(all_defined_variables_set):
                        code_line_error = number_line
                        raise Exception(f'Type 1 error on line {code_line_error}')
                    else:
                        pass