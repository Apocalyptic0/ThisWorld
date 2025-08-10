// Fill out your copyright notice in the Description page of Project Settings.


#include "STExtraPaperCharacter.h"

ASTExtraPaperCharacter::ASTExtraPaperCharacter()
{
    // ����3D��ת
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    // ����2D�ƶ�
    GetCharacterMovement()->bConstrainToPlane = true;
    GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, 1.0f, 0.0f)); // ����Y��
    GetCharacterMovement()->GravityScale = 2.0f;
    GetCharacterMovement()->JumpZVelocity = 1000.f;

}

void ASTExtraPaperCharacter::BeginPlay()
{
    Super::BeginPlay();



}

void ASTExtraPaperCharacter::Jump()
{
    Super::Jump();
}

bool ASTExtraPaperCharacter::CanUseSkill(AElementSkillBase* Skill)
{
    return true;
}

void ASTExtraPaperCharacter::UseSkill(AElementSkillBase* Skill)
{
    Skill->ActivateSkill(this);
}

//void ASTExtraPaperCharacter::Crouch()
//{
//    // ���� + �ı���ײ��
//}
//
//bool ASTExtraPaperCharacter::CanJump()
//{
//    bool IsFalling = GetCharacterMovement()->IsFalling();
//    return !IsFalling;
//}
//
//bool ASTExtraPaperCharacter::CanCrouch()
//{
//    return true;
//}

