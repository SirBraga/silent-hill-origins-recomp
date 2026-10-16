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

// Function: sub_0024F360
// Address: 0x24f360 - 0x24f3e8
void sub_0024F360_0x24f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F360_0x24f360");
#endif

    switch (ctx->pc) {
        case 0x24f388u: goto label_24f388;
        case 0x24f3a8u: goto label_24f3a8;
        case 0x24f3bcu: goto label_24f3bc;
        default: break;
    }

    ctx->pc = 0x24f360u;

    // 0x24f360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f364: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24f364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24f368: 0x27908580  addiu       $s0, $gp, -0x7A80
    ctx->pc = 0x24f368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935936));
    // 0x24f36c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24f370: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x24f370u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    // 0x24f374: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24f374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24f37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f380: 0xc093cca  jal         func_24F328
    ctx->pc = 0x24F380u;
    SET_GPR_U32(ctx, 31, 0x24F388u);
    ctx->pc = 0x24F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F380u;
    // 0x24f384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F328u, 0x24F380u, 0x24F388u)) {
        return;
    }
    ctx->pc = 0x24F388u;
label_24f388:
    // 0x24f388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24f388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f38c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x24f38cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x24f390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f394: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24f394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24f398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f39c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x24f39cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x24f3a0: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x24F3A0u;
    SET_GPR_U32(ctx, 31, 0x24F3A8u);
    ctx->pc = 0x24F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F3A0u;
    // 0x24f3a4: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x24F3A0u, 0x24F3A8u)) {
        return;
    }
    ctx->pc = 0x24F3A8u;
label_24f3a8:
    // 0x24f3a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F3A8u;
    {
        const bool branch_taken_0x24f3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3A8u;
        // 0x24f3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3a8) {
            ctx->pc = 0x24F3C8u;
            goto label_24f3c8;
        }
    }
    ctx->pc = 0x24F3B0u;
    // 0x24f3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3b4: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x24F3B4u;
    SET_GPR_U32(ctx, 31, 0x24F3BCu);
    ctx->pc = 0x24F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F3B4u;
    // 0x24f3b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x24F3B4u, 0x24F3BCu)) {
        return;
    }
    ctx->pc = 0x24F3BCu;
label_24f3bc:
    // 0x24f3bc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x24f3bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x24f3c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F3C0u;
    {
        const bool branch_taken_0x24f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3C0u;
        // 0x24f3c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3c0) {
            ctx->pc = 0x24F3CCu;
            goto label_24f3cc;
        }
    }
    ctx->pc = 0x24F3C8u;
label_24f3c8:
    // 0x24f3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f3cc:
    // 0x24f3cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24f3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f3d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24f3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f3d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24f3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3DCu;
        // 0x24f3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F3E4u;
    // 0x24f3e4: 0x0  nop
    ctx->pc = 0x24f3e4u;
    // NOP
    ctx->pc = 0x24f3e8u;
}
