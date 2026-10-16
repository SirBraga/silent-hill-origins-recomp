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

// Function: sub_0024A538
// Address: 0x24a538 - 0x24a5b8
void sub_0024A538_0x24a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A538_0x24a538");
#endif

    switch (ctx->pc) {
        case 0x24a538u: goto label_24a538;
        case 0x24a53cu: goto label_24a53c;
        case 0x24a540u: goto label_24a540;
        case 0x24a544u: goto label_24a544;
        case 0x24a548u: goto label_24a548;
        case 0x24a54cu: goto label_24a54c;
        case 0x24a550u: goto label_24a550;
        case 0x24a554u: goto label_24a554;
        case 0x24a558u: goto label_24a558;
        case 0x24a55cu: goto label_24a55c;
        case 0x24a560u: goto label_24a560;
        case 0x24a564u: goto label_24a564;
        case 0x24a568u: goto label_24a568;
        case 0x24a56cu: goto label_24a56c;
        case 0x24a570u: goto label_24a570;
        case 0x24a574u: goto label_24a574;
        case 0x24a578u: goto label_24a578;
        case 0x24a57cu: goto label_24a57c;
        case 0x24a580u: goto label_24a580;
        case 0x24a584u: goto label_24a584;
        case 0x24a588u: goto label_24a588;
        case 0x24a58cu: goto label_24a58c;
        case 0x24a590u: goto label_24a590;
        case 0x24a594u: goto label_24a594;
        case 0x24a598u: goto label_24a598;
        case 0x24a59cu: goto label_24a59c;
        case 0x24a5a0u: goto label_24a5a0;
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5a8u: goto label_24a5a8;
        case 0x24a5acu: goto label_24a5ac;
        case 0x24a5b0u: goto label_24a5b0;
        case 0x24a5b4u: goto label_24a5b4;
        default: break;
    }

    ctx->pc = 0x24a538u;

label_24a538:
    // 0x24a538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24a53c:
    // 0x24a53c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24a540:
    // 0x24a540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24a544:
    // 0x24a544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a548:
    // 0x24a548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24a54c:
    // 0x24a54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24a550:
    // 0x24a550: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24a554:
    // 0x24a554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24a558:
    if (ctx->pc == 0x24A558u) {
        ctx->pc = 0x24A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A554u;
        // 0x24a558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A55Cu;
        goto label_24a55c;
    }
    ctx->pc = 0x24A554u;
    {
        const bool branch_taken_0x24a554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A554u;
        // 0x24a558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a554) {
            ctx->pc = 0x24A568u;
            goto label_24a568;
        }
    }
    ctx->pc = 0x24A55Cu;
label_24a55c:
    // 0x24a55c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x24a55cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a560:
    // 0x24a560: 0x10000009  b           . + 4 + (0x9 << 2)
label_24a564:
    if (ctx->pc == 0x24A564u) {
        ctx->pc = 0x24A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A560u;
        // 0x24a564: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A568u;
        goto label_24a568;
    }
    ctx->pc = 0x24A560u;
    {
        const bool branch_taken_0x24a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A560u;
        // 0x24a564: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a560) {
            ctx->pc = 0x24A588u;
            goto label_24a588;
        }
    }
    ctx->pc = 0x24A568u;
label_24a568:
    // 0x24a568: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a56c:
    // 0x24a56c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_24a570:
    if (ctx->pc == 0x24A570u) {
        ctx->pc = 0x24A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A56Cu;
        // 0x24a570: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A574u;
        goto label_24a574;
    }
    ctx->pc = 0x24A56Cu;
    {
        const bool branch_taken_0x24a56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A56Cu;
        // 0x24a570: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a56c) {
            ctx->pc = 0x24A588u;
            goto label_24a588;
        }
    }
    ctx->pc = 0x24A574u;
label_24a574:
    // 0x24a574: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x24a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_24a578:
    // 0x24a578: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_24a57c:
    // 0x24a57c: 0x60f809  jalr        $v1
label_24a580:
    if (ctx->pc == 0x24A580u) {
        ctx->pc = 0x24A584u;
        goto label_24a584;
    }
    ctx->pc = 0x24A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A57Cu, 0x24A584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A584u;
label_24a584:
    // 0x24a584: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24a588:
    // 0x24a588: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_24a58c:
    // 0x24a58c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x24a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24a590:
    // 0x24a590: 0x40f809  jalr        $v0
label_24a594:
    if (ctx->pc == 0x24A594u) {
        ctx->pc = 0x24A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A590u;
        // 0x24a594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A598u;
        goto label_24a598;
    }
    ctx->pc = 0x24A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A598u);
        ctx->pc = 0x24A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A590u;
        // 0x24a594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A590u, 0x24A598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A598u;
label_24a598:
    // 0x24a598: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24a598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a59c:
    // 0x24a59c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24a59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a5a0:
    // 0x24a5a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24a5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a5a4:
    // 0x24a5a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24a5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a5a8:
    // 0x24a5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a5ac:
    // 0x24a5ac: 0x3e00008  jr          $ra
label_24a5b0:
    if (ctx->pc == 0x24A5B0u) {
        ctx->pc = 0x24A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5ACu;
        // 0x24a5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5B4u;
        goto label_24a5b4;
    }
    ctx->pc = 0x24A5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5ACu;
        // 0x24a5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A5B4u;
label_24a5b4:
    // 0x24a5b4: 0x0  nop
    ctx->pc = 0x24a5b4u;
    // NOP
    ctx->pc = 0x24a5b8u;
}
