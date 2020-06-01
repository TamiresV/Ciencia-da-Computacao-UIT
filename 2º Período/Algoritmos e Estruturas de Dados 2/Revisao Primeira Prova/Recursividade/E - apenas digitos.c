bool ndigito(char v[])
{
    return (v>='0'&&v<='9')
}
bool digito (char v[])
{
    return digito(v,0);
}
bool digito(char v[],int i)
{
    bool resp=true;
    if(i<strlen(v))
    {
        if(ndigito(v[i])==true)
        {
            resp=digito(v,i+1);
        }
        else
        {
            resp=false;
        }
    }
    return resp;
}
