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

// Function: sub_002DD358
// Address: 0x2dd358 - 0x2dd418
void sub_002DD358_0x2dd358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD358_0x2dd358");
#endif

    switch (ctx->pc) {
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd35cu: goto label_2dd35c;
        case 0x2dd360u: goto label_2dd360;
        case 0x2dd364u: goto label_2dd364;
        case 0x2dd368u: goto label_2dd368;
        case 0x2dd36cu: goto label_2dd36c;
        case 0x2dd370u: goto label_2dd370;
        case 0x2dd374u: goto label_2dd374;
        case 0x2dd378u: goto label_2dd378;
        case 0x2dd37cu: goto label_2dd37c;
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd384u: goto label_2dd384;
        case 0x2dd388u: goto label_2dd388;
        case 0x2dd38cu: goto label_2dd38c;
        case 0x2dd390u: goto label_2dd390;
        case 0x2dd394u: goto label_2dd394;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd39cu: goto label_2dd39c;
        case 0x2dd3a0u: goto label_2dd3a0;
        case 0x2dd3a4u: goto label_2dd3a4;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd3acu: goto label_2dd3ac;
        case 0x2dd3b0u: goto label_2dd3b0;
        case 0x2dd3b4u: goto label_2dd3b4;
        case 0x2dd3b8u: goto label_2dd3b8;
        case 0x2dd3bcu: goto label_2dd3bc;
        case 0x2dd3c0u: goto label_2dd3c0;
        case 0x2dd3c4u: goto label_2dd3c4;
        case 0x2dd3c8u: goto label_2dd3c8;
        case 0x2dd3ccu: goto label_2dd3cc;
        case 0x2dd3d0u: goto label_2dd3d0;
        case 0x2dd3d4u: goto label_2dd3d4;
        case 0x2dd3d8u: goto label_2dd3d8;
        case 0x2dd3dcu: goto label_2dd3dc;
        case 0x2dd3e0u: goto label_2dd3e0;
        case 0x2dd3e4u: goto label_2dd3e4;
        case 0x2dd3e8u: goto label_2dd3e8;
        case 0x2dd3ecu: goto label_2dd3ec;
        case 0x2dd3f0u: goto label_2dd3f0;
        case 0x2dd3f4u: goto label_2dd3f4;
        case 0x2dd3f8u: goto label_2dd3f8;
        case 0x2dd3fcu: goto label_2dd3fc;
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd404u: goto label_2dd404;
        case 0x2dd408u: goto label_2dd408;
        case 0x2dd40cu: goto label_2dd40c;
        case 0x2dd410u: goto label_2dd410;
        case 0x2dd414u: goto label_2dd414;
        default: break;
    }

    ctx->pc = 0x2dd358u;

label_2dd358:
    // 0x2dd358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2dd35c:
    // 0x2dd35c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2dd360:
    // 0x2dd360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd364:
    // 0x2dd364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd368:
    // 0x2dd368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dd36c:
    // 0x2dd36c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2dd370:
    // 0x2dd370: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2dd370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2dd374:
    // 0x2dd374: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2dd374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2dd378:
    // 0x2dd378: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2dd378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2dd37c:
    // 0x2dd37c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd380:
    // 0x2dd380: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2dd384:
    if (ctx->pc == 0x2DD384u) {
        ctx->pc = 0x2DD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD380u;
        // 0x2dd384: 0x26110024  addiu       $s1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD388u;
        goto label_2dd388;
    }
    ctx->pc = 0x2DD380u;
    {
        const bool branch_taken_0x2dd380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD380u;
        // 0x2dd384: 0x26110024  addiu       $s1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd380) {
            ctx->pc = 0x2DD3A8u;
            goto label_2dd3a8;
        }
    }
    ctx->pc = 0x2DD388u;
label_2dd388:
    // 0x2dd388: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dd388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dd38c:
    // 0x2dd38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd390:
    // 0x2dd390: 0xc0b7db8  jal         func_2DF6E0
label_2dd394:
    if (ctx->pc == 0x2DD394u) {
        ctx->pc = 0x2DD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD390u;
        // 0x2dd394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD398u;
        goto label_2dd398;
    }
    ctx->pc = 0x2DD390u;
    SET_GPR_U32(ctx, 31, 0x2DD398u);
    ctx->pc = 0x2DD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD390u;
    // 0x2dd394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DD390u, 0x2DD398u)) {
        return;
    }
    ctx->pc = 0x2DD398u;
