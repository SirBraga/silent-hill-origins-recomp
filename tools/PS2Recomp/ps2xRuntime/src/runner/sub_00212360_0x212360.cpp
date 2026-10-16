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

// Function: sub_00212360
// Address: 0x212360 - 0x212420
void sub_00212360_0x212360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212360_0x212360");
#endif

    switch (ctx->pc) {
        case 0x212360u: goto label_212360;
        case 0x212364u: goto label_212364;
        case 0x212368u: goto label_212368;
        case 0x21236cu: goto label_21236c;
        case 0x212370u: goto label_212370;
        case 0x212374u: goto label_212374;
        case 0x212378u: goto label_212378;
        case 0x21237cu: goto label_21237c;
        case 0x212380u: goto label_212380;
        case 0x212384u: goto label_212384;
        case 0x212388u: goto label_212388;
        case 0x21238cu: goto label_21238c;
        case 0x212390u: goto label_212390;
        case 0x212394u: goto label_212394;
        case 0x212398u: goto label_212398;
        case 0x21239cu: goto label_21239c;
        case 0x2123a0u: goto label_2123a0;
        case 0x2123a4u: goto label_2123a4;
        case 0x2123a8u: goto label_2123a8;
        case 0x2123acu: goto label_2123ac;
        case 0x2123b0u: goto label_2123b0;
        case 0x2123b4u: goto label_2123b4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123c0u: goto label_2123c0;
        case 0x2123c4u: goto label_2123c4;
        case 0x2123c8u: goto label_2123c8;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123d0u: goto label_2123d0;
        case 0x2123d4u: goto label_2123d4;
        case 0x2123d8u: goto label_2123d8;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123e0u: goto label_2123e0;
        case 0x2123e4u: goto label_2123e4;
        case 0x2123e8u: goto label_2123e8;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        case 0x212410u: goto label_212410;
        case 0x212414u: goto label_212414;
        case 0x212418u: goto label_212418;
        case 0x21241cu: goto label_21241c;
        default: break;
    }

    ctx->pc = 0x212360u;

label_212360:
    // 0x212360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_212364:
    // 0x212364: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x212364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_212368:
    // 0x212368: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x212368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21236c:
    // 0x21236c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_212370:
    // 0x212370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212374:
    // 0x212374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_212378:
    // 0x212378: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x212378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_21237c:
    // 0x21237c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x21237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_212380:
    // 0x212380: 0xc093546  jal         func_24D518
label_212384:
    if (ctx->pc == 0x212384u) {
        ctx->pc = 0x212384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212380u;
        // 0x212384: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212388u;
        goto label_212388;
    }
    ctx->pc = 0x212380u;
    SET_GPR_U32(ctx, 31, 0x212388u);
    ctx->pc = 0x212384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212380u;
    // 0x212384: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x212380u, 0x212388u)) {
        return;
    }
    ctx->pc = 0x212388u;
label_212388:
    // 0x212388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x212388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21238c:
    // 0x21238c: 0x54c0001a  bnel        $a2, $zero, . + 4 + (0x1A << 2)
label_212390:
    if (ctx->pc == 0x212390u) {
        ctx->pc = 0x212390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21238Cu;
        // 0x212390: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212394u;
        goto label_212394;
    }
    ctx->pc = 0x21238Cu;
    {
        const bool branch_taken_0x21238c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21238c) {
            ctx->pc = 0x212390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21238Cu;
            // 0x212390: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123F8u;
            goto label_2123f8;
        }
    }
    ctx->pc = 0x212394u;
label_212394:
    // 0x212394: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x212394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_212398:
    // 0x212398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21239c:
    if (ctx->pc == 0x21239Cu) {
        ctx->pc = 0x21239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212398u;
        // 0x21239c: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123A0u;
        goto label_2123a0;
    }
    ctx->pc = 0x212398u;
    {
        const bool branch_taken_0x212398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212398u;
        // 0x21239c: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212398) {
            ctx->pc = 0x2123B8u;
            goto label_2123b8;
        }
    }
    ctx->pc = 0x2123A0u;
label_2123a0:
    // 0x2123a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2123a4:
    // 0x2123a4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2123a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2123a8:
    // 0x2123a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2123ac:
    // 0x2123ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2123b0:
    // 0x2123b0: 0x60f809  jalr        $v1
label_2123b4:
    if (ctx->pc == 0x2123B4u) {
        ctx->pc = 0x2123B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B0u;
        // 0x2123b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123B8u;
        goto label_2123b8;
    }
    ctx->pc = 0x2123B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2123B8u);
        ctx->pc = 0x2123B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B0u;
        // 0x2123b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123B0u, 0x2123B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2123B8u;
label_2123b8:
    // 0x2123b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2123bc:
    // 0x2123bc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2123c0:
    // 0x2123c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2123c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2123c4:
    // 0x2123c4: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2123c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_2123c8:
    // 0x2123c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2123c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2123cc:
    // 0x2123cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2123ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2123d0:
    // 0x2123d0: 0x60f809  jalr        $v1
label_2123d4:
    if (ctx->pc == 0x2123D4u) {
        ctx->pc = 0x2123D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123D0u;
        // 0x2123d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123D8u;
        goto label_2123d8;
    }
    ctx->pc = 0x2123D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2123D8u);
        ctx->pc = 0x2123D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123D0u;
        // 0x2123d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123D0u, 0x2123D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2123D8u;
label_2123d8:
    // 0x2123d8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2123d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2123dc:
    // 0x2123dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2123dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2123e0:
    // 0x2123e0: 0x240500d9  addiu       $a1, $zero, 0xD9
    ctx->pc = 0x2123e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_2123e4:
    // 0x2123e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2123e8:
    // 0x2123e8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2123e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2123ec:
    // 0x2123ec: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2123ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2123f0:
    // 0x2123f0: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2123f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_2123f4:
    // 0x2123f4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2123f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2123f8:
    // 0x2123f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2123f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2123fc:
    // 0x2123fc: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x2123fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
label_212400:
    // 0x212400: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x212400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_212404:
    // 0x212404: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x212404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_212408:
    // 0x212408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x212408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21240c:
    // 0x21240c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212410:
    // 0x212410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212414:
    // 0x212414: 0x3e00008  jr          $ra
label_212418:
    if (ctx->pc == 0x212418u) {
        ctx->pc = 0x212418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212414u;
        // 0x212418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21241Cu;
        goto label_21241c;
    }
    ctx->pc = 0x212414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212414u;
        // 0x212418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21241Cu;
label_21241c:
    // 0x21241c: 0x0  nop
    ctx->pc = 0x21241cu;
    // NOP
    ctx->pc = 0x212420u;
}
