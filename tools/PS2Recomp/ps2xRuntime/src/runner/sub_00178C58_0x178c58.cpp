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

// Function: sub_00178C58
// Address: 0x178c58 - 0x178ce0
void sub_00178C58_0x178c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C58_0x178c58");
#endif

    switch (ctx->pc) {
        case 0x178cacu: goto label_178cac;
        case 0x178cc0u: goto label_178cc0;
        default: break;
    }

    ctx->pc = 0x178c58u;

    // 0x178c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178c5c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178c64: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x178c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178c6c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x178c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c74: 0x8e22870c  lw          $v0, -0x78F4($s1)
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x178c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178c7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x178c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c80: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x178c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x178c84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c88: 0x3c080018  lui         $t0, 0x18
    ctx->pc = 0x178c88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)24 << 16));
    // 0x178c8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x178c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c90: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x178c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x178c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c98: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x178c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x178c9c: 0x25088c30  addiu       $t0, $t0, -0x73D0
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937648));
    // 0x178ca0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x178ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca4: 0xc07f7f0  jal         func_1FDFC0
    ctx->pc = 0x178CA4u;
    SET_GPR_U32(ctx, 31, 0x178CACu);
    ctx->pc = 0x178CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CA4u;
    // 0x178ca8: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FDFC0u, 0x178CA4u, 0x178CACu)) {
        return;
    }
    ctx->pc = 0x178CACu;
label_178cac:
    // 0x178cac: 0x8e23870c  lw          $v1, -0x78F4($s1)
    ctx->pc = 0x178cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936332)));
    // 0x178cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cb8: 0xc05e338  jal         func_178CE0
    ctx->pc = 0x178CB8u;
    SET_GPR_U32(ctx, 31, 0x178CC0u);
    ctx->pc = 0x178CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CB8u;
    // 0x178cbc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178CE0u, 0x178CB8u, 0x178CC0u)) {
        return;
    }
    ctx->pc = 0x178CC0u;
label_178cc0:
    // 0x178cc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178cc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x178CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CCCu;
        // 0x178cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178CD4u;
    // 0x178cd4: 0x0  nop
    ctx->pc = 0x178cd4u;
    // NOP
    // 0x178cd8: 0x0  nop
    ctx->pc = 0x178cd8u;
    // NOP
    // 0x178cdc: 0x0  nop
    ctx->pc = 0x178cdcu;
    // NOP
    ctx->pc = 0x178ce0u;
}
