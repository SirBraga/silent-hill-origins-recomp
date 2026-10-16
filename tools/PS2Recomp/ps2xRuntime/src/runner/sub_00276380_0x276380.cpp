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

// Function: sub_00276380
// Address: 0x276380 - 0x276428
void sub_00276380_0x276380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276380_0x276380");
#endif

    switch (ctx->pc) {
        case 0x276380u: goto label_276380;
        case 0x276384u: goto label_276384;
        case 0x276388u: goto label_276388;
        case 0x27638cu: goto label_27638c;
        case 0x276390u: goto label_276390;
        case 0x276394u: goto label_276394;
        case 0x276398u: goto label_276398;
        case 0x27639cu: goto label_27639c;
        case 0x2763a0u: goto label_2763a0;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763a8u: goto label_2763a8;
        case 0x2763acu: goto label_2763ac;
        case 0x2763b0u: goto label_2763b0;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763b8u: goto label_2763b8;
        case 0x2763bcu: goto label_2763bc;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c4u: goto label_2763c4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d0u: goto label_2763d0;
        case 0x2763d4u: goto label_2763d4;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e0u: goto label_2763e0;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763ecu: goto label_2763ec;
        case 0x2763f0u: goto label_2763f0;
        case 0x2763f4u: goto label_2763f4;
        case 0x2763f8u: goto label_2763f8;
        case 0x2763fcu: goto label_2763fc;
        case 0x276400u: goto label_276400;
        case 0x276404u: goto label_276404;
        case 0x276408u: goto label_276408;
        case 0x27640cu: goto label_27640c;
        case 0x276410u: goto label_276410;
        case 0x276414u: goto label_276414;
        case 0x276418u: goto label_276418;
        case 0x27641cu: goto label_27641c;
        case 0x276420u: goto label_276420;
        case 0x276424u: goto label_276424;
        default: break;
    }

    ctx->pc = 0x276380u;

label_276380:
    // 0x276380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_276384:
    // 0x276384: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x276384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_276388:
    // 0x276388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x276388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27638c:
    // 0x27638c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_276390:
    // 0x276390: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x276390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276394:
    // 0x276394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276398:
    // 0x276398: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x276398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27639c:
    // 0x27639c: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x27639cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2763a0:
    // 0x2763a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2763a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2763a4:
    // 0x2763a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2763a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2763a8:
    // 0x2763a8: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x2763a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_2763ac:
    // 0x2763ac: 0x40f809  jalr        $v0
label_2763b0:
    if (ctx->pc == 0x2763B0u) {
        ctx->pc = 0x2763B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763ACu;
        // 0x2763b0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2763B4u;
        goto label_2763b4;
    }
    ctx->pc = 0x2763ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2763B4u);
        ctx->pc = 0x2763B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763ACu;
        // 0x2763b0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2763ACu, 0x2763B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2763B4u;
label_2763b4:
    // 0x2763b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2763b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2763b8:
    // 0x2763b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2763b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2763bc:
    // 0x2763bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2763bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2763c0:
    // 0x2763c0: 0xac71002c  sw          $s1, 0x2C($v1)
    ctx->pc = 0x2763c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 17));
label_2763c4:
    // 0x2763c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2763c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2763c8:
    // 0x2763c8: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x2763c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_2763cc:
    // 0x2763cc: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x2763ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
label_2763d0:
    // 0x2763d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2763d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2763d4:
    // 0x2763d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2763d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2763d8:
    // 0x2763d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2763d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2763dc:
    // 0x2763dc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2763dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2763e0:
    // 0x2763e0: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2763e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_2763e4:
    // 0x2763e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2763e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2763e8:
    // 0x2763e8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2763e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2763ec:
    // 0x2763ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2763ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2763f0:
    // 0x2763f0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2763f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2763f4:
    // 0x2763f4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2763f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2763f8:
    // 0x2763f8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2763f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2763fc:
    // 0x2763fc: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2763fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_276400:
    // 0x276400: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x276400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_276404:
    // 0x276404: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x276404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_276408:
    // 0x276408: 0xac630038  sw          $v1, 0x38($v1)
    ctx->pc = 0x276408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 3));
label_27640c:
    // 0x27640c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x27640cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_276410:
    // 0x276410: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x276410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_276414:
    // 0x276414: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x276414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_276418:
    // 0x276418: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x276418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_27641c:
    // 0x27641c: 0x3e00008  jr          $ra
label_276420:
    if (ctx->pc == 0x276420u) {
        ctx->pc = 0x276420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27641Cu;
        // 0x276420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276424u;
        goto label_276424;
    }
    ctx->pc = 0x27641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27641Cu;
        // 0x276420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27641Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276424u;
label_276424:
    // 0x276424: 0x0  nop
    ctx->pc = 0x276424u;
    // NOP
    ctx->pc = 0x276428u;
}
