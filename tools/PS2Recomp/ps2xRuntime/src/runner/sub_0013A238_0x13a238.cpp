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

// Function: sub_0013A238
// Address: 0x13a238 - 0x13a2e0
void sub_0013A238_0x13a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A238_0x13a238");
#endif

    switch (ctx->pc) {
        case 0x13a254u: goto label_13a254;
        case 0x13a268u: goto label_13a268;
        case 0x13a280u: goto label_13a280;
        case 0x13a29cu: goto label_13a29c;
        case 0x13a2b8u: goto label_13a2b8;
        default: break;
    }

    ctx->pc = 0x13a238u;

    // 0x13a238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a23c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13a240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13a244: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13a244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a24c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x13A24Cu;
    SET_GPR_U32(ctx, 31, 0x13A254u);
    ctx->pc = 0x13A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A24Cu;
    // 0x13a250: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x13A24Cu, 0x13A254u)) {
        return;
    }
    ctx->pc = 0x13A254u;
label_13a254:
    // 0x13a254: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13a258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a25c: 0x8c464798  lw          $a2, 0x4798($v0)
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4798u));
    // 0x13a260: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13A260u;
    SET_GPR_U32(ctx, 31, 0x13A268u);
    ctx->pc = 0x13A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A260u;
    // 0x13a264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13A260u, 0x13A268u)) {
        return;
    }
    ctx->pc = 0x13A268u;
label_13a268:
    // 0x13a268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a26c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a270: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A270u;
    {
        const bool branch_taken_0x13a270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A270u;
        // 0x13a274: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a270) {
            ctx->pc = 0x13A2C8u;
            goto label_13a2c8;
        }
    }
    ctx->pc = 0x13A278u;
    // 0x13a278: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13a278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a27c: 0x0  nop
    ctx->pc = 0x13a27cu;
    // NOP
label_13a280:
    // 0x13a280: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13a284: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A284u;
    {
        const bool branch_taken_0x13a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A284u;
        // 0x13a288: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a284) {
            ctx->pc = 0x13A2A0u;
            goto label_13a2a0;
        }
    }
    ctx->pc = 0x13A28Cu;
    // 0x13a28c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13a290: 0x262401cc  addiu       $a0, $s1, 0x1CC
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 460));
    // 0x13a294: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x13A294u;
    SET_GPR_U32(ctx, 31, 0x13A29Cu);
    ctx->pc = 0x13A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A294u;
    // 0x13a298: 0x2606ec60  addiu       $a2, $s0, -0x13A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x13A294u, 0x13A29Cu)) {
        return;
    }
    ctx->pc = 0x13A29Cu;
label_13a29c:
    // 0x13a29c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13a2a0:
    // 0x13a2a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a2a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a2ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a2b0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13A2B0u;
    SET_GPR_U32(ctx, 31, 0x13A2B8u);
    ctx->pc = 0x13A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2B0u;
    // 0x13a2b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13A2B0u, 0x13A2B8u)) {
        return;
    }
    ctx->pc = 0x13A2B8u;
label_13a2b8:
    // 0x13a2b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a2bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a2c0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13A2C0u;
    {
        const bool branch_taken_0x13a2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2C0u;
        // 0x13a2c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2c0) {
            ctx->pc = 0x13A280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a280;
        }
    }
    ctx->pc = 0x13A2C8u;
label_13a2c8:
    // 0x13a2c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13a2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a2cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13a2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2D4u;
        // 0x13a2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A2DCu;
    // 0x13a2dc: 0x0  nop
    ctx->pc = 0x13a2dcu;
    // NOP
    ctx->pc = 0x13a2e0u;
}
