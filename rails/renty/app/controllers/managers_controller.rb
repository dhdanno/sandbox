class ManagersController < ApplicationController
  def show

  end

  def dashboard
  	
  end

  def create

  	@manager = Manager.new(sign_up_params)

  	if @manager.save
      redirect_to home_path, notice:  "Your profile has been successfully updated."
    else
      render action: "edit"
    end

  end



  private
  
    def sign_up_params
      params.require(:manager).permit(:first_name, :last_name, user_attributes: [:email, :password, :password_confirmation])
    end


end
