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

// Function: sub_00200A98
// Address: 0x200a98 - 0x200b78
void sub_00200A98_0x200a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200A98_0x200a98");
#endif

    switch (ctx->pc) {
        case 0x200b18u: goto label_200b18;
        case 0x200b24u: goto label_200b24;
        default: break;
    }

    ctx->pc = 0x200a98u;

    // 0x200a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x200aa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x200aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x200aa4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x200aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x200aa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x200aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x200aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200ab4: 0x24423818  addiu       $v0, $v0, 0x3818
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14360));
    // 0x200ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200abc: 0x24633848  addiu       $v1, $v1, 0x3848
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14408));
    // 0x200ac0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x200ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x200ac4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x200ac8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x200ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x200acc: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x200accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x200ad0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x200ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x200ad4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x200ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x200ad8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x200ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x200adc: 0x8cc22cd0  lw          $v0, 0x2CD0($a2)
    ctx->pc = 0x200adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CD0u));
    // 0x200ae0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x200AE0u;
    {
        const bool branch_taken_0x200ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AE0u;
        // 0x200ae4: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ae0) {
            ctx->pc = 0x200B18u;
            goto label_200b18;
        }
    }
    ctx->pc = 0x200AE8u;
    // 0x200ae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x200aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200af0: 0x26452cc0  addiu       $a1, $s2, 0x2CC0
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11456));
    // 0x200af4: 0xacc32cd0  sw          $v1, 0x2CD0($a2)
    ctx->pc = 0x200af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11472), GPR_U32(ctx, 3));
    // 0x200af8: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
    // 0x200afc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x200afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x200b00: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x200b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x200b04: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x200b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x200b08: 0xae402cc0  sw          $zero, 0x2CC0($s2)
    ctx->pc = 0x200b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11456), GPR_U32(ctx, 0));
    // 0x200b0c: 0x24840948  addiu       $a0, $a0, 0x948
    ctx->pc = 0x200b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2376));
    // 0x200b10: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x200B10u;
    SET_GPR_U32(ctx, 31, 0x200B18u);
    ctx->pc = 0x200B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B10u;
    // 0x200b14: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x200B10u, 0x200B18u)) {
        return;
    }
    ctx->pc = 0x200B18u;
label_200b18:
    // 0x200b18: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x200b1c: 0xc080858  jal         func_202160
    ctx->pc = 0x200B1Cu;
    SET_GPR_U32(ctx, 31, 0x200B24u);
    ctx->pc = 0x200B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B1Cu;
    // 0x200b20: 0x26512cc0  addiu       $s1, $s2, 0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 11456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x200B1Cu, 0x200B24u)) {
        return;
    }
    ctx->pc = 0x200B24u;
label_200b24:
    // 0x200b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x200b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200b2c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x200b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x200b30: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x200b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x200b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200B34u;
    {
        const bool branch_taken_0x200b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B34u;
        // 0x200b38: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b34) {
            ctx->pc = 0x200B40u;
            goto label_200b40;
        }
    }
    ctx->pc = 0x200B3Cu;
    // 0x200b3c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x200b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_200b40:
    // 0x200b40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x200b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x200b44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x200B44u;
    {
        const bool branch_taken_0x200b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b44) {
            ctx->pc = 0x200B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200B44u;
            // 0x200b48: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200B4Cu;
            goto label_200b4c;
        }
    }
    ctx->pc = 0x200B4Cu;
label_200b4c:
    // 0x200b4c: 0x8e432cc0  lw          $v1, 0x2CC0($s2)
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11456)));
    // 0x200b50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b54: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x200b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x200b58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200b5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x200b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200b60: 0xae432cc0  sw          $v1, 0x2CC0($s2)
    ctx->pc = 0x200b60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11456), GPR_U32(ctx, 3));
    // 0x200b64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200b68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x200b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b70: 0x3e00008  jr          $ra
    ctx->pc = 0x200B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B70u;
        // 0x200b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B78u;
}
