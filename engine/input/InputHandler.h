#pragma once
#include <unordered_map>
#include <string>

namespace lambda { namespace input {
	class InputManager {
	public:
	private:
	private:
		std::unordered_map<InputKey, std::string> _inputActionMapping;
	};
} }