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

// Function: sub_001DE368
// Address: 0x1de368 - 0x1de3e0
void sub_001DE368_0x1de368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE368_0x1de368");
#endif

    switch (ctx->pc) {
        case 0x1de390u: goto label_1de390;
        case 0x1de3acu: goto label_1de3ac;
        default: break;
    }

    ctx->pc = 0x1de368u;

    // 0x1de368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de36c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1de374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE37Cu;
    {
        const bool branch_taken_0x1de37c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE37Cu;
        // 0x1de380: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de37c) {
            ctx->pc = 0x1DE3ACu;
            goto label_1de3ac;
        }
    }
    ctx->pc = 0x1DE384u;
    // 0x1de384: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1de384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de388: 0xc092858  jal         func_24A160
    ctx->pc = 0x1DE388u;
    SET_GPR_U32(ctx, 31, 0x1DE390u);
    ctx->pc = 0x1DE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE388u;
    // 0x1de38c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x1DE388u, 0x1DE390u)) {
        return;
    }
    ctx->pc = 0x1DE390u;
label_1de390:
    // 0x1de390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de394: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE394u;
    {
        const bool branch_taken_0x1de394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE394u;
        // 0x1de398: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de394) {
            ctx->pc = 0x1DE3ACu;
            goto label_1de3ac;
        }
    }
    ctx->pc = 0x1DE39Cu;
    // 0x1de39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a0: 0x24a5e650  addiu       $a1, $a1, -0x19B0
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960720));
    // 0x1de3a4: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DE3A4u;
    SET_GPR_U32(ctx, 31, 0x1DE3ACu);
    ctx->pc = 0x1DE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3A4u;
    // 0x1de3a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DE3A4u, 0x1DE3ACu)) {
        return;
    }
    ctx->pc = 0x1DE3ACu;
label_1de3ac:
    // 0x1de3ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3BCu;
        // 0x1de3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3C4u;
    // 0x1de3c4: 0x0  nop
    ctx->pc = 0x1de3c4u;
    // NOP
    // 0x1de3c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de3cc: 0x0  nop
    ctx->pc = 0x1de3ccu;
    // NOP
    // 0x1de3d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de3d4: 0x0  nop
    ctx->pc = 0x1de3d4u;
    // NOP
    // 0x1de3d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de3dc: 0x0  nop
    ctx->pc = 0x1de3dcu;
    // NOP
    ctx->pc = 0x1de3e0u;
}
