// Fill out your copyright notice in the Description page of Project Settings.


#include "STExtraPaperCharacter.h"

ASTExtraPaperCharacter::ASTExtraPaperCharacter()
{
    // 禁用3D旋转
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    // 配置2D移动
    GetCharacterMovement()->bConstrainToPlane = true;
    GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, 1.0f, 0.0f)); // 锁定Y轴
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
//    // 蹲下 + 改变碰撞体
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

