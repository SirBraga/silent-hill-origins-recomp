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

// Function: sub_001D5F08
// Address: 0x1d5f08 - 0x1d5f98
void sub_001D5F08_0x1d5f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F08_0x1d5f08");
#endif

    switch (ctx->pc) {
        case 0x1d5f50u: goto label_1d5f50;
        case 0x1d5f64u: goto label_1d5f64;
        case 0x1d5f7cu: goto label_1d5f7c;
        default: break;
    }

    ctx->pc = 0x1d5f08u;

    // 0x1d5f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5f14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f20: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5F20u;
    {
        const bool branch_taken_0x1d5f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F20u;
        // 0x1d5f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f20) {
            ctx->pc = 0x1D5F6Cu;
            goto label_1d5f6c;
        }
    }
    ctx->pc = 0x1D5F28u;
    // 0x1d5f28: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1d5f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5f2c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5F2Cu;
    {
        const bool branch_taken_0x1d5f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f2c) {
            ctx->pc = 0x1D5F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F2Cu;
            // 0x1d5f30: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F84u;
            goto label_1d5f84;
        }
    }
    ctx->pc = 0x1D5F34u;
    // 0x1d5f34: 0x56200013  bnel        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5F34u;
    {
        const bool branch_taken_0x1d5f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f34) {
            ctx->pc = 0x1D5F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F34u;
            // 0x1d5f38: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F84u;
            goto label_1d5f84;
        }
    }
    ctx->pc = 0x1D5F3Cu;
    // 0x1d5f3c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d5f40: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F40u;
    {
        const bool branch_taken_0x1d5f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f40) {
            ctx->pc = 0x1D5F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F40u;
            // 0x1d5f44: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F54u;
            goto label_1d5f54;
        }
    }
    ctx->pc = 0x1D5F48u;
    // 0x1d5f48: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D5F48u;
    SET_GPR_U32(ctx, 31, 0x1D5F50u);
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D5F48u, 0x1D5F50u)) {
        return;
    }
    ctx->pc = 0x1D5F50u;
label_1d5f50:
    // 0x1d5f50: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1d5f54:
    // 0x1d5f54: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5F54u;
    {
        const bool branch_taken_0x1d5f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f54) {
            ctx->pc = 0x1D5F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F54u;
            // 0x1d5f58: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F84u;
            goto label_1d5f84;
        }
    }
    ctx->pc = 0x1D5F5Cu;
    // 0x1d5f5c: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F64u);
    ctx->pc = 0x1D5F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F5Cu;
    // 0x1d5f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D5F5Cu, 0x1D5F64u)) {
        return;
    }
    ctx->pc = 0x1D5F64u;
label_1d5f64:
    // 0x1d5f64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5F64u;
    {
        const bool branch_taken_0x1d5f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F64u;
        // 0x1d5f68: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f64) {
            ctx->pc = 0x1D5F84u;
            goto label_1d5f84;
        }
    }
    ctx->pc = 0x1D5F6Cu;
label_1d5f6c:
    // 0x1d5f6c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d5f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f74: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D5F74u;
    SET_GPR_U32(ctx, 31, 0x1D5F7Cu);
    ctx->pc = 0x1D5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F74u;
    // 0x1d5f78: 0x24a51050  addiu       $a1, $a1, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D5F74u, 0x1D5F7Cu)) {
        return;
    }
    ctx->pc = 0x1D5F7Cu;
label_1d5f7c:
    // 0x1d5f7c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1d5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1d5f80: 0xae110090  sw          $s1, 0x90($s0)
    ctx->pc = 0x1d5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
label_1d5f84:
    // 0x1d5f84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d5f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F90u;
        // 0x1d5f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F98u;
}
