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

// Function: sub_0025C348
// Address: 0x25c348 - 0x25c408
void sub_0025C348_0x25c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C348_0x25c348");
#endif

    switch (ctx->pc) {
        case 0x25c348u: goto label_25c348;
        case 0x25c34cu: goto label_25c34c;
        case 0x25c350u: goto label_25c350;
        case 0x25c354u: goto label_25c354;
        case 0x25c358u: goto label_25c358;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c360u: goto label_25c360;
        case 0x25c364u: goto label_25c364;
        case 0x25c368u: goto label_25c368;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c370u: goto label_25c370;
        case 0x25c374u: goto label_25c374;
        case 0x25c378u: goto label_25c378;
        case 0x25c37cu: goto label_25c37c;
        case 0x25c380u: goto label_25c380;
        case 0x25c384u: goto label_25c384;
        case 0x25c388u: goto label_25c388;
        case 0x25c38cu: goto label_25c38c;
        case 0x25c390u: goto label_25c390;
        case 0x25c394u: goto label_25c394;
        case 0x25c398u: goto label_25c398;
        case 0x25c39cu: goto label_25c39c;
        case 0x25c3a0u: goto label_25c3a0;
        case 0x25c3a4u: goto label_25c3a4;
        case 0x25c3a8u: goto label_25c3a8;
        case 0x25c3acu: goto label_25c3ac;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3b4u: goto label_25c3b4;
        case 0x25c3b8u: goto label_25c3b8;
        case 0x25c3bcu: goto label_25c3bc;
        case 0x25c3c0u: goto label_25c3c0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3c8u: goto label_25c3c8;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c3d0u: goto label_25c3d0;
        case 0x25c3d4u: goto label_25c3d4;
        case 0x25c3d8u: goto label_25c3d8;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c3e8u: goto label_25c3e8;
        case 0x25c3ecu: goto label_25c3ec;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c3f4u: goto label_25c3f4;
        case 0x25c3f8u: goto label_25c3f8;
        case 0x25c3fcu: goto label_25c3fc;
        case 0x25c400u: goto label_25c400;
        case 0x25c404u: goto label_25c404;
        default: break;
    }

    ctx->pc = 0x25c348u;

label_25c348:
    // 0x25c348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25c34c:
    // 0x25c34c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25c350:
    // 0x25c350: 0x8c423fe0  lw          $v0, 0x3FE0($v0)
    ctx->pc = 0x25c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16352)));
label_25c354:
    // 0x25c354: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25c358:
    // 0x25c358: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25c358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25c35c:
    // 0x25c35c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25c360:
    // 0x25c360: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x25c360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25c364:
    // 0x25c364: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25c368:
    // 0x25c368: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_25c36c:
    // 0x25c36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c370:
    // 0x25c370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c374:
    // 0x25c374: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25c378:
    // 0x25c378: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25c37c:
    // 0x25c37c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x25c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_25c380:
    // 0x25c380: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x25c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_25c384:
    // 0x25c384: 0x40f809  jalr        $v0
label_25c388:
    if (ctx->pc == 0x25C388u) {
        ctx->pc = 0x25C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C384u;
        // 0x25c388: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C38Cu;
        goto label_25c38c;
    }
    ctx->pc = 0x25C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C38Cu);
        ctx->pc = 0x25C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C384u;
        // 0x25c388: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C384u, 0x25C38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C38Cu;
label_25c38c:
    // 0x25c38c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c390:
    // 0x25c390: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_25c394:
    if (ctx->pc == 0x25C394u) {
        ctx->pc = 0x25C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C390u;
        // 0x25c394: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C398u;
        goto label_25c398;
    }
    ctx->pc = 0x25C390u;
    {
        const bool branch_taken_0x25c390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C390u;
        // 0x25c394: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c390) {
            ctx->pc = 0x25C3ECu;
            goto label_25c3ec;
        }
    }
    ctx->pc = 0x25C398u;
label_25c398:
    // 0x25c398: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x25c398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_25c39c:
    // 0x25c39c: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x25c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
label_25c3a0:
    // 0x25c3a0: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x25c3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_25c3a4:
    // 0x25c3a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25c3a8:
    // 0x25c3a8: 0x8c423fe0  lw          $v0, 0x3FE0($v0)
    ctx->pc = 0x25c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16352)));
label_25c3ac:
    // 0x25c3ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25c3b0:
    // 0x25c3b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25c3b4:
    // 0x25c3b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_25c3b8:
    // 0x25c3b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25c3bc:
    // 0x25c3bc: 0x8c423fe0  lw          $v0, 0x3FE0($v0)
    ctx->pc = 0x25c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16352)));
label_25c3c0:
    // 0x25c3c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25c3c4:
    // 0x25c3c4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x25c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_25c3c8:
    // 0x25c3c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25c3cc:
    // 0x25c3cc: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16352)));
label_25c3d0:
    // 0x25c3d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25c3d4:
    // 0x25c3d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c3d8:
    // 0x25c3d8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x25c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_25c3dc:
    // 0x25c3dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25c3e0:
    // 0x25c3e0: 0x8c423fe0  lw          $v0, 0x3FE0($v0)
    ctx->pc = 0x25c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16352)));
label_25c3e4:
    // 0x25c3e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25c3e8:
    // 0x25c3e8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x25c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_25c3ec:
    // 0x25c3ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25c3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c3f0:
    // 0x25c3f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25c3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c3f4:
    // 0x25c3f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25c3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c3f8:
    // 0x25c3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c3fc:
    // 0x25c3fc: 0x3e00008  jr          $ra
label_25c400:
    if (ctx->pc == 0x25C400u) {
        ctx->pc = 0x25C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3FCu;
        // 0x25c400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C404u;
        goto label_25c404;
    }
    ctx->pc = 0x25C3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3FCu;
        // 0x25c400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C404u;
label_25c404:
    // 0x25c404: 0x0  nop
    ctx->pc = 0x25c404u;
    // NOP
    ctx->pc = 0x25c408u;
}
