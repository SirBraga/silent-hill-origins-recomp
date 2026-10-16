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

// Function: sub_0014D0C8
// Address: 0x14d0c8 - 0x14d140
void sub_0014D0C8_0x14d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D0C8_0x14d0c8");
#endif

    switch (ctx->pc) {
        case 0x14d0e4u: goto label_14d0e4;
        case 0x14d100u: goto label_14d100;
        case 0x14d108u: goto label_14d108;
        case 0x14d118u: goto label_14d118;
        case 0x14d128u: goto label_14d128;
        default: break;
    }

    ctx->pc = 0x14d0c8u;

    // 0x14d0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d0cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14d0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d0dc: 0xc053460  jal         func_14D180
    ctx->pc = 0x14D0DCu;
    SET_GPR_U32(ctx, 31, 0x14D0E4u);
    ctx->pc = 0x14D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0DCu;
    // 0x14d0e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D180u, 0x14D0DCu, 0x14D0E4u)) {
        return;
    }
    ctx->pc = 0x14D0E4u;
label_14d0e4:
    // 0x14d0e4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x14d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x14d0e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d0ec: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x14d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14d0f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D0F0u;
    {
        const bool branch_taken_0x14d0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0F0u;
        // 0x14d0f4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0f0) {
            ctx->pc = 0x14D108u;
            goto label_14d108;
        }
    }
    ctx->pc = 0x14D0F8u;
    // 0x14d0f8: 0xc041126  jal         func_104498
    ctx->pc = 0x14D0F8u;
    SET_GPR_U32(ctx, 31, 0x14D100u);
    ctx->pc = 0x14D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0F8u;
    // 0x14d0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104498u, 0x14D0F8u, 0x14D100u)) {
        return;
    }
    ctx->pc = 0x14D100u;
label_14d100:
    // 0x14d100: 0xc041346  jal         func_104D18
    ctx->pc = 0x14D100u;
    SET_GPR_U32(ctx, 31, 0x14D108u);
    ctx->pc = 0x14D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D100u;
    // 0x14d104: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104D18u, 0x14D100u, 0x14D108u)) {
        return;
    }
    ctx->pc = 0x14D108u;
label_14d108:
    // 0x14d108: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x14d108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14d10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d110: 0xc053254  jal         func_14C950
    ctx->pc = 0x14D110u;
    SET_GPR_U32(ctx, 31, 0x14D118u);
    ctx->pc = 0x14D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D110u;
    // 0x14d114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C950u, 0x14D110u, 0x14D118u)) {
        return;
    }
    ctx->pc = 0x14D118u;
label_14d118:
    // 0x14d118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d120: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14D120u;
    SET_GPR_U32(ctx, 31, 0x14D128u);
    ctx->pc = 0x14D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D120u;
    // 0x14d124: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14D120u, 0x14D128u)) {
        return;
    }
    ctx->pc = 0x14D128u;
label_14d128:
    // 0x14d128: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14d128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d134: 0x3e00008  jr          $ra
    ctx->pc = 0x14D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D134u;
        // 0x14d138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D13Cu;
    // 0x14d13c: 0x0  nop
    ctx->pc = 0x14d13cu;
    // NOP
    ctx->pc = 0x14d140u;
}
