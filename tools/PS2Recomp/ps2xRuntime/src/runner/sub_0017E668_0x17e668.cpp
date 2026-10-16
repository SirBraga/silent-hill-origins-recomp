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

// Function: sub_0017E668
// Address: 0x17e668 - 0x17e6e0
void sub_0017E668_0x17e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E668_0x17e668");
#endif

    switch (ctx->pc) {
        case 0x17e6a0u: goto label_17e6a0;
        case 0x17e6b4u: goto label_17e6b4;
        case 0x17e6c8u: goto label_17e6c8;
        default: break;
    }

    ctx->pc = 0x17e668u;

    // 0x17e668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e66c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17e670: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e674: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e67c: 0x244288b8  addiu       $v0, $v0, -0x7748
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936760));
    // 0x17e680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e684: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e688: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e68c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17e68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17e690: 0x8c70885c  lw          $s0, -0x77A4($v1)
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33885Cu));
    // 0x17e694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e698: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E698u;
    SET_GPR_U32(ctx, 31, 0x17E6A0u);
    ctx->pc = 0x17E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E698u;
    // 0x17e69c: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E698u, 0x17E6A0u)) {
        return;
    }
    ctx->pc = 0x17E6A0u;
label_17e6a0:
    // 0x17e6a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E6A0u;
    {
        const bool branch_taken_0x17e6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6A0u;
        // 0x17e6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6a0) {
            ctx->pc = 0x17E6C8u;
            goto label_17e6c8;
        }
    }
    ctx->pc = 0x17E6A8u;
    // 0x17e6a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6ac: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E6ACu;
    SET_GPR_U32(ctx, 31, 0x17E6B4u);
    ctx->pc = 0x17E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6ACu;
    // 0x17e6b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E6ACu, 0x17E6B4u)) {
        return;
    }
    ctx->pc = 0x17E6B4u;
label_17e6b4:
    // 0x17e6b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E6B4u;
    {
        const bool branch_taken_0x17e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6B4u;
        // 0x17e6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6b4) {
            ctx->pc = 0x17E6C8u;
            goto label_17e6c8;
        }
    }
    ctx->pc = 0x17E6BCu;
    // 0x17e6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6c0: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17E6C0u;
    SET_GPR_U32(ctx, 31, 0x17E6C8u);
    ctx->pc = 0x17E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6C0u;
    // 0x17e6c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17E6C0u, 0x17E6C8u)) {
        return;
    }
    ctx->pc = 0x17E6C8u;
label_17e6c8:
    // 0x17e6c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e6cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e6d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17e6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6D8u;
        // 0x17e6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6E0u;
}
