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

// Function: sub_002ECCB0
// Address: 0x2eccb0 - 0x2ecdb8
void sub_002ECCB0_0x2eccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECCB0_0x2eccb0");
#endif

    switch (ctx->pc) {
        case 0x2eccd8u: goto label_2eccd8;
        case 0x2eccfcu: goto label_2eccfc;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd30u: goto label_2ecd30;
        case 0x2ecd40u: goto label_2ecd40;
        case 0x2ecd50u: goto label_2ecd50;
        case 0x2ecd68u: goto label_2ecd68;
        default: break;
    }

    ctx->pc = 0x2eccb0u;

    // 0x2eccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eccb4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eccb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eccbc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2eccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2eccc0: 0x2450e7a0  addiu       $s0, $v0, -0x1860
    ctx->pc = 0x2eccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x2eccc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eccc8: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2eccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ecccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccd0: 0xc0b8fa4  jal         func_2E3E90
    ctx->pc = 0x2ECCD0u;
    SET_GPR_U32(ctx, 31, 0x2ECCD8u);
    ctx->pc = 0x2ECCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCD0u;
    // 0x2eccd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E90u, 0x2ECCD0u, 0x2ECCD8u)) {
        return;
    }
    ctx->pc = 0x2ECCD8u;
label_2eccd8:
    // 0x2eccd8: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2eccdc: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2eccdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2ecce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ecce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ecce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce8: 0x24e7e800  addiu       $a3, $a3, -0x1800
    ctx->pc = 0x2ecce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961152));
    // 0x2eccec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2eccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2eccf0: 0x278890a0  addiu       $t0, $gp, -0x6F60
    ctx->pc = 0x2eccf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938784));
    // 0x2eccf4: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2ECCF4u;
    SET_GPR_U32(ctx, 31, 0x2ECCFCu);
    ctx->pc = 0x2ECCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCF4u;
    // 0x2eccf8: 0x3529080d  ori         $t1, $t1, 0x80D (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2061);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2ECCF4u, 0x2ECCFCu)) {
        return;
    }
    ctx->pc = 0x2ECCFCu;
label_2eccfc:
    // 0x2eccfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eccfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd00: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ECD00u;
    {
        const bool branch_taken_0x2ecd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD00u;
        // 0x2ecd04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd00) {
            ctx->pc = 0x2ECD6Cu;
            goto label_2ecd6c;
        }
    }
    ctx->pc = 0x2ECD08u;
    // 0x2ecd08: 0xc0bb044  jal         func_2EC110
    ctx->pc = 0x2ECD08u;
    SET_GPR_U32(ctx, 31, 0x2ECD10u);
    ctx->pc = 0x2ECD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD08u;
    // 0x2ecd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EC110u, 0x2ECD08u, 0x2ECD10u)) {
        return;
    }
    ctx->pc = 0x2ECD10u;
label_2ecd10:
    // 0x2ecd10: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2ecd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2ecd14: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2ecd18: 0x24a55df8  addiu       $a1, $a1, 0x5DF8
    ctx->pc = 0x2ecd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24056));
    // 0x2ecd1c: 0x24e75f30  addiu       $a3, $a3, 0x5F30
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24368));
    // 0x2ecd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd24: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2ecd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ecd28: 0xc0b8e68  jal         func_2E39A0
    ctx->pc = 0x2ECD28u;
    SET_GPR_U32(ctx, 31, 0x2ECD30u);
    ctx->pc = 0x2ECD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD28u;
    // 0x2ecd2c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E39A0u, 0x2ECD28u, 0x2ECD30u)) {
        return;
    }
    ctx->pc = 0x2ECD30u;
label_2ecd30:
    // 0x2ecd30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ECD30u;
    {
        const bool branch_taken_0x2ecd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd30) {
            ctx->pc = 0x2ECD60u;
            goto label_2ecd60;
        }
    }
    ctx->pc = 0x2ECD38u;
    // 0x2ecd38: 0xc0bb4ae  jal         func_2ED2B8
    ctx->pc = 0x2ECD38u;
    SET_GPR_U32(ctx, 31, 0x2ECD40u);
    ctx->pc = 0x2ED2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED2B8u, 0x2ECD38u, 0x2ECD40u)) {
        return;
    }
    ctx->pc = 0x2ECD40u;
label_2ecd40:
    // 0x2ecd40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECD40u;
    {
        const bool branch_taken_0x2ecd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD40u;
        // 0x2ecd44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd40) {
            ctx->pc = 0x2ECD60u;
            goto label_2ecd60;
        }
    }
    ctx->pc = 0x2ECD48u;
    // 0x2ecd48: 0xc0b8f7c  jal         func_2E3DF0
    ctx->pc = 0x2ECD48u;
    SET_GPR_U32(ctx, 31, 0x2ECD50u);
    ctx->pc = 0x2ECD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD48u;
    // 0x2ecd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3DF0u, 0x2ECD48u, 0x2ECD50u)) {
        return;
    }
    ctx->pc = 0x2ECD50u;
label_2ecd50:
    // 0x2ecd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ecd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecd54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ecd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECD58u;
    {
        const bool branch_taken_0x2ecd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD58u;
        // 0x2ecd5c: 0xaf838cb4  sw          $v1, -0x734C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd58) {
            ctx->pc = 0x2ECD6Cu;
            goto label_2ecd6c;
        }
    }
    ctx->pc = 0x2ECD60u;
label_2ecd60:
    // 0x2ecd60: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2ECD60u;
    SET_GPR_U32(ctx, 31, 0x2ECD68u);
    ctx->pc = 0x2ECD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD60u;
    // 0x2ecd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2ECD60u, 0x2ECD68u)) {
        return;
    }
    ctx->pc = 0x2ECD68u;
label_2ecd68:
    // 0x2ecd68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd6c:
    // 0x2ecd6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ecd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecd74: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD74u;
        // 0x2ecd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECD7Cu;
    // 0x2ecd7c: 0x0  nop
    ctx->pc = 0x2ecd7cu;
    // NOP
    // 0x2ecd80: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2ecd80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecd84: 0x0  nop
    ctx->pc = 0x2ecd84u;
    // NOP
    // 0x2ecd88: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2ecd88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecd8c: 0x0  nop
    ctx->pc = 0x2ecd8cu;
    // NOP
    // 0x2ecd90: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2ecd90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecd94: 0x0  nop
    ctx->pc = 0x2ecd94u;
    // NOP
    // 0x2ecd98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ecd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ecd9c: 0x0  nop
    ctx->pc = 0x2ecd9cu;
    // NOP
    // 0x2ecda0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ecda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecda4: 0x0  nop
    ctx->pc = 0x2ecda4u;
    // NOP
    // 0x2ecda8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ecda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ecdac: 0x0  nop
    ctx->pc = 0x2ecdacu;
    // NOP
    // 0x2ecdb0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2ecdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2ecdb4: 0x0  nop
    ctx->pc = 0x2ecdb4u;
    // NOP
    ctx->pc = 0x2ecdb8u;
}
