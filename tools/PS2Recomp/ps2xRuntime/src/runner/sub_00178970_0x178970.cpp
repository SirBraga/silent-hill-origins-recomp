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

// Function: sub_00178970
// Address: 0x178970 - 0x1789e0
void sub_00178970_0x178970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178970_0x178970");
#endif

    switch (ctx->pc) {
        case 0x178990u: goto label_178990;
        case 0x178998u: goto label_178998;
        case 0x1789a0u: goto label_1789a0;
        case 0x1789a8u: goto label_1789a8;
        case 0x1789b0u: goto label_1789b0;
        case 0x1789b8u: goto label_1789b8;
        case 0x1789c4u: goto label_1789c4;
        case 0x1789ccu: goto label_1789cc;
        default: break;
    }

    ctx->pc = 0x178970u;

    // 0x178970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178974: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x178974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x178978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17897c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17897cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178984: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x178988: 0xc05ee54  jal         func_17B950
    ctx->pc = 0x178988u;
    SET_GPR_U32(ctx, 31, 0x178990u);
    ctx->pc = 0x17898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178988u;
    // 0x17898c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B950u, 0x178988u, 0x178990u)) {
        return;
    }
    ctx->pc = 0x178990u;
label_178990:
    // 0x178990: 0xc05dee2  jal         func_177B88
    ctx->pc = 0x178990u;
    SET_GPR_U32(ctx, 31, 0x178998u);
    ctx->pc = 0x178994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178990u;
    // 0x178994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x177B88u, 0x178990u, 0x178998u)) {
        return;
    }
    ctx->pc = 0x178998u;
label_178998:
    // 0x178998: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x178998u;
    SET_GPR_U32(ctx, 31, 0x1789A0u);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x178998u, 0x1789A0u)) {
        return;
    }
    ctx->pc = 0x1789A0u;
label_1789a0:
    // 0x1789a0: 0xc06a81e  jal         func_1AA078
    ctx->pc = 0x1789A0u;
    SET_GPR_U32(ctx, 31, 0x1789A8u);
    ctx->pc = 0x1789A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789A0u;
    // 0x1789a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA078u, 0x1789A0u, 0x1789A8u)) {
        return;
    }
    ctx->pc = 0x1789A8u;
label_1789a8:
    // 0x1789a8: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x1789A8u;
    SET_GPR_U32(ctx, 31, 0x1789B0u);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1789A8u, 0x1789B0u)) {
        return;
    }
    ctx->pc = 0x1789B0u;
label_1789b0:
    // 0x1789b0: 0xc06a99c  jal         func_1AA670
    ctx->pc = 0x1789B0u;
    SET_GPR_U32(ctx, 31, 0x1789B8u);
    ctx->pc = 0x1789B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789B0u;
    // 0x1789b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA670u, 0x1789B0u, 0x1789B8u)) {
        return;
    }
    ctx->pc = 0x1789B8u;
label_1789b8:
    // 0x1789b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1789bc: 0xc06a214  jal         func_1A8850
    ctx->pc = 0x1789BCu;
    SET_GPR_U32(ctx, 31, 0x1789C4u);
    ctx->pc = 0x1789C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789BCu;
    // 0x1789c0: 0x248481b0  addiu       $a0, $a0, -0x7E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8850u, 0x1789BCu, 0x1789C4u)) {
        return;
    }
    ctx->pc = 0x1789C4u;
label_1789c4:
    // 0x1789c4: 0xc081268  jal         func_2049A0
    ctx->pc = 0x1789C4u;
    SET_GPR_U32(ctx, 31, 0x1789CCu);
    ctx->pc = 0x1789C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789C4u;
    // 0x1789c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049A0u, 0x1789C4u, 0x1789CCu)) {
        return;
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1789ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1789d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1789d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1789d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1789D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1789D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789D4u;
        // 0x1789d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1789D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1789DCu;
    // 0x1789dc: 0x0  nop
    ctx->pc = 0x1789dcu;
    // NOP
    ctx->pc = 0x1789e0u;
}
