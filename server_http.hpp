#include <boost/asio.hpp>
// #include <boost/asio/steady_timer.hpp>

#include <regex>
namespace SimpleWeb {
  namespace regex = std;
}


namespace SimpleWeb {
  namespace asio = boost::asio;

  template <class socket_type>
    class ServerBase {
      protected:
        class Session;

      public:
        class Response : public std::enable_shared_from_this<Response>, public std::ostream { 
        };

        class Content : public std::istream { 
        };

        class Reqest { 
        };

      protected:
        class Connection : public std::enable_shared_from_this<Connection> {};
        class Session {};

      public:
        class Config {};
        Config config;

      private:
        class rergex_orderable : public regex::regex {};
    };

  template <class socket_type>
  class Server : public ServerBase<socket_type> {};

  using HTTP = asio::ip::tcp::socket;
}
