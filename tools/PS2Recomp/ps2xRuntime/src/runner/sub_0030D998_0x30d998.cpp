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

// Function: sub_0030D998
// Address: 0x30d998 - 0x30da20
void sub_0030D998_0x30d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D998_0x30d998");
#endif

    switch (ctx->pc) {
        case 0x30d9c0u: goto label_30d9c0;
        case 0x30d9f0u: goto label_30d9f0;
        default: break;
    }

    ctx->pc = 0x30d998u;

    // 0x30d998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d99c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d9a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d9a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d9ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d9b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d9b8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D9B8u;
    SET_GPR_U32(ctx, 31, 0x30D9C0u);
    ctx->pc = 0x30D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9B8u;
    // 0x30d9bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D9B8u, 0x30D9C0u)) {
        return;
    }
    ctx->pc = 0x30D9C0u;
label_30d9c0:
    // 0x30d9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D9C0u;
    {
        const bool branch_taken_0x30d9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9C0u;
        // 0x30d9c4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9c0) {
            ctx->pc = 0x30D9D8u;
            goto label_30d9d8;
        }
    }
    ctx->pc = 0x30D9C8u;
    // 0x30d9c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d9cc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30d9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30d9d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D9D0u;
    {
        const bool branch_taken_0x30d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9D0u;
        // 0x30d9d4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9d0) {
            ctx->pc = 0x30D9E0u;
            goto label_30d9e0;
        }
    }
    ctx->pc = 0x30D9D8u;
label_30d9d8:
    // 0x30d9d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30D9D8u;
    {
        const bool branch_taken_0x30d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9D8u;
        // 0x30d9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9d8) {
            ctx->pc = 0x30DA08u;
            goto label_30da08;
        }
    }
    ctx->pc = 0x30D9E0u;
label_30d9e0:
    // 0x30d9e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D9E0u;
    {
        const bool branch_taken_0x30d9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9E0u;
        // 0x30d9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9e0) {
            ctx->pc = 0x30DA08u;
            goto label_30da08;
        }
    }
    ctx->pc = 0x30D9E8u;
    // 0x30d9e8: 0xc0b5ac6  jal         func_2D6B18
    ctx->pc = 0x30D9E8u;
    SET_GPR_U32(ctx, 31, 0x30D9F0u);
    ctx->pc = 0x30D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9E8u;
    // 0x30d9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x30D9E8u, 0x30D9F0u)) {
        return;
    }
    ctx->pc = 0x30D9F0u;
label_30d9f0:
    // 0x30d9f0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D9F0u;
    {
        const bool branch_taken_0x30d9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9F0u;
        // 0x30d9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9f0) {
            ctx->pc = 0x30DA08u;
            goto label_30da08;
        }
    }
    ctx->pc = 0x30D9F8u;
    // 0x30d9f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d9fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30da00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30da04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30da08:
    // 0x30da08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30da08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30da0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30da0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30da10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30da10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30da14: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA14u;
        // 0x30da18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DA1Cu;
    // 0x30da1c: 0x0  nop
    ctx->pc = 0x30da1cu;
    // NOP
    ctx->pc = 0x30da20u;
}
