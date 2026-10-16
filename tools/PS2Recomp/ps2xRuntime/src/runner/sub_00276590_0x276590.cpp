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

// Function: sub_00276590
// Address: 0x276590 - 0x276668
void sub_00276590_0x276590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276590_0x276590");
#endif

    switch (ctx->pc) {
        case 0x276590u: goto label_276590;
        case 0x276594u: goto label_276594;
        case 0x276598u: goto label_276598;
        case 0x27659cu: goto label_27659c;
        case 0x2765a0u: goto label_2765a0;
        case 0x2765a4u: goto label_2765a4;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765acu: goto label_2765ac;
        case 0x2765b0u: goto label_2765b0;
        case 0x2765b4u: goto label_2765b4;
        case 0x2765b8u: goto label_2765b8;
        case 0x2765bcu: goto label_2765bc;
        case 0x2765c0u: goto label_2765c0;
        case 0x2765c4u: goto label_2765c4;
        case 0x2765c8u: goto label_2765c8;
        case 0x2765ccu: goto label_2765cc;
        case 0x2765d0u: goto label_2765d0;
        case 0x2765d4u: goto label_2765d4;
        case 0x2765d8u: goto label_2765d8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e0u: goto label_2765e0;
        case 0x2765e4u: goto label_2765e4;
        case 0x2765e8u: goto label_2765e8;
        case 0x2765ecu: goto label_2765ec;
        case 0x2765f0u: goto label_2765f0;
        case 0x2765f4u: goto label_2765f4;
        case 0x2765f8u: goto label_2765f8;
        case 0x2765fcu: goto label_2765fc;
        case 0x276600u: goto label_276600;
        case 0x276604u: goto label_276604;
        case 0x276608u: goto label_276608;
        case 0x27660cu: goto label_27660c;
        case 0x276610u: goto label_276610;
        case 0x276614u: goto label_276614;
        case 0x276618u: goto label_276618;
        case 0x27661cu: goto label_27661c;
        case 0x276620u: goto label_276620;
        case 0x276624u: goto label_276624;
        case 0x276628u: goto label_276628;
        case 0x27662cu: goto label_27662c;
        case 0x276630u: goto label_276630;
        case 0x276634u: goto label_276634;
        case 0x276638u: goto label_276638;
        case 0x27663cu: goto label_27663c;
        case 0x276640u: goto label_276640;
        case 0x276644u: goto label_276644;
        case 0x276648u: goto label_276648;
        case 0x27664cu: goto label_27664c;
        case 0x276650u: goto label_276650;
        case 0x276654u: goto label_276654;
        case 0x276658u: goto label_276658;
        case 0x27665cu: goto label_27665c;
        case 0x276660u: goto label_276660;
        case 0x276664u: goto label_276664;
        default: break;
    }

    ctx->pc = 0x276590u;

label_276590:
    // 0x276590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x276590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_276594:
    // 0x276594: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x276594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_276598:
    // 0x276598: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x276598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_27659c:
    // 0x27659c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2765a0:
    // 0x2765a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2765a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2765a4:
    // 0x2765a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2765a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2765a8:
    // 0x2765a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2765a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2765ac:
    // 0x2765ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2765acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2765b0:
    // 0x2765b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2765b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2765b4:
    // 0x2765b4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2765b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2765b8:
    // 0x2765b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2765b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2765bc:
    // 0x2765bc: 0x16130002  bne         $s0, $s3, . + 4 + (0x2 << 2)
label_2765c0:
    if (ctx->pc == 0x2765C0u) {
        ctx->pc = 0x2765C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765BCu;
        // 0x2765c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2765C4u;
        goto label_2765c4;
    }
    ctx->pc = 0x2765BCu;
    {
        const bool branch_taken_0x2765bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2765C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765BCu;
        // 0x2765c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765bc) {
            ctx->pc = 0x2765C8u;
            goto label_2765c8;
        }
    }
    ctx->pc = 0x2765C4u;
label_2765c4:
    // 0x2765c4: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2765c8:
    // 0x2765c8: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x2765c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2765cc:
    // 0x2765cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2765ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2765d0:
    // 0x2765d0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2765d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2765d4:
    // 0x2765d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2765d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2765d8:
    // 0x2765d8: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x2765d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_2765dc:
    // 0x2765dc: 0x40f809  jalr        $v0
label_2765e0:
    if (ctx->pc == 0x2765E0u) {
        ctx->pc = 0x2765E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765DCu;
        // 0x2765e0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2765E4u;
        goto label_2765e4;
    }
    ctx->pc = 0x2765DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2765E4u);
        ctx->pc = 0x2765E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765DCu;
        // 0x2765e0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2765DCu, 0x2765E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2765E4u;
label_2765e4:
    // 0x2765e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2765e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2765e8:
    // 0x2765e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2765ec:
    // 0x2765ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2765ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2765f0:
    // 0x2765f0: 0xac71002c  sw          $s1, 0x2C($v1)
    ctx->pc = 0x2765f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 17));
label_2765f4:
    // 0x2765f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2765f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2765f8:
    // 0x2765f8: 0xac730028  sw          $s3, 0x28($v1)
    ctx->pc = 0x2765f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 19));
label_2765fc:
    // 0x2765fc: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x2765fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_276600:
    // 0x276600: 0xac720038  sw          $s2, 0x38($v1)
    ctx->pc = 0x276600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 18));
label_276604:
    // 0x276604: 0xac740034  sw          $s4, 0x34($v1)
    ctx->pc = 0x276604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 20));
label_276608:
    // 0x276608: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x276608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
label_27660c:
    // 0x27660c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27660cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276610:
    // 0x276610: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x276610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276614:
    // 0x276614: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x276614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_276618:
    // 0x276618: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x276618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27661c:
    // 0x27661c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27661cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_276620:
    // 0x276620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276624:
    // 0x276624: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x276624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_276628:
    // 0x276628: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x276628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_27662c:
    // 0x27662c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27662cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_276630:
    // 0x276630: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x276630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_276634:
    // 0x276634: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x276634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_276638:
    // 0x276638: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x276638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_27663c:
    // 0x27663c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x27663cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_276640:
    // 0x276640: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x276640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_276644:
    // 0x276644: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x276644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_276648:
    // 0x276648: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x276648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_27664c:
    // 0x27664c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x27664cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_276650:
    // 0x276650: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x276650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_276654:
    // 0x276654: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x276654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_276658:
    // 0x276658: 0x3e00008  jr          $ra
label_27665c:
    if (ctx->pc == 0x27665Cu) {
        ctx->pc = 0x27665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276658u;
        // 0x27665c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276660u;
        goto label_276660;
    }
    ctx->pc = 0x276658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276658u;
        // 0x27665c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276660u;
label_276660:
    // 0x276660: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x276660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_276664:
    // 0x276664: 0x0  nop
    ctx->pc = 0x276664u;
    // NOP
    ctx->pc = 0x276668u;
}
