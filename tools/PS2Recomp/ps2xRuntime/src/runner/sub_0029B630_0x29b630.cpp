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

// Function: sub_0029B630
// Address: 0x29b630 - 0x29b710
void sub_0029B630_0x29b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B630_0x29b630");
#endif

    switch (ctx->pc) {
        case 0x29b630u: goto label_29b630;
        case 0x29b634u: goto label_29b634;
        case 0x29b638u: goto label_29b638;
        case 0x29b63cu: goto label_29b63c;
        case 0x29b640u: goto label_29b640;
        case 0x29b644u: goto label_29b644;
        case 0x29b648u: goto label_29b648;
        case 0x29b64cu: goto label_29b64c;
        case 0x29b650u: goto label_29b650;
        case 0x29b654u: goto label_29b654;
        case 0x29b658u: goto label_29b658;
        case 0x29b65cu: goto label_29b65c;
        case 0x29b660u: goto label_29b660;
        case 0x29b664u: goto label_29b664;
        case 0x29b668u: goto label_29b668;
        case 0x29b66cu: goto label_29b66c;
        case 0x29b670u: goto label_29b670;
        case 0x29b674u: goto label_29b674;
        case 0x29b678u: goto label_29b678;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b680u: goto label_29b680;
        case 0x29b684u: goto label_29b684;
        case 0x29b688u: goto label_29b688;
        case 0x29b68cu: goto label_29b68c;
        case 0x29b690u: goto label_29b690;
        case 0x29b694u: goto label_29b694;
        case 0x29b698u: goto label_29b698;
        case 0x29b69cu: goto label_29b69c;
        case 0x29b6a0u: goto label_29b6a0;
        case 0x29b6a4u: goto label_29b6a4;
        case 0x29b6a8u: goto label_29b6a8;
        case 0x29b6acu: goto label_29b6ac;
        case 0x29b6b0u: goto label_29b6b0;
        case 0x29b6b4u: goto label_29b6b4;
        case 0x29b6b8u: goto label_29b6b8;
        case 0x29b6bcu: goto label_29b6bc;
        case 0x29b6c0u: goto label_29b6c0;
        case 0x29b6c4u: goto label_29b6c4;
        case 0x29b6c8u: goto label_29b6c8;
        case 0x29b6ccu: goto label_29b6cc;
        case 0x29b6d0u: goto label_29b6d0;
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b6d8u: goto label_29b6d8;
        case 0x29b6dcu: goto label_29b6dc;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6e4u: goto label_29b6e4;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b6ecu: goto label_29b6ec;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b6f4u: goto label_29b6f4;
        case 0x29b6f8u: goto label_29b6f8;
        case 0x29b6fcu: goto label_29b6fc;
        case 0x29b700u: goto label_29b700;
        case 0x29b704u: goto label_29b704;
        case 0x29b708u: goto label_29b708;
        case 0x29b70cu: goto label_29b70c;
        default: break;
    }

    ctx->pc = 0x29b630u;

label_29b630:
    // 0x29b630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29b634:
    // 0x29b634: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29b638:
    // 0x29b638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29b63c:
    // 0x29b63c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29b63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29b640:
    // 0x29b640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29b644:
    // 0x29b644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29b644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29b648:
    // 0x29b648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29b64c:
    // 0x29b64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b650:
    // 0x29b650: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29b654:
    // 0x29b654: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_29b658:
    // 0x29b658: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x29b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_29b65c:
    // 0x29b65c: 0x40f809  jalr        $v0
label_29b660:
    if (ctx->pc == 0x29B660u) {
        ctx->pc = 0x29B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B65Cu;
        // 0x29b660: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B664u;
        goto label_29b664;
    }
    ctx->pc = 0x29B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B664u);
        ctx->pc = 0x29B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B65Cu;
        // 0x29b660: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B65Cu, 0x29B664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B664u;
label_29b664:
    // 0x29b664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29b668:
    // 0x29b668: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_29b66c:
    if (ctx->pc == 0x29B66Cu) {
        ctx->pc = 0x29B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B668u;
        // 0x29b66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B670u;
        goto label_29b670;
    }
    ctx->pc = 0x29B668u;
    {
        const bool branch_taken_0x29b668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B668u;
        // 0x29b66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b668) {
            ctx->pc = 0x29B6F4u;
            goto label_29b6f4;
        }
    }
    ctx->pc = 0x29B670u;
label_29b670:
    // 0x29b670: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_29b674:
    if (ctx->pc == 0x29B674u) {
        ctx->pc = 0x29B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B670u;
        // 0x29b674: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B678u;
        goto label_29b678;
    }
    ctx->pc = 0x29B670u;
    {
        const bool branch_taken_0x29b670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B670u;
        // 0x29b674: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b670) {
            ctx->pc = 0x29B680u;
            goto label_29b680;
        }
    }
    ctx->pc = 0x29B678u;
