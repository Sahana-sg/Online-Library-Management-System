class LibraryMngr{
    private:    
        static LibraryMngr* Instance;
        LibraryMngr(){}

    public:
        static LibraryMngr* getInstance();
};