# Using DST to generate C++ Headers

DST is used to parse string templates, and generate code accordingly given a set of variables.

Imagine generating a complex piece of code, you don't want to use strings concatenations to generate that code, this process gives several problems:

- Unreadability
- Unmaintainability
- Hard to extend
- Error prone

DST is created to make generating text easier, by specifying templates, which can be translated in various representations, whereas as a C++ Header. This tutorial will show you how one can generate these headers, and how one can use them.

## Stage 0; Making sure we can use DST

Before starting it is required to install DST and Deamer External.

### Installing Deamer External

Install deamer external first, you can this by going to this repo: https://github.com/Deruago/DeamerExternal

And following the instructions shown in that repo.

## Installing DST

Install DST after you have obtained Deamer External. You can install DST by following the instructions at this repo: https://github.com/Deruago/DeamerStringTemplate

## Stage 1; Defining a template

We will take a simple example, lets take this: "generating a default C++ class given the class name and directory-path".

We always start by defining the rough structure of the code we want to generate:

```C++
#ifndef {{header_guard}}
#define {{header_guard}}

namespace {{namespace}}

/*! \class {{class_name}}
 *
 *  \brief {{description}}
 *
 *  \note This class has been auto-generated
 */
class {{class_name}}
{
    // Private members
    private:
    
    // Public members
    public:
    	static constexpr auto class_name = {{class_name}};
    
    // Public member functions
    public:
    {{class_name}}() = default;
    virtual ~{{class_name}}() = default;
    
    {{class_name}}(const {{class_name}}&) = delete;
    {{class_name}}({{class_name}}&&) noexcept = delete;
    
    {{class_name}}& operator=(const {{class_name}}&) = delete;
    {{class_name}}& operator=({{class_name}}&&) noexcept = delete;
    
    // Private member functions
    private: 
};

}
#endif // {{header_guard}}
```

As you can see there are several spots empty:

- header_guard
- namespace
- class_name
- description

So can start further defining them in the abstraction file:

```DST
{{header_guard_base}} = <{{directory_path.Underscore}}_{{class_name}}_h>
{{header_guard}} = <{{header_guard_base.Upper}}>

{{namespace}} = <{{directory_path.DoubleColon}}>
```

## Stage 2; Generating our C++ Header

Now we defined our template, we want to generate a C++ header that we can use to generate code following our  template.

We can do this by using the DST executable:

 ```bash
 DST ./class_header.dst ./class_header.setting.dst
 ```

