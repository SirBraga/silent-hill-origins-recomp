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

// Function: sub_00156C40
// Address: 0x156c40 - 0x156d10
void sub_00156C40_0x156c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156C40_0x156c40");
#endif

    switch (ctx->pc) {
        case 0x156ca0u: goto label_156ca0;
        case 0x156cacu: goto label_156cac;
        case 0x156cb8u: goto label_156cb8;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cccu: goto label_156ccc;
        case 0x156cd8u: goto label_156cd8;
        case 0x156ce4u: goto label_156ce4;
        case 0x156cf0u: goto label_156cf0;
        default: break;
    }

    ctx->pc = 0x156c40u;

    // 0x156c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x156c44: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x156c48: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x156c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x156c4c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x156c50: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x156c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x156c54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x156c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x156c5c: 0x24422aa8  addiu       $v0, $v0, 0x2AA8
    ctx->pc = 0x156c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10920));
    // 0x156c60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x156c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x156c64: 0x24632ac8  addiu       $v1, $v1, 0x2AC8
    ctx->pc = 0x156c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10952));
    // 0x156c68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x156c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x156c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156c70: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x156c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x156c74: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x156c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x156c78: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x156c7c: 0x8c628608  lw          $v0, -0x79F8($v1)
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338608u));
    // 0x156c80: 0x14530002  bne         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x156C80u;
    {
        const bool branch_taken_0x156c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x156C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C80u;
        // 0x156c84: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c80) {
            ctx->pc = 0x156C8Cu;
            goto label_156c8c;
        }
    }
    ctx->pc = 0x156C88u;
    // 0x156c88: 0xac608608  sw          $zero, -0x79F8($v1)
    ctx->pc = 0x156c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936072), GPR_U32(ctx, 0));
label_156c8c:
    // 0x156c8c: 0x267000a8  addiu       $s0, $s3, 0xA8
    ctx->pc = 0x156c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x156c90: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x156c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x156C98u;
    SET_GPR_U32(ctx, 31, 0x156CA0u);
    ctx->pc = 0x156C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C98u;
    // 0x156c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x156C98u, 0x156CA0u)) {
        return;
    }
    ctx->pc = 0x156CA0u;
label_156ca0:
    // 0x156ca0: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x156ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x156ca4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x156CA4u;
    SET_GPR_U32(ctx, 31, 0x156CACu);
    ctx->pc = 0x156CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CA4u;
    // 0x156ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x156CA4u, 0x156CACu)) {
        return;
    }
    ctx->pc = 0x156CACu;
label_156cac:
    // 0x156cac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cb0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x156CB0u;
    SET_GPR_U32(ctx, 31, 0x156CB8u);
    ctx->pc = 0x156CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CB0u;
    // 0x156cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x156CB0u, 0x156CB8u)) {
        return;
    }
    ctx->pc = 0x156CB8u;
label_156cb8:
    // 0x156cb8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x156CB8u;
    SET_GPR_U32(ctx, 31, 0x156CC0u);
    ctx->pc = 0x156CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CB8u;
    // 0x156cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x156CB8u, 0x156CC0u)) {
        return;
    }
    ctx->pc = 0x156CC0u;
label_156cc0:
    // 0x156cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cc4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x156CC4u;
    SET_GPR_U32(ctx, 31, 0x156CCCu);
    ctx->pc = 0x156CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CC4u;
    // 0x156cc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x156CC4u, 0x156CCCu)) {
        return;
    }
    ctx->pc = 0x156CCCu;
label_156ccc:
    // 0x156ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cd0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x156CD0u;
    SET_GPR_U32(ctx, 31, 0x156CD8u);
    ctx->pc = 0x156CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CD0u;
    // 0x156cd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x156CD0u, 0x156CD8u)) {
        return;
    }
    ctx->pc = 0x156CD8u;
label_156cd8:
    // 0x156cd8: 0x26640044  addiu       $a0, $s3, 0x44
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x156cdc: 0xc07924c  jal         func_1E4930
    ctx->pc = 0x156CDCu;
    SET_GPR_U32(ctx, 31, 0x156CE4u);
    ctx->pc = 0x156CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CDCu;
    // 0x156ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4930u, 0x156CDCu, 0x156CE4u)) {
        return;
    }
    ctx->pc = 0x156CE4u;
label_156ce4:
    // 0x156ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ce8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x156CE8u;
    SET_GPR_U32(ctx, 31, 0x156CF0u);
    ctx->pc = 0x156CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CE8u;
    // 0x156cec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x156CE8u, 0x156CF0u)) {
        return;
    }
    ctx->pc = 0x156CF0u;
label_156cf0:
    // 0x156cf0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x156cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156cf4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x156cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156cf8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x156cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156cfc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x156cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156d00: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x156d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156d08: 0x3e00008  jr          $ra
    ctx->pc = 0x156D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D08u;
        // 0x156d0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D10u;
}
