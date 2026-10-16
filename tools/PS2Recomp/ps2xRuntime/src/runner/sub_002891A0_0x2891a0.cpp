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

// Function: sub_002891A0
// Address: 0x2891a0 - 0x289298
void sub_002891A0_0x2891a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002891A0_0x2891a0");
#endif

    switch (ctx->pc) {
        case 0x2891a0u: goto label_2891a0;
        case 0x2891a4u: goto label_2891a4;
        case 0x2891a8u: goto label_2891a8;
        case 0x2891acu: goto label_2891ac;
        case 0x2891b0u: goto label_2891b0;
        case 0x2891b4u: goto label_2891b4;
        case 0x2891b8u: goto label_2891b8;
        case 0x2891bcu: goto label_2891bc;
        case 0x2891c0u: goto label_2891c0;
        case 0x2891c4u: goto label_2891c4;
        case 0x2891c8u: goto label_2891c8;
        case 0x2891ccu: goto label_2891cc;
        case 0x2891d0u: goto label_2891d0;
        case 0x2891d4u: goto label_2891d4;
        case 0x2891d8u: goto label_2891d8;
        case 0x2891dcu: goto label_2891dc;
        case 0x2891e0u: goto label_2891e0;
        case 0x2891e4u: goto label_2891e4;
        case 0x2891e8u: goto label_2891e8;
        case 0x2891ecu: goto label_2891ec;
        case 0x2891f0u: goto label_2891f0;
        case 0x2891f4u: goto label_2891f4;
        case 0x2891f8u: goto label_2891f8;
        case 0x2891fcu: goto label_2891fc;
        case 0x289200u: goto label_289200;
        case 0x289204u: goto label_289204;
        case 0x289208u: goto label_289208;
        case 0x28920cu: goto label_28920c;
        case 0x289210u: goto label_289210;
        case 0x289214u: goto label_289214;
        case 0x289218u: goto label_289218;
        case 0x28921cu: goto label_28921c;
        case 0x289220u: goto label_289220;
        case 0x289224u: goto label_289224;
        case 0x289228u: goto label_289228;
        case 0x28922cu: goto label_28922c;
        case 0x289230u: goto label_289230;
        case 0x289234u: goto label_289234;
        case 0x289238u: goto label_289238;
        case 0x28923cu: goto label_28923c;
        case 0x289240u: goto label_289240;
        case 0x289244u: goto label_289244;
        case 0x289248u: goto label_289248;
        case 0x28924cu: goto label_28924c;
        case 0x289250u: goto label_289250;
        case 0x289254u: goto label_289254;
        case 0x289258u: goto label_289258;
        case 0x28925cu: goto label_28925c;
        case 0x289260u: goto label_289260;
        case 0x289264u: goto label_289264;
        case 0x289268u: goto label_289268;
        case 0x28926cu: goto label_28926c;
        case 0x289270u: goto label_289270;
        case 0x289274u: goto label_289274;
        case 0x289278u: goto label_289278;
        case 0x28927cu: goto label_28927c;
        case 0x289280u: goto label_289280;
        case 0x289284u: goto label_289284;
        case 0x289288u: goto label_289288;
        case 0x28928cu: goto label_28928c;
        case 0x289290u: goto label_289290;
        case 0x289294u: goto label_289294;
        default: break;
    }

    ctx->pc = 0x2891a0u;

label_2891a0:
    // 0x2891a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2891a4:
    // 0x2891a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2891a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2891a8:
    // 0x2891a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2891a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2891ac:
    // 0x2891ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2891acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2891b0:
    // 0x2891b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2891b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2891b4:
    // 0x2891b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2891b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2891b8:
    // 0x2891b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2891b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2891bc:
    // 0x2891bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2891bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2891c0:
    // 0x2891c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2891c4:
    // 0x2891c4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2891c8:
    if (ctx->pc == 0x2891C8u) {
        ctx->pc = 0x2891C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891C4u;
        // 0x2891c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891CCu;
        goto label_2891cc;
    }
    ctx->pc = 0x2891C4u;
    {
        const bool branch_taken_0x2891c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2891c4) {
            ctx->pc = 0x2891C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2891C4u;
            // 0x2891c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2891DCu;
            goto label_2891dc;
        }
    }
    ctx->pc = 0x2891CCu;