label_2dd398:
    // 0x2dd398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd39c:
    // 0x2dd39c: 0xc0b7d62  jal         func_2DF588
label_2dd3a0:
    if (ctx->pc == 0x2DD3A0u) {
        ctx->pc = 0x2DD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD39Cu;
        // 0x2dd3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3A4u;
        goto label_2dd3a4;
    }
    ctx->pc = 0x2DD39Cu;
    SET_GPR_U32(ctx, 31, 0x2DD3A4u);
    ctx->pc = 0x2DD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD39Cu;
    // 0x2dd3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2DD39Cu, 0x2DD3A4u)) {
        return;
    }
    ctx->pc = 0x2DD3A4u;
label_2dd3a4:
    // 0x2dd3a4: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_2dd3a8:
    // 0x2dd3a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2dd3ac:
    // 0x2dd3ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dd3b0:
    if (ctx->pc == 0x2DD3B0u) {
        ctx->pc = 0x2DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3ACu;
        // 0x2dd3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3B4u;
        goto label_2dd3b4;
    }
    ctx->pc = 0x2DD3ACu;
    {
        const bool branch_taken_0x2dd3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3ACu;
        // 0x2dd3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3ac) {
            ctx->pc = 0x2DD3CCu;
            goto label_2dd3cc;
        }
    }
    ctx->pc = 0x2DD3B4u;
label_2dd3b4:
    // 0x2dd3b4: 0xc0b7d4e  jal         func_2DF538
label_2dd3b8:
    if (ctx->pc == 0x2DD3B8u) {
        ctx->pc = 0x2DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3B4u;
        // 0x2dd3b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3BCu;
        goto label_2dd3bc;
    }
    ctx->pc = 0x2DD3B4u;
    SET_GPR_U32(ctx, 31, 0x2DD3BCu);
    ctx->pc = 0x2DD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3B4u;
    // 0x2dd3b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2DD3B4u, 0x2DD3BCu)) {
        return;
    }
    ctx->pc = 0x2DD3BCu;
label_2dd3bc:
    // 0x2dd3bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2dd3c0:
    // 0x2dd3c0: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x2dd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_2dd3c4:
    // 0x2dd3c4: 0x40f809  jalr        $v0
label_2dd3c8:
    if (ctx->pc == 0x2DD3C8u) {
        ctx->pc = 0x2DD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3C4u;
        // 0x2dd3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3CCu;
        goto label_2dd3cc;
    }
    ctx->pc = 0x2DD3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD3CCu);
        ctx->pc = 0x2DD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3C4u;
        // 0x2dd3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD3C4u, 0x2DD3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD3CCu;
label_2dd3cc:
    // 0x2dd3cc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2dd3d0:
    // 0x2dd3d0: 0x27839020  addiu       $v1, $gp, -0x6FE0
    ctx->pc = 0x2dd3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
label_2dd3d4:
    // 0x2dd3d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2dd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2dd3d8:
    // 0x2dd3d8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x2dd3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_2dd3dc:
    // 0x2dd3dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dd3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd3e0:
    // 0x2dd3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd3e4:
    // 0x2dd3e4: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x2dd3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_2dd3e8:
    // 0x2dd3e8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2dd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_2dd3ec:
    // 0x2dd3ec: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x2dd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_2dd3f0:
    // 0x2dd3f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd3f4:
    // 0x2dd3f4: 0x8f839020  lw          $v1, -0x6FE0($gp)
    ctx->pc = 0x2dd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_2dd3f8:
    // 0x2dd3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd3fc:
    // 0x2dd3fc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2dd3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2dd400:
    // 0x2dd400: 0xaf859020  sw          $a1, -0x6FE0($gp)
    ctx->pc = 0x2dd400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 5));
label_2dd404:
    // 0x2dd404: 0x3e00008  jr          $ra
label_2dd408:
    if (ctx->pc == 0x2DD408u) {
        ctx->pc = 0x2DD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD404u;
        // 0x2dd408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD40Cu;
        goto label_2dd40c;
    }
    ctx->pc = 0x2DD404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD404u;
        // 0x2dd408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD40Cu;
label_2dd40c:
    // 0x2dd40c: 0x0  nop
    ctx->pc = 0x2dd40cu;
    // NOP
label_2dd410:
    // 0x2dd410: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dd414:
    // 0x2dd414: 0x0  nop
    ctx->pc = 0x2dd414u;
    // NOP
    ctx->pc = 0x2dd418u;
}
