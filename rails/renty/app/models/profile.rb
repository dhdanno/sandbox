class Profile < ActiveRecord::Base

	belongs_to :user
	accepts_nested_attributes_for :user

end
