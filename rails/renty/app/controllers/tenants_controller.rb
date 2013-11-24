class TenantsController < ApplicationController
 
  def new

  	@tenant = Tenant.new

  end

  def create

  	@tenant = Tenant.new(sign_up_params)

  	if @tenant.save
      redirect_to home_path, notice:  "Your profile has been successfully updated."
    else
      render action: "edit"
    end

  end

  


  private
  
    def sign_up_params
      params.require(:tenant).permit(:first_name, :last_name, user_attributes: [:email, :password, :password_confirmation])
    end

end
