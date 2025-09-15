#ifndef COMMAND_h
#define COMMAND_h

#include <array>

/*

extern std::array<CommandTrieNodeBase*, 256> g_EmptyChildrenArray;

class CommandTrieNodeBase {
    public:
        virtual std::array<CommandTrieNodeBase*, 256>& getChildren();
        virtual bool hasChildren() const {
            return false;
        }
        virtual bool supportsParam() const {
            return false;
        }
        virtual void invoke() const;
        virtual void paramInvoke(const SafeString& cmd, int paramIndex) const;
};

class CommandTrieNode : CommandTrieNodeBase {
    public:
        std::array<CommandTrieNodeBase*, 256>& getChildren() override {
            return children;
        }

        bool hasChildren() const override {
            return true;
        }

    private:
        std::array<CommandTrieNodeBase*, 256> children;
};

class CommandTrieCommand : CommandTrieNodeBase {
    public:
        using FunctionPtr = void (*)();
        CommandTrieCommand(FunctionPtr commandFunction) : commandFunction(commandFunction) {};
        void invoke() const override;

    private:
        FunctionPtr commandFunction;
};

class CommandTrieParamCommand : CommandTrieNodeBase {
    public:
        using ParamFunctionPtr = void (*)(const SafeString&);
        CommandTrieParamCommand(ParamFunctionPtr commandFunction) 
            : commandFunction(commandFunction) {};
        void paramInvoke(const SafeString& cmd, int paramIndex) const override;

    private:
        ParamFunctionPtr commandFunction;
};
*/

#endif