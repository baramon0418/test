function varargout=calc_v_a(varargin)
varargout{1}=varargin{1}/4*varargin{2}*varargin{3}*varargin{3}*cot(pi/varargin{1});
varargout{2}=varargin{1}/2*varargin{3}*varargin{3}*cot(pi/varargin{1})+(varargin{1}*varargin{2}*varargin{3});
end