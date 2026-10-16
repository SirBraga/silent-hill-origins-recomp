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

// Function: sub_002503D0
// Address: 0x2503d0 - 0x250480
void sub_002503D0_0x2503d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002503D0_0x2503d0");
#endif

    switch (ctx->pc) {
        case 0x2503d0u: goto label_2503d0;
        case 0x2503d4u: goto label_2503d4;
        case 0x2503d8u: goto label_2503d8;
        case 0x2503dcu: goto label_2503dc;
        case 0x2503e0u: goto label_2503e0;
        case 0x2503e4u: goto label_2503e4;
        case 0x2503e8u: goto label_2503e8;
        case 0x2503ecu: goto label_2503ec;
        case 0x2503f0u: goto label_2503f0;
        case 0x2503f4u: goto label_2503f4;
        case 0x2503f8u: goto label_2503f8;
        case 0x2503fcu: goto label_2503fc;
        case 0x250400u: goto label_250400;
        case 0x250404u: goto label_250404;
        case 0x250408u: goto label_250408;
        case 0x25040cu: goto label_25040c;
        case 0x250410u: goto label_250410;
        case 0x250414u: goto label_250414;
        case 0x250418u: goto label_250418;
        case 0x25041cu: goto label_25041c;
        case 0x250420u: goto label_250420;
        case 0x250424u: goto label_250424;
        case 0x250428u: goto label_250428;
        case 0x25042cu: goto label_25042c;
        case 0x250430u: goto label_250430;
        case 0x250434u: goto label_250434;
        case 0x250438u: goto label_250438;
        case 0x25043cu: goto label_25043c;
        case 0x250440u: goto label_250440;
        case 0x250444u: goto label_250444;
        case 0x250448u: goto label_250448;
        case 0x25044cu: goto label_25044c;
        case 0x250450u: goto label_250450;
        case 0x250454u: goto label_250454;
        case 0x250458u: goto label_250458;
        case 0x25045cu: goto label_25045c;
        case 0x250460u: goto label_250460;
        case 0x250464u: goto label_250464;
        case 0x250468u: goto label_250468;
        case 0x25046cu: goto label_25046c;
        case 0x250470u: goto label_250470;
        case 0x250474u: goto label_250474;
        case 0x250478u: goto label_250478;
        case 0x25047cu: goto label_25047c;
        default: break;
    }

    ctx->pc = 0x2503d0u;

label_2503d0:
    // 0x2503d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2503d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2503d4:
    // 0x2503d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2503d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2503d8:
    // 0x2503d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2503d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2503dc:
    // 0x2503dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2503dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2503e0:
    // 0x2503e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2503e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2503e4:
    // 0x2503e4: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x2503e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_2503e8:
    // 0x2503e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2503e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2503ec:
    // 0x2503ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2503ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2503f0:
    // 0x2503f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2503f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2503f4:
    // 0x2503f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2503f8:
    if (ctx->pc == 0x2503F8u) {
        ctx->pc = 0x2503F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503F4u;
        // 0x2503f8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503FCu;
        goto label_2503fc;
    }
    ctx->pc = 0x2503F4u;
    {
        const bool branch_taken_0x2503f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2503F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503F4u;
        // 0x2503f8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503f4) {
            ctx->pc = 0x250428u;
            goto label_250428;
        }
    }
    ctx->pc = 0x2503FCu;
label_2503fc:
    // 0x2503fc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2503fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_250400:
    // 0x250400: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_250404:
    if (ctx->pc == 0x250404u) {
        ctx->pc = 0x250404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250400u;
        // 0x250404: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250408u;
        goto label_250408;
    }
    ctx->pc = 0x250400u;
    {
        const bool branch_taken_0x250400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250400u;
        // 0x250404: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250400) {
            ctx->pc = 0x25041Cu;
            goto label_25041c;
        }
    }
    ctx->pc = 0x250408u;
label_250408:
    // 0x250408: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x250408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_25040c:
    // 0x25040c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x25040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_250410:
    // 0x250410: 0x60f809  jalr        $v1
label_250414:
    if (ctx->pc == 0x250414u) {
        ctx->pc = 0x250414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250410u;
        // 0x250414: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250418u;
        goto label_250418;
    }
    ctx->pc = 0x250410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x250418u);
        ctx->pc = 0x250414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250410u;
        // 0x250414: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250410u, 0x250418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250418u;
label_250418:
    // 0x250418: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x250418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_25041c:
    // 0x25041c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_250420:
    // 0x250420: 0x40f809  jalr        $v0
label_250424:
    if (ctx->pc == 0x250424u) {
        ctx->pc = 0x250424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250420u;
        // 0x250424: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250428u;
        goto label_250428;
    }
    ctx->pc = 0x250420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250428u);
        ctx->pc = 0x250424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250420u;
        // 0x250424: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250420u, 0x250428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250428u;
label_250428:
    // 0x250428: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_25042c:
    // 0x25042c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_250430:
    // 0x250430: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x250430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_250434:
    // 0x250434: 0xc09d90a  jal         func_276428
label_250438:
    if (ctx->pc == 0x250438u) {
        ctx->pc = 0x250438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250434u;
        // 0x250438: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25043Cu;
        goto label_25043c;
    }
    ctx->pc = 0x250434u;
    SET_GPR_U32(ctx, 31, 0x25043Cu);
    ctx->pc = 0x250438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250434u;
    // 0x250438: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x250434u, 0x25043Cu)) {
        return;
    }
    ctx->pc = 0x25043Cu;
label_25043c:
    // 0x25043c: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x25043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_250440:
    // 0x250440: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x250440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_250444:
    // 0x250444: 0x8c8441a4  lw          $a0, 0x41A4($a0)
    ctx->pc = 0x250444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_250448:
    // 0x250448: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x250448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_25044c:
    // 0x25044c: 0x40f809  jalr        $v0
label_250450:
    if (ctx->pc == 0x250450u) {
        ctx->pc = 0x250450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25044Cu;
        // 0x250450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250454u;
        goto label_250454;
    }
    ctx->pc = 0x25044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250454u);
        ctx->pc = 0x250450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25044Cu;
        // 0x250450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25044Cu, 0x250454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250454u;
label_250454:
    // 0x250454: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_250458:
    if (ctx->pc == 0x250458u) {
        ctx->pc = 0x250458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250454u;
        // 0x250458: 0x8f829130  lw          $v0, -0x6ED0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25045Cu;
        goto label_25045c;
    }
    ctx->pc = 0x250454u;
    {
        const bool branch_taken_0x250454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x250458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250454u;
        // 0x250458: 0x8f829130  lw          $v0, -0x6ED0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250454) {
            ctx->pc = 0x250464u;
            goto label_250464;
        }
    }
    ctx->pc = 0x25045Cu;
label_25045c:
    // 0x25045c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_250460:
    // 0x250460: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x250460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_250464:
    // 0x250464: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x250464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_250468:
    // 0x250468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25046c:
    // 0x25046c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25046cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_250470:
    // 0x250470: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x250470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_250474:
    // 0x250474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250478:
    // 0x250478: 0x3e00008  jr          $ra
label_25047c:
    if (ctx->pc == 0x25047Cu) {
        ctx->pc = 0x25047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250478u;
        // 0x25047c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250480u;
        goto label_fallthrough_0x250478;
    }
    ctx->pc = 0x250478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250478u;
        // 0x25047c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250478:
    ctx->pc = 0x250480u;
}