label_2891cc:
    // 0x2891cc: 0xc092932  jal         func_24A4C8
label_2891d0:
    if (ctx->pc == 0x2891D0u) {
        ctx->pc = 0x2891D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891CCu;
        // 0x2891d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891D4u;
        goto label_2891d4;
    }
    ctx->pc = 0x2891CCu;
    SET_GPR_U32(ctx, 31, 0x2891D4u);
    ctx->pc = 0x2891D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2891CCu;
    // 0x2891d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2891CCu, 0x2891D4u)) {
        return;
    }
    ctx->pc = 0x2891D4u;
label_2891d4:
    // 0x2891d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2891d8:
    if (ctx->pc == 0x2891D8u) {
        ctx->pc = 0x2891D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D4u;
        // 0x2891d8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891DCu;
        goto label_2891dc;
    }
    ctx->pc = 0x2891D4u;
    {
        const bool branch_taken_0x2891d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D4u;
        // 0x2891d8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891d4) {
            ctx->pc = 0x2891F4u;
            goto label_2891f4;
        }
    }
    ctx->pc = 0x2891DCu;
label_2891dc:
    // 0x2891dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2891e0:
    if (ctx->pc == 0x2891E0u) {
        ctx->pc = 0x2891E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891DCu;
        // 0x2891e0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891E4u;
        goto label_2891e4;
    }
    ctx->pc = 0x2891DCu;
    {
        const bool branch_taken_0x2891dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891DCu;
        // 0x2891e0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891dc) {
            ctx->pc = 0x2891F0u;
            goto label_2891f0;
        }
    }
    ctx->pc = 0x2891E4u;
label_2891e4:
    // 0x2891e4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2891e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2891e8:
    // 0x2891e8: 0x40f809  jalr        $v0
label_2891ec:
    if (ctx->pc == 0x2891ECu) {
        ctx->pc = 0x2891F0u;
        goto label_2891f0;
    }
    ctx->pc = 0x2891E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2891F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891E8u, 0x2891F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2891F0u;
label_2891f0:
    // 0x2891f0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2891f4:
    // 0x2891f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2891f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2891f8:
    // 0x2891f8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_2891fc:
    if (ctx->pc == 0x2891FCu) {
        ctx->pc = 0x2891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891F8u;
        // 0x2891fc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289200u;
        goto label_289200;
    }
    ctx->pc = 0x2891F8u;
    {
        const bool branch_taken_0x2891f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891F8u;
        // 0x2891fc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891f8) {
            ctx->pc = 0x289278u;
            goto label_289278;
        }
    }
    ctx->pc = 0x289200u;
label_289200:
    // 0x289200: 0xc0a2468  jal         func_2891A0
label_289204:
    if (ctx->pc == 0x289204u) {
        ctx->pc = 0x289208u;
        goto label_289208;
    }
    ctx->pc = 0x289200u;
    SET_GPR_U32(ctx, 31, 0x289208u);
    ctx->pc = 0x2891A0u;
    goto label_2891a0;
    ctx->pc = 0x289208u;
label_289208:
    // 0x289208: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28920c:
    // 0x28920c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_289210:
    if (ctx->pc == 0x289210u) {
        ctx->pc = 0x289210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28920Cu;
        // 0x289210: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289214u;
        goto label_289214;
    }
    ctx->pc = 0x28920Cu;
    {
        const bool branch_taken_0x28920c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28920Cu;
        // 0x289210: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28920c) {
            ctx->pc = 0x289274u;
            goto label_289274;
        }
    }
    ctx->pc = 0x289214u;
label_289214:
    // 0x289214: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_289218:
    // 0x289218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x289218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28921c:
    // 0x28921c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_289220:
    if (ctx->pc == 0x289220u) {
        ctx->pc = 0x289220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28921Cu;
        // 0x289220: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289224u;
        goto label_289224;
    }
    ctx->pc = 0x28921Cu;
    {
        const bool branch_taken_0x28921c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x289220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28921Cu;
        // 0x289220: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28921c) {
            ctx->pc = 0x289250u;
            goto label_289250;
        }
    }
    ctx->pc = 0x289224u;
