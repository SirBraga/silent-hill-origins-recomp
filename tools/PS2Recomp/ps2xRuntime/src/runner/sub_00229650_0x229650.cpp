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

// Function: sub_00229650
// Address: 0x229650 - 0x2296d8
void sub_00229650_0x229650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229650_0x229650");
#endif

    switch (ctx->pc) {
        case 0x229650u: goto label_229650;
        case 0x229654u: goto label_229654;
        case 0x229658u: goto label_229658;
        case 0x22965cu: goto label_22965c;
        case 0x229660u: goto label_229660;
        case 0x229664u: goto label_229664;
        case 0x229668u: goto label_229668;
        case 0x22966cu: goto label_22966c;
        case 0x229670u: goto label_229670;
        case 0x229674u: goto label_229674;
        case 0x229678u: goto label_229678;
        case 0x22967cu: goto label_22967c;
        case 0x229680u: goto label_229680;
        case 0x229684u: goto label_229684;
        case 0x229688u: goto label_229688;
        case 0x22968cu: goto label_22968c;
        case 0x229690u: goto label_229690;
        case 0x229694u: goto label_229694;
        case 0x229698u: goto label_229698;
        case 0x22969cu: goto label_22969c;
        case 0x2296a0u: goto label_2296a0;
        case 0x2296a4u: goto label_2296a4;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296acu: goto label_2296ac;
        case 0x2296b0u: goto label_2296b0;
        case 0x2296b4u: goto label_2296b4;
        case 0x2296b8u: goto label_2296b8;
        case 0x2296bcu: goto label_2296bc;
        case 0x2296c0u: goto label_2296c0;
        case 0x2296c4u: goto label_2296c4;
        case 0x2296c8u: goto label_2296c8;
        case 0x2296ccu: goto label_2296cc;
        case 0x2296d0u: goto label_2296d0;
        case 0x2296d4u: goto label_2296d4;
        default: break;
    }

    ctx->pc = 0x229650u;

label_229650:
    // 0x229650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_229654:
    // 0x229654: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x229654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_229658:
    // 0x229658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22965c:
    // 0x22965c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_229660:
    // 0x229660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229664:
    // 0x229664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_229668:
    // 0x229668: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x229668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22966c:
    // 0x22966c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x22966cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_229670:
    // 0x229670: 0xc08a588  jal         func_229620
label_229674:
    if (ctx->pc == 0x229674u) {
        ctx->pc = 0x229674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229670u;
        // 0x229674: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229678u;
        goto label_229678;
    }
    ctx->pc = 0x229670u;
    SET_GPR_U32(ctx, 31, 0x229678u);
    ctx->pc = 0x229674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229670u;
    // 0x229674: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229620u, 0x229670u, 0x229678u)) {
        return;
    }
    ctx->pc = 0x229678u;
label_229678:
    // 0x229678: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x229678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_22967c:
    // 0x22967c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x22967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_229680:
    // 0x229680: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_229684:
    if (ctx->pc == 0x229684u) {
        ctx->pc = 0x229684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229680u;
        // 0x229684: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229688u;
        goto label_229688;
    }
    ctx->pc = 0x229680u;
    {
        const bool branch_taken_0x229680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229680u;
        // 0x229684: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229680) {
            ctx->pc = 0x2296C0u;
            goto label_2296c0;
        }
    }
    ctx->pc = 0x229688u;
label_229688:
    // 0x229688: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x229688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22968c:
    // 0x22968c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229690:
    // 0x229690: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x229690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_229694:
    // 0x229694: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x229694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_229698:
    // 0x229698: 0x40f809  jalr        $v0
label_22969c:
    if (ctx->pc == 0x22969Cu) {
        ctx->pc = 0x22969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229698u;
        // 0x22969c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296A0u;
        goto label_2296a0;
    }
    ctx->pc = 0x229698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2296A0u);
        ctx->pc = 0x22969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229698u;
        // 0x22969c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229698u, 0x2296A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2296A0u;
label_2296a0:
    // 0x2296a0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_2296a4:
    if (ctx->pc == 0x2296A4u) {
        ctx->pc = 0x2296A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296A0u;
        // 0x2296a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296A8u;
        goto label_2296a8;
    }
    ctx->pc = 0x2296A0u;
    {
        const bool branch_taken_0x2296a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296a0) {
            ctx->pc = 0x2296A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296A0u;
            // 0x2296a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2296C4u;
            goto label_2296c4;
        }
    }
    ctx->pc = 0x2296A8u;
label_2296a8:
    // 0x2296a8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2296ac:
    // 0x2296ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2296b0:
    if (ctx->pc == 0x2296B0u) {
        ctx->pc = 0x2296B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296ACu;
        // 0x2296b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296B4u;
        goto label_2296b4;
    }
    ctx->pc = 0x2296ACu;
    {
        const bool branch_taken_0x2296ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2296B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296ACu;
        // 0x2296b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296ac) {
            ctx->pc = 0x2296C0u;
            goto label_2296c0;
        }
    }
    ctx->pc = 0x2296B4u;
label_2296b4:
    // 0x2296b4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2296b8:
    // 0x2296b8: 0x40f809  jalr        $v0
label_2296bc:
    if (ctx->pc == 0x2296BCu) {
        ctx->pc = 0x2296BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B8u;
        // 0x2296bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296C0u;
        goto label_2296c0;
    }
    ctx->pc = 0x2296B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2296C0u);
        ctx->pc = 0x2296BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B8u;
        // 0x2296bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2296B8u, 0x2296C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2296C0u;
label_2296c0:
    // 0x2296c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2296c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2296c4:
    // 0x2296c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2296c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2296c8:
    // 0x2296c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2296c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2296cc:
    // 0x2296cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2296ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2296d0:
    // 0x2296d0: 0x3e00008  jr          $ra
label_2296d4:
    if (ctx->pc == 0x2296D4u) {
        ctx->pc = 0x2296D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296D0u;
        // 0x2296d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296D8u;
        goto label_fallthrough_0x2296d0;
    }
    ctx->pc = 0x2296D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2296D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296D0u;
        // 0x2296d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2296D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2296d0:
    ctx->pc = 0x2296D8u;
}
