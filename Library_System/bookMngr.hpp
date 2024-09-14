class BookMngr{
    private:    
        static BookMngr* Instance;
        BookMngr(){}

    public:
        static BookMngr* getInstance();

};