label_29b678:
    // 0x29b678: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_29b67c:
    if (ctx->pc == 0x29B67Cu) {
        ctx->pc = 0x29B680u;
        goto label_29b680;
    }
    ctx->pc = 0x29B678u;
    {
        const bool branch_taken_0x29b678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b678) {
            ctx->pc = 0x29B6A4u;
            goto label_29b6a4;
        }
    }
    ctx->pc = 0x29B680u;
label_29b680:
    // 0x29b680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b684:
    // 0x29b684: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_29b688:
    // 0x29b688: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_29b68c:
    // 0x29b68c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_29b690:
    // 0x29b690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b694:
    // 0x29b694: 0xc0a6dd8  jal         func_29B760
label_29b698:
    if (ctx->pc == 0x29B698u) {
        ctx->pc = 0x29B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B694u;
        // 0x29b698: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B69Cu;
        goto label_29b69c;
    }
    ctx->pc = 0x29B694u;
    SET_GPR_U32(ctx, 31, 0x29B69Cu);
    ctx->pc = 0x29B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B694u;
    // 0x29b698: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B760u, 0x29B694u, 0x29B69Cu)) {
        return;
    }
    ctx->pc = 0x29B69Cu;
label_29b69c:
    // 0x29b69c: 0x1000000a  b           . + 4 + (0xA << 2)
label_29b6a0:
    if (ctx->pc == 0x29B6A0u) {
        ctx->pc = 0x29B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B69Cu;
        // 0x29b6a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B6A4u;
        goto label_29b6a4;
    }
    ctx->pc = 0x29B69Cu;
    {
        const bool branch_taken_0x29b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B69Cu;
        // 0x29b6a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b69c) {
            ctx->pc = 0x29B6C8u;
            goto label_29b6c8;
        }
    }
    ctx->pc = 0x29B6A4u;
label_29b6a4:
    // 0x29b6a4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x29b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_29b6a8:
    // 0x29b6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29b6ac:
    // 0x29b6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b6b0:
    // 0x29b6b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29b6b4:
    // 0x29b6b4: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x29b6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_29b6b8:
    // 0x29b6b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b6bc:
    // 0x29b6bc: 0xc0a6dd8  jal         func_29B760
label_29b6c0:
    if (ctx->pc == 0x29B6C0u) {
        ctx->pc = 0x29B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6BCu;
        // 0x29b6c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B6C4u;
        goto label_29b6c4;
    }
    ctx->pc = 0x29B6BCu;
    SET_GPR_U32(ctx, 31, 0x29B6C4u);
    ctx->pc = 0x29B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6BCu;
    // 0x29b6c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B760u, 0x29B6BCu, 0x29B6C4u)) {
        return;
    }
    ctx->pc = 0x29B6C4u;
label_29b6c4:
    // 0x29b6c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29b6c8:
    // 0x29b6c8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_29b6cc:
    // 0x29b6cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_29b6d0:
    // 0x29b6d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x29b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_29b6d4:
    // 0x29b6d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29b6d8:
    if (ctx->pc == 0x29B6D8u) {
        ctx->pc = 0x29B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6D4u;
        // 0x29b6d8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B6DCu;
        goto label_29b6dc;
    }
    ctx->pc = 0x29B6D4u;
    {
        const bool branch_taken_0x29b6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6D4u;
        // 0x29b6d8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6d4) {
            ctx->pc = 0x29B6E4u;
            goto label_29b6e4;
        }
    }
    ctx->pc = 0x29B6DCu;
label_29b6dc:
    // 0x29b6dc: 0xc0a71ee  jal         func_29C7B8
label_29b6e0:
    if (ctx->pc == 0x29B6E0u) {
        ctx->pc = 0x29B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6DCu;
        // 0x29b6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B6E4u;
        goto label_29b6e4;
    }
    ctx->pc = 0x29B6DCu;
    SET_GPR_U32(ctx, 31, 0x29B6E4u);
    ctx->pc = 0x29B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6DCu;
    // 0x29b6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29B6DCu, 0x29B6E4u)) {
        return;
    }
    ctx->pc = 0x29B6E4u;
label_29b6e4:
    // 0x29b6e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_29b6e8:
    // 0x29b6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b6ec:
    // 0x29b6ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_29b6f0:
    // 0x29b6f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_29b6f4:
    // 0x29b6f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29b6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29b6f8:
    // 0x29b6f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29b6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b6fc:
    // 0x29b6fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b700:
    // 0x29b700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b704:
    // 0x29b704: 0x3e00008  jr          $ra
label_29b708:
    if (ctx->pc == 0x29B708u) {
        ctx->pc = 0x29B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B704u;
        // 0x29b708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B70Cu;
        goto label_29b70c;
    }
    ctx->pc = 0x29B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B704u;
        // 0x29b708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B70Cu;
label_29b70c:
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
    ctx->pc = 0x29b710u;
}
