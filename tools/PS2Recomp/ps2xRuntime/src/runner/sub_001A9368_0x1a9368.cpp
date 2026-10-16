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

// Function: sub_001A9368
// Address: 0x1a9368 - 0x1a9410
void sub_001A9368_0x1a9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9368_0x1a9368");
#endif

    switch (ctx->pc) {
        case 0x1a9368u: goto label_1a9368;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9370u: goto label_1a9370;
        case 0x1a9374u: goto label_1a9374;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a9384u: goto label_1a9384;
        case 0x1a9388u: goto label_1a9388;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        default: break;
    }

    ctx->pc = 0x1a9368u;

label_1a9368:
    // 0x1a9368: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a9368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a936c:
    // 0x1a936c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a9370:
    // 0x1a9370: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a9374:
    // 0x1a9374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9378:
    // 0x1a9378: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a937c:
    // 0x1a937c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a937cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9380:
    // 0x1a9380: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a9380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1a9384:
    // 0x1a9384: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a9384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9388:
    // 0x1a9388: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1a9388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a938c:
    // 0x1a938c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a9390:
    // 0x1a9390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9394:
    // 0x1a9394: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a9398:
    // 0x1a9398: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a9398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1a939c:
    // 0x1a939c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_1a93a0:
    if (ctx->pc == 0x1A93A0u) {
        ctx->pc = 0x1A93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A939Cu;
        // 0x1a93a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93A4u;
        goto label_1a93a4;
    }
    ctx->pc = 0x1A939Cu;
    {
        const bool branch_taken_0x1a939c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A939Cu;
        // 0x1a93a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a939c) {
            ctx->pc = 0x1A93E0u;
            goto label_1a93e0;
        }
    }
    ctx->pc = 0x1A93A4u;
label_1a93a4:
    // 0x1a93a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a93a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a93a8:
    // 0x1a93a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a93ac:
    // 0x1a93ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a93acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a93b0:
    // 0x1a93b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a93b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a93b4:
    // 0x1a93b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a93b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a93b8:
    // 0x1a93b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a93bc:
    // 0x1a93bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a93bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a93c0:
    // 0x1a93c0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a93c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a93c4:
    // 0x1a93c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a93c8:
    // 0x1a93c8: 0x60f809  jalr        $v1
label_1a93cc:
    if (ctx->pc == 0x1A93CCu) {
        ctx->pc = 0x1A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C8u;
        // 0x1a93cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93D0u;
        goto label_1a93d0;
    }
    ctx->pc = 0x1A93C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A93D0u);
        ctx->pc = 0x1A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C8u;
        // 0x1a93cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A93C8u, 0x1A93D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A93D0u;
label_1a93d0:
    // 0x1a93d0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1a93d4:
    // 0x1a93d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a93d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a93d8:
    // 0x1a93d8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a93dc:
    if (ctx->pc == 0x1A93DCu) {
        ctx->pc = 0x1A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93D8u;
        // 0x1a93dc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93E0u;
        goto label_1a93e0;
    }
    ctx->pc = 0x1A93D8u;
    {
        const bool branch_taken_0x1a93d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93D8u;
        // 0x1a93dc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93d8) {
            ctx->pc = 0x1A93A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A93E0u;
label_1a93e0:
    // 0x1a93e0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a93e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a93e4:
    // 0x1a93e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a93e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a93e8:
    // 0x1a93e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a93e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a93ec:
    // 0x1a93ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a93ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a93f0:
    // 0x1a93f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a93f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a93f4:
    // 0x1a93f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a93f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a93f8:
    // 0x1a93f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a93f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a93fc:
    // 0x1a93fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1a93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a9400:
    // 0x1a9400: 0x3e00008  jr          $ra
label_1a9404:
    if (ctx->pc == 0x1A9404u) {
        ctx->pc = 0x1A9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9400u;
        // 0x1a9404: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9408u;
        goto label_1a9408;
    }
    ctx->pc = 0x1A9400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9400u;
        // 0x1a9404: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9408u;
label_1a9408:
    // 0x1a9408: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1a9408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1a940c:
    // 0x1a940c: 0x0  nop
    ctx->pc = 0x1a940cu;
    // NOP
    ctx->pc = 0x1a9410u;
}
