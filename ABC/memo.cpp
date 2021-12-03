//英数小文字かの判定
bool IsAlphabetNumericSymbol(string src)
{
    regex pattern("^[a-zA-Z0-9!-/:-@\[-`{-~]+$");
    smatch sm;
    if (regex_match(src, sm, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//英数小文字かの判定
bool IsAlphabetNumber(char src)
{

    //文字が英小文字かどうか判定
    if (src >= 'a' && src <= 'z')
    {
        return true;

        //文字が英大文字かどうか判定
    }
    else if (src >= 'A' && src <= 'Z')
    {
        return false;

        //文字が数字かどうか判定
    }
    else if (src >= '0')
    {
        return true;
    }
}