label_289224:
    // 0x289224: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_289228:
    // 0x289228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28922c:
    // 0x28922c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_289230:
    if (ctx->pc == 0x289230u) {
        ctx->pc = 0x289230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28922Cu;
        // 0x289230: 0x26420fc8  addiu       $v0, $s2, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289234u;
        goto label_289234;
    }
    ctx->pc = 0x28922Cu;
    {
        const bool branch_taken_0x28922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28922Cu;
        // 0x289230: 0x26420fc8  addiu       $v0, $s2, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28922c) {
            ctx->pc = 0x289244u;
            goto label_289244;
        }
    }
    ctx->pc = 0x289234u;
label_289234:
    // 0x289234: 0xc092932  jal         func_24A4C8
label_289238:
    if (ctx->pc == 0x289238u) {
        ctx->pc = 0x28923Cu;
        goto label_28923c;
    }
    ctx->pc = 0x289234u;
    SET_GPR_U32(ctx, 31, 0x28923Cu);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x289234u, 0x28923Cu)) {
        return;
    }
    ctx->pc = 0x28923Cu;
label_28923c:
    // 0x28923c: 0x10000005  b           . + 4 + (0x5 << 2)
label_289240:
    if (ctx->pc == 0x289240u) {
        ctx->pc = 0x289240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28923Cu;
        // 0x289240: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289244u;
        goto label_289244;
    }
    ctx->pc = 0x28923Cu;
    {
        const bool branch_taken_0x28923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28923Cu;
        // 0x289240: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28923c) {
            ctx->pc = 0x289254u;
            goto label_289254;
        }
    }
    ctx->pc = 0x289244u;
label_289244:
    // 0x289244: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_289248:
    // 0x289248: 0x60f809  jalr        $v1
label_28924c:
    if (ctx->pc == 0x28924Cu) {
        ctx->pc = 0x289250u;
        goto label_289250;
    }
    ctx->pc = 0x289248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x289250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289248u, 0x289250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289250u;
label_289250:
    // 0x289250: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x289250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_289254:
    // 0x289254: 0x26430fc8  addiu       $v1, $s2, 0xFC8
    ctx->pc = 0x289254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_289258:
    // 0x289258: 0x8c4468d4  lw          $a0, 0x68D4($v0)
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26836)));
label_28925c:
    // 0x28925c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289260:
    // 0x289260: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x289260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_289264:
    // 0x289264: 0x40f809  jalr        $v0
label_289268:
    if (ctx->pc == 0x289268u) {
        ctx->pc = 0x289268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289264u;
        // 0x289268: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28926Cu;
        goto label_28926c;
    }
    ctx->pc = 0x289264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28926Cu);
        ctx->pc = 0x289268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289264u;
        // 0x289268: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289264u, 0x28926Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28926Cu;
label_28926c:
    // 0x28926c: 0xc0a22a6  jal         func_288A98
label_289270:
    if (ctx->pc == 0x289270u) {
        ctx->pc = 0x289270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28926Cu;
        // 0x289270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289274u;
        goto label_289274;
    }
    ctx->pc = 0x28926Cu;
    SET_GPR_U32(ctx, 31, 0x289274u);
    ctx->pc = 0x289270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28926Cu;
    // 0x289270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28926Cu, 0x289274u)) {
        return;
    }
    ctx->pc = 0x289274u;
label_289274:
    // 0x289274: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x289274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_289278:
    // 0x289278: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x289278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28927c:
    // 0x28927c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28927cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_289280:
    // 0x289280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_289284:
    // 0x289284: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x289284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_289288:
    // 0x289288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28928c:
    // 0x28928c: 0x3e00008  jr          $ra
label_289290:
    if (ctx->pc == 0x289290u) {
        ctx->pc = 0x289290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28928Cu;
        // 0x289290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289294u;
        goto label_289294;
    }
    ctx->pc = 0x28928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28928Cu;
        // 0x289290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289294u;
label_289294:
    // 0x289294: 0x0  nop
    ctx->pc = 0x289294u;
    // NOP
    ctx->pc = 0x289298u;
}
