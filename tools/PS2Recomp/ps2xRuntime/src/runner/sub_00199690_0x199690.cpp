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

// Function: sub_00199690
// Address: 0x199690 - 0x199710
void sub_00199690_0x199690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199690_0x199690");
#endif

    switch (ctx->pc) {
        case 0x1996ccu: goto label_1996cc;
        case 0x1996ecu: goto label_1996ec;
        default: break;
    }

    ctx->pc = 0x199690u;

    // 0x199690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x199690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x199694: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x199694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x199698: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x199698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19969c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19969cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1996a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1996a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1996a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1996a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1996ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1996acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1996b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1996b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1996b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1996bc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996c0: 0x2404019c  addiu       $a0, $zero, 0x19C
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x1996c4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1996C4u;
    SET_GPR_U32(ctx, 31, 0x1996CCu);
    ctx->pc = 0x1996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996C4u;
    // 0x1996c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1996C4u, 0x1996CCu)) {
        return;
    }
    ctx->pc = 0x1996CCu;
label_1996cc:
    // 0x1996cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1996ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1996d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1996d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1996d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996dc: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x1996dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1996e0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1996e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e4: 0xc066066  jal         func_198198
    ctx->pc = 0x1996E4u;
    SET_GPR_U32(ctx, 31, 0x1996ECu);
    ctx->pc = 0x1996E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996E4u;
    // 0x1996e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198198u, 0x1996E4u, 0x1996ECu)) {
        return;
    }
    ctx->pc = 0x1996ECu;
label_1996ec:
    // 0x1996ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1996ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1996f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1996f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1996f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1996f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1996f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1996f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1996fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1996fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199700: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x199700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199708: 0x3e00008  jr          $ra
    ctx->pc = 0x199708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199708u;
        // 0x19970c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199710u;
}
