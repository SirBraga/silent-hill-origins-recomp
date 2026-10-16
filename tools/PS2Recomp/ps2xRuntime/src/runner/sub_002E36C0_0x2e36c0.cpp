#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E36C0
// Address: 0x2e36c0 - 0x2e37c0
void sub_002E36C0_0x2e36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E36C0_0x2e36c0");
#endif

    switch (ctx->pc) {
        case 0x2e36e8u: goto label_2e36e8;
        case 0x2e36f4u: goto label_2e36f4;
        case 0x2e36fcu: goto label_2e36fc;
        default: break;
    }

    ctx->pc = 0x2e36c0u;

    // 0x2e36c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e36c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e36c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e36cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e36ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e36d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e36d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E36D8u;
    {
        const bool branch_taken_0x2e36d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e36d8) {
            ctx->pc = 0x2E36F4u;
            goto label_2e36f4;
        }
    }
    ctx->pc = 0x2E36E0u;
    // 0x2e36e0: 0xc0b8ed0  jal         func_2E3B40
    ctx->pc = 0x2E36E0u;
    SET_GPR_U32(ctx, 31, 0x2E36E8u);
    ctx->pc = 0x2E36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36E0u;
    // 0x2e36e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3B40u, 0x2E36E0u, 0x2E36E8u)) {
        return;
    }
    ctx->pc = 0x2E36E8u;
label_2e36e8:
    // 0x2e36e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36ec: 0xc0b8ed0  jal         func_2E3B40
    ctx->pc = 0x2E36ECu;
    SET_GPR_U32(ctx, 31, 0x2E36F4u);
    ctx->pc = 0x2E36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36ECu;
    // 0x2e36f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3B40u, 0x2E36ECu, 0x2E36F4u)) {
        return;
    }
    ctx->pc = 0x2E36F4u;
label_2e36f4:
    // 0x2e36f4: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2E36F4u;
    SET_GPR_U32(ctx, 31, 0x2E36FCu);
    ctx->pc = 0x2E36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36F4u;
    // 0x2e36f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2E36F4u, 0x2E36FCu)) {
        return;
    }
    ctx->pc = 0x2E36FCu;
label_2e36fc:
    // 0x2e36fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e3700: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2e3700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2e3704: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3704u;
    {
        const bool branch_taken_0x2e3704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3704) {
            ctx->pc = 0x2E3708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3704u;
            // 0x2e3708: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3734u;
            goto label_2e3734;
        }
    }
    ctx->pc = 0x2E370Cu;
    // 0x2e370c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2e370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e3710: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e3714: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2e3714u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3718: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2e3718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2e371c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2e371cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2e3720: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e3720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e3724: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2e3724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2e3728: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2e3728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2e372c: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x2e372cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3730: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e3734:
    // 0x2e3734: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e3738: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3738u;
    {
        const bool branch_taken_0x2e3738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3738) {
            ctx->pc = 0x2E373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3738u;
            // 0x2e373c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3750u;
            goto label_2e3750;
        }
    }
    ctx->pc = 0x2E3740u;
    // 0x2e3740: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2e3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e3744: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2e3744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x2e3748: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x2e3748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x2e374c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2e374cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2e3750:
    // 0x2e3750: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2e3750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2e3754: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2e3754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2e3758: 0x80620301  lb          $v0, 0x301($v1)
    ctx->pc = 0x2e3758u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x5C0301u));
    // 0x2e375c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e3760: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e3760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e3764: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2e3764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2e3768: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2e3768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e376c: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x2e376cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e3770: 0xa6000044  sh          $zero, 0x44($s0)
    ctx->pc = 0x2e3770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3774: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2e3774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2e3778: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e3778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e377c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e3780: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2e3780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2e3784: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2e3784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2e3788: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e3788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e378c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e378cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2e3790: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2e3790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2e3794: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2e3794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2e3798: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2e3798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2e379c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2e379cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2e37a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2e37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2e37a4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2e37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2e37a8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2e37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2e37ac: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2e37acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2e37b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e37b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e37b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e37b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e37b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37B8u;
        // 0x2e37bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37C0u;
}
