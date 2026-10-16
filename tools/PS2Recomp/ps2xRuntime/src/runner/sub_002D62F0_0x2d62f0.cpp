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

// Function: sub_002D62F0
// Address: 0x2d62f0 - 0x2d63b0
void sub_002D62F0_0x2d62f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D62F0_0x2d62f0");
#endif

    switch (ctx->pc) {
        case 0x2d62f0u: goto label_2d62f0;
        case 0x2d62f4u: goto label_2d62f4;
        case 0x2d62f8u: goto label_2d62f8;
        case 0x2d62fcu: goto label_2d62fc;
        case 0x2d6300u: goto label_2d6300;
        case 0x2d6304u: goto label_2d6304;
        case 0x2d6308u: goto label_2d6308;
        case 0x2d630cu: goto label_2d630c;
        case 0x2d6310u: goto label_2d6310;
        case 0x2d6314u: goto label_2d6314;
        case 0x2d6318u: goto label_2d6318;
        case 0x2d631cu: goto label_2d631c;
        case 0x2d6320u: goto label_2d6320;
        case 0x2d6324u: goto label_2d6324;
        case 0x2d6328u: goto label_2d6328;
        case 0x2d632cu: goto label_2d632c;
        case 0x2d6330u: goto label_2d6330;
        case 0x2d6334u: goto label_2d6334;
        case 0x2d6338u: goto label_2d6338;
        case 0x2d633cu: goto label_2d633c;
        case 0x2d6340u: goto label_2d6340;
        case 0x2d6344u: goto label_2d6344;
        case 0x2d6348u: goto label_2d6348;
        case 0x2d634cu: goto label_2d634c;
        case 0x2d6350u: goto label_2d6350;
        case 0x2d6354u: goto label_2d6354;
        case 0x2d6358u: goto label_2d6358;
        case 0x2d635cu: goto label_2d635c;
        case 0x2d6360u: goto label_2d6360;
        case 0x2d6364u: goto label_2d6364;
        case 0x2d6368u: goto label_2d6368;
        case 0x2d636cu: goto label_2d636c;
        case 0x2d6370u: goto label_2d6370;
        case 0x2d6374u: goto label_2d6374;
        case 0x2d6378u: goto label_2d6378;
        case 0x2d637cu: goto label_2d637c;
        case 0x2d6380u: goto label_2d6380;
        case 0x2d6384u: goto label_2d6384;
        case 0x2d6388u: goto label_2d6388;
        case 0x2d638cu: goto label_2d638c;
        case 0x2d6390u: goto label_2d6390;
        case 0x2d6394u: goto label_2d6394;
        case 0x2d6398u: goto label_2d6398;
        case 0x2d639cu: goto label_2d639c;
        case 0x2d63a0u: goto label_2d63a0;
        case 0x2d63a4u: goto label_2d63a4;
        case 0x2d63a8u: goto label_2d63a8;
        case 0x2d63acu: goto label_2d63ac;
        default: break;
    }

    ctx->pc = 0x2d62f0u;

label_2d62f0:
    // 0x2d62f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d62f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d62f4:
    // 0x2d62f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d62f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d62f8:
    // 0x2d62f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2d62f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2d62fc:
    // 0x2d62fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d62fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d6300:
    // 0x2d6300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6304:
    // 0x2d6304: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2d6304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2d6308:
    // 0x2d6308: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d630c:
    // 0x2d630c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2d6310:
    // 0x2d6310: 0xc7948298  lwc1        $f20, -0x7D68($gp)
    ctx->pc = 0x2d6310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d6314:
    // 0x2d6314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d6318:
    // 0x2d6318: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2d631c:
    if (ctx->pc == 0x2D631Cu) {
        ctx->pc = 0x2D631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6318u;
        // 0x2d631c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6320u;
        goto label_2d6320;
    }
    ctx->pc = 0x2D6318u;
    {
        const bool branch_taken_0x2d6318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6318u;
        // 0x2d631c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6318) {
            ctx->pc = 0x2D6388u;
            goto label_2d6388;
        }
    }
    ctx->pc = 0x2D6320u;
