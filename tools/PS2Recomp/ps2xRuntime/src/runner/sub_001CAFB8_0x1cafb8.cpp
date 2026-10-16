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

// Function: sub_001CAFB8
// Address: 0x1cafb8 - 0x1cb028
void sub_001CAFB8_0x1cafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAFB8_0x1cafb8");
#endif

    switch (ctx->pc) {
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1cb00cu: goto label_1cb00c;
        default: break;
    }

    ctx->pc = 0x1cafb8u;

    // 0x1cafb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cafbc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cafc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cafc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cafc4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cafc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cafcc: 0x24920268  addiu       $s2, $a0, 0x268
    ctx->pc = 0x1cafccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
    // 0x1cafd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cafd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cafd4: 0xac850264  sw          $a1, 0x264($a0)
    ctx->pc = 0x1cafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 5));
    // 0x1cafd8: 0x8cb10064  lw          $s1, 0x64($a1)
    ctx->pc = 0x1cafd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1cafdc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1CAFDCu;
    SET_GPR_U32(ctx, 31, 0x1CAFE4u);
    ctx->pc = 0x1CAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFDCu;
    // 0x1cafe0: 0x8c509950  lw          $s0, -0x66B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1CAFDCu, 0x1CAFE4u)) {
        return;
    }
    ctx->pc = 0x1CAFE4u;
label_1cafe4:
    // 0x1cafe4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAFE4u;
    {
        const bool branch_taken_0x1cafe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFE4u;
        // 0x1cafe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafe4) {
            ctx->pc = 0x1CB00Cu;
            goto label_1cb00c;
        }
    }
    ctx->pc = 0x1CAFECu;
    // 0x1cafec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cafecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caff0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1CAFF0u;
    SET_GPR_U32(ctx, 31, 0x1CAFF8u);
    ctx->pc = 0x1CAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFF0u;
    // 0x1caff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1CAFF0u, 0x1CAFF8u)) {
        return;
    }
    ctx->pc = 0x1CAFF8u;
label_1caff8:
    // 0x1caff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAFF8u;
    {
        const bool branch_taken_0x1caff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF8u;
        // 0x1caffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caff8) {
            ctx->pc = 0x1CB00Cu;
            goto label_1cb00c;
        }
    }
    ctx->pc = 0x1CB000u;
    // 0x1cb000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb004: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1CB004u;
    SET_GPR_U32(ctx, 31, 0x1CB00Cu);
    ctx->pc = 0x1CB008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB004u;
    // 0x1cb008: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1CB004u, 0x1CB00Cu)) {
        return;
    }
    ctx->pc = 0x1CB00Cu;
label_1cb00c:
    // 0x1cb00c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cb00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb010: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cb010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb014: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cb014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB01Cu;
        // 0x1cb020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB024u;
    // 0x1cb024: 0x0  nop
    ctx->pc = 0x1cb024u;
    // NOP
    ctx->pc = 0x1cb028u;
}