label_2d6320:
    // 0x2d6320: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2d6320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2d6324:
    // 0x2d6324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d6324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6328:
    // 0x2d6328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d632c:
    // 0x2d632c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2d632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2d6330:
    // 0x2d6330: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2d6334:
    // 0x2d6334: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2d6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2d6338:
    // 0x2d6338: 0x60f809  jalr        $v1
label_2d633c:
    if (ctx->pc == 0x2D633Cu) {
        ctx->pc = 0x2D6340u;
        goto label_2d6340;
    }
    ctx->pc = 0x2D6338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D6340u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6338u, 0x2D6340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6340u;
label_2d6340:
    // 0x2d6340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6344:
    // 0x2d6344: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d6344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d6348:
    // 0x2d6348: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2d6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d634c:
    // 0x2d634c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d634cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d6350:
    // 0x2d6350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2d6354:
    // 0x2d6354: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d6354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6358:
    // 0x2d6358: 0x0  nop
    ctx->pc = 0x2d6358u;
    // NOP
label_2d635c:
    // 0x2d635c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2d6360:
    if (ctx->pc == 0x2D6360u) {
        ctx->pc = 0x2D6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D635Cu;
        // 0x2d6360: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6364u;
        goto label_2d6364;
    }
    ctx->pc = 0x2D635Cu;
    {
        const bool branch_taken_0x2d635c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d635c) {
            ctx->pc = 0x2D6360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D635Cu;
            // 0x2d6360: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6378u;
            goto label_2d6378;
        }
    }
    ctx->pc = 0x2D6364u;
label_2d6364:
    // 0x2d6364: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d6364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6368:
    // 0x2d6368: 0x0  nop
    ctx->pc = 0x2d6368u;
    // NOP
label_2d636c:
    // 0x2d636c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d6370:
    if (ctx->pc == 0x2D6370u) {
        ctx->pc = 0x2D6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D636Cu;
        // 0x2d6370: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6374u;
        goto label_2d6374;
    }
    ctx->pc = 0x2D636Cu;
    {
        const bool branch_taken_0x2d636c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d636c) {
            ctx->pc = 0x2D6370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D636Cu;
            // 0x2d6370: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6374u;
            goto label_2d6374;
        }
    }
    ctx->pc = 0x2D6374u;
label_2d6374:
    // 0x2d6374: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d6378:
    // 0x2d6378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d6378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d637c:
    // 0x2d637c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d637cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6380:
    // 0x2d6380: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2d6384:
    if (ctx->pc == 0x2D6384u) {
        ctx->pc = 0x2D6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6380u;
        // 0x2d6384: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6388u;
        goto label_2d6388;
    }
    ctx->pc = 0x2D6380u;
    {
        const bool branch_taken_0x2d6380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6380u;
        // 0x2d6384: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6380) {
            ctx->pc = 0x2D6328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6328;
        }
    }
    ctx->pc = 0x2D6388u;
label_2d6388:
    // 0x2d6388: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2d6388u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2d638c:
    // 0x2d638c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d638cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6390:
    // 0x2d6390: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d6390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6394:
    // 0x2d6394: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d6394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6398:
    // 0x2d6398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d639c:
    // 0x2d639c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2d639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d63a0:
    // 0x2d63a0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d63a4:
    // 0x2d63a4: 0x3e00008  jr          $ra
label_2d63a8:
    if (ctx->pc == 0x2D63A8u) {
        ctx->pc = 0x2D63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63A4u;
        // 0x2d63a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D63ACu;
        goto label_2d63ac;
    }
    ctx->pc = 0x2D63A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63A4u;
        // 0x2d63a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D63A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D63ACu;
label_2d63ac:
    // 0x2d63ac: 0x0  nop
    ctx->pc = 0x2d63acu;
    // NOP
    ctx->pc = 0x2d63b0u;
}
