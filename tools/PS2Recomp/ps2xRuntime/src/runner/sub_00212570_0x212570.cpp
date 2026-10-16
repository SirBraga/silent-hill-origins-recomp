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

// Function: sub_00212570
// Address: 0x212570 - 0x2126f0
void sub_00212570_0x212570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212570_0x212570");
#endif

    switch (ctx->pc) {
        case 0x212570u: goto label_212570;
        case 0x212574u: goto label_212574;
        case 0x212578u: goto label_212578;
        case 0x21257cu: goto label_21257c;
        case 0x212580u: goto label_212580;
        case 0x212584u: goto label_212584;
        case 0x212588u: goto label_212588;
        case 0x21258cu: goto label_21258c;
        case 0x212590u: goto label_212590;
        case 0x212594u: goto label_212594;
        case 0x212598u: goto label_212598;
        case 0x21259cu: goto label_21259c;
        case 0x2125a0u: goto label_2125a0;
        case 0x2125a4u: goto label_2125a4;
        case 0x2125a8u: goto label_2125a8;
        case 0x2125acu: goto label_2125ac;
        case 0x2125b0u: goto label_2125b0;
        case 0x2125b4u: goto label_2125b4;
        case 0x2125b8u: goto label_2125b8;
        case 0x2125bcu: goto label_2125bc;
        case 0x2125c0u: goto label_2125c0;
        case 0x2125c4u: goto label_2125c4;
        case 0x2125c8u: goto label_2125c8;
        case 0x2125ccu: goto label_2125cc;
        case 0x2125d0u: goto label_2125d0;
        case 0x2125d4u: goto label_2125d4;
        case 0x2125d8u: goto label_2125d8;
        case 0x2125dcu: goto label_2125dc;
        case 0x2125e0u: goto label_2125e0;
        case 0x2125e4u: goto label_2125e4;
        case 0x2125e8u: goto label_2125e8;
        case 0x2125ecu: goto label_2125ec;
        case 0x2125f0u: goto label_2125f0;
        case 0x2125f4u: goto label_2125f4;
        case 0x2125f8u: goto label_2125f8;
        case 0x2125fcu: goto label_2125fc;
        case 0x212600u: goto label_212600;
        case 0x212604u: goto label_212604;
        case 0x212608u: goto label_212608;
        case 0x21260cu: goto label_21260c;
        case 0x212610u: goto label_212610;
        case 0x212614u: goto label_212614;
        case 0x212618u: goto label_212618;
        case 0x21261cu: goto label_21261c;
        case 0x212620u: goto label_212620;
        case 0x212624u: goto label_212624;
        case 0x212628u: goto label_212628;
        case 0x21262cu: goto label_21262c;
        case 0x212630u: goto label_212630;
        case 0x212634u: goto label_212634;
        case 0x212638u: goto label_212638;
        case 0x21263cu: goto label_21263c;
        case 0x212640u: goto label_212640;
        case 0x212644u: goto label_212644;
        case 0x212648u: goto label_212648;
        case 0x21264cu: goto label_21264c;
        case 0x212650u: goto label_212650;
        case 0x212654u: goto label_212654;
        case 0x212658u: goto label_212658;
        case 0x21265cu: goto label_21265c;
        case 0x212660u: goto label_212660;
        case 0x212664u: goto label_212664;
        case 0x212668u: goto label_212668;
        case 0x21266cu: goto label_21266c;
        case 0x212670u: goto label_212670;
        case 0x212674u: goto label_212674;
        case 0x212678u: goto label_212678;
        case 0x21267cu: goto label_21267c;
        case 0x212680u: goto label_212680;
        case 0x212684u: goto label_212684;
        case 0x212688u: goto label_212688;
        case 0x21268cu: goto label_21268c;
        case 0x212690u: goto label_212690;
        case 0x212694u: goto label_212694;
        case 0x212698u: goto label_212698;
        case 0x21269cu: goto label_21269c;
        case 0x2126a0u: goto label_2126a0;
        case 0x2126a4u: goto label_2126a4;
        case 0x2126a8u: goto label_2126a8;
        case 0x2126acu: goto label_2126ac;
        case 0x2126b0u: goto label_2126b0;
        case 0x2126b4u: goto label_2126b4;
        case 0x2126b8u: goto label_2126b8;
        case 0x2126bcu: goto label_2126bc;
        case 0x2126c0u: goto label_2126c0;
        case 0x2126c4u: goto label_2126c4;
        case 0x2126c8u: goto label_2126c8;
        case 0x2126ccu: goto label_2126cc;
        case 0x2126d0u: goto label_2126d0;
        case 0x2126d4u: goto label_2126d4;
        case 0x2126d8u: goto label_2126d8;
        case 0x2126dcu: goto label_2126dc;
        case 0x2126e0u: goto label_2126e0;
        case 0x2126e4u: goto label_2126e4;
        case 0x2126e8u: goto label_2126e8;
        case 0x2126ecu: goto label_2126ec;
        default: break;
    }

    ctx->pc = 0x212570u;

label_212570:
    // 0x212570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_212574:
    // 0x212574: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x212574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_212578:
    // 0x212578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21257c:
    // 0x21257c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21257cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212580:
    // 0x212580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_212584:
    // 0x212584: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_212588:
    if (ctx->pc == 0x212588u) {
        ctx->pc = 0x212588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212584u;
        // 0x212588: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21258Cu;
        goto label_21258c;
    }
    ctx->pc = 0x212584u;
    {
        const bool branch_taken_0x212584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x212588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212584u;
        // 0x212588: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212584) {
            ctx->pc = 0x2125A8u;
            goto label_2125a8;
        }
    }
    ctx->pc = 0x21258Cu;
label_21258c:
    // 0x21258c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x21258cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_212590:
    // 0x212590: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_212594:
    // 0x212594: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_212598:
    if (ctx->pc == 0x212598u) {
        ctx->pc = 0x212598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212594u;
        // 0x212598: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21259Cu;
        goto label_21259c;
    }
    ctx->pc = 0x212594u;
    {
        const bool branch_taken_0x212594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212594u;
        // 0x212598: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212594) {
            ctx->pc = 0x2126D8u;
            goto label_2126d8;
        }
    }
    ctx->pc = 0x21259Cu;
label_21259c:
    // 0x21259c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x21259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2125a0:
    // 0x2125a0: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_2125a4:
    if (ctx->pc == 0x2125A4u) {
        ctx->pc = 0x2125A8u;
        goto label_2125a8;
    }
    ctx->pc = 0x2125A0u;
    {
        const bool branch_taken_0x2125a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2125a0) {
            ctx->pc = 0x2125B0u;
            goto label_2125b0;
        }
    }
    ctx->pc = 0x2125A8u;
label_2125a8:
    // 0x2125a8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2125ac:
    if (ctx->pc == 0x2125ACu) {
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125B0u;
        goto label_2125b0;
    }
    ctx->pc = 0x2125A8u;
    {
        const bool branch_taken_0x2125a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a8) {
            ctx->pc = 0x2126D8u;
            goto label_2126d8;
        }
    }
    ctx->pc = 0x2125B0u;
label_2125b0:
    // 0x2125b0: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_2125b4:
    if (ctx->pc == 0x2125B4u) {
        ctx->pc = 0x2125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125B0u;
        // 0x2125b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125B8u;
        goto label_2125b8;
    }
    ctx->pc = 0x2125B0u;
    {
        const bool branch_taken_0x2125b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125B0u;
        // 0x2125b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125b0) {
            ctx->pc = 0x2126D8u;
            goto label_2126d8;
        }
    }
    ctx->pc = 0x2125B8u;
label_2125b8:
    // 0x2125b8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2125bc:
    // 0x2125bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2125c0:
    if (ctx->pc == 0x2125C0u) {
        ctx->pc = 0x2125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125BCu;
        // 0x2125c0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125C4u;
        goto label_2125c4;
    }
    ctx->pc = 0x2125BCu;
    {
        const bool branch_taken_0x2125bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125BCu;
        // 0x2125c0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125bc) {
            ctx->pc = 0x2125D4u;
            goto label_2125d4;
        }
    }
    ctx->pc = 0x2125C4u;
label_2125c4:
    // 0x2125c4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2125c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2125c8:
    // 0x2125c8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2125c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2125cc:
    // 0x2125cc: 0x244249b0  addiu       $v0, $v0, 0x49B0
    ctx->pc = 0x2125ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18864));
label_2125d0:
    // 0x2125d0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2125d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2125d4:
    // 0x2125d4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2125d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2125d8:
    // 0x2125d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2125dc:
    if (ctx->pc == 0x2125DCu) {
        ctx->pc = 0x2125DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125D8u;
        // 0x2125dc: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125E0u;
        goto label_2125e0;
    }
    ctx->pc = 0x2125D8u;
    {
        const bool branch_taken_0x2125d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2125d8) {
            ctx->pc = 0x2125DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2125D8u;
            // 0x2125dc: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2125F0u;
            goto label_2125f0;
        }
    }
    ctx->pc = 0x2125E0u;
label_2125e0:
    // 0x2125e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2125e4:
    // 0x2125e4: 0x244249d0  addiu       $v0, $v0, 0x49D0
    ctx->pc = 0x2125e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
label_2125e8:
    // 0x2125e8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2125e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2125ec:
    // 0x2125ec: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2125ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2125f0:
    // 0x2125f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2125f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2125f4:
    // 0x2125f4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2125f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2125f8:
    // 0x2125f8: 0x40f809  jalr        $v0
label_2125fc:
    if (ctx->pc == 0x2125FCu) {
        ctx->pc = 0x2125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125F8u;
        // 0x2125fc: 0x24062540  addiu       $a2, $zero, 0x2540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212600u;
        goto label_212600;
    }
    ctx->pc = 0x2125F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212600u);
        ctx->pc = 0x2125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125F8u;
        // 0x2125fc: 0x24062540  addiu       $a2, $zero, 0x2540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2125F8u, 0x212600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212600u;
label_212600:
    // 0x212600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x212600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212604:
    // 0x212604: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
label_212608:
    if (ctx->pc == 0x212608u) {
        ctx->pc = 0x212608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212604u;
        // 0x212608: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21260Cu;
        goto label_21260c;
    }
    ctx->pc = 0x212604u;
    {
        const bool branch_taken_0x212604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212604u;
        // 0x212608: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212604) {
            ctx->pc = 0x2126D8u;
            goto label_2126d8;
        }
    }
    ctx->pc = 0x21260Cu;
label_21260c:
    // 0x21260c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_212610:
    if (ctx->pc == 0x212610u) {
        ctx->pc = 0x212610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21260Cu;
        // 0x212610: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212614u;
        goto label_212614;
    }
    ctx->pc = 0x21260Cu;
    {
        const bool branch_taken_0x21260c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x212610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21260Cu;
        // 0x212610: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21260c) {
            ctx->pc = 0x212620u;
            goto label_212620;
        }
    }
    ctx->pc = 0x212614u;
label_212614:
    // 0x212614: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x212614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_212618:
    // 0x212618: 0x10000008  b           . + 4 + (0x8 << 2)
label_21261c:
    if (ctx->pc == 0x21261Cu) {
        ctx->pc = 0x21261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212618u;
        // 0x21261c: 0x118823  negu        $s1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212620u;
        goto label_212620;
    }
    ctx->pc = 0x212618u;
    {
        const bool branch_taken_0x212618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212618u;
        // 0x21261c: 0x118823  negu        $s1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212618) {
            ctx->pc = 0x21263Cu;
            goto label_21263c;
        }
    }
    ctx->pc = 0x212620u;
label_212620:
    // 0x212620: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_212624:
    // 0x212624: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x212624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_212628:
    // 0x212628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21262c:
    // 0x21262c: 0x91202a  slt         $a0, $a0, $s1
    ctx->pc = 0x21262cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_212630:
    // 0x212630: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x212630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
label_212634:
    // 0x212634: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x212634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_212638:
    // 0x212638: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x212638u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
label_21263c:
    // 0x21263c: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x21263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_212640:
    // 0x212640: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x212640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_212644:
    // 0x212644: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_212648:
    if (ctx->pc == 0x212648u) {
        ctx->pc = 0x212648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212644u;
        // 0x212648: 0xacb1002c  sw          $s1, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21264Cu;
        goto label_21264c;
    }
    ctx->pc = 0x212644u;
    {
        const bool branch_taken_0x212644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212644) {
            ctx->pc = 0x212648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212644u;
            // 0x212648: 0xacb1002c  sw          $s1, 0x2C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212664u;
            goto label_212664;
        }
    }
    ctx->pc = 0x21264Cu;
label_21264c:
    // 0x21264c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x21264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_212650:
    // 0x212650: 0x40f809  jalr        $v0
label_212654:
    if (ctx->pc == 0x212654u) {
        ctx->pc = 0x212654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212650u;
        // 0x212654: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212658u;
        goto label_212658;
    }
    ctx->pc = 0x212650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212658u);
        ctx->pc = 0x212654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212650u;
        // 0x212654: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212650u, 0x212658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212658u;
label_212658:
    // 0x212658: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x212658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_21265c:
    // 0x21265c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_212660:
    if (ctx->pc == 0x212660u) {
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212664u;
        goto label_212664;
    }
    ctx->pc = 0x21265Cu;
    {
        const bool branch_taken_0x21265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21265c) {
            ctx->pc = 0x2126D8u;
            goto label_2126d8;
        }
    }
    ctx->pc = 0x212664u;
label_212664:
    // 0x212664: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_212668:
    if (ctx->pc == 0x212668u) {
        ctx->pc = 0x212668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212664u;
        // 0x212668: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21266Cu;
        goto label_21266c;
    }
    ctx->pc = 0x212664u;
    {
        const bool branch_taken_0x212664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x212668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212664u;
        // 0x212668: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212664) {
            ctx->pc = 0x212678u;
            goto label_212678;
        }
    }
    ctx->pc = 0x21266Cu;
label_21266c:
    // 0x21266c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x21266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_212670:
    // 0x212670: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_212674:
    if (ctx->pc == 0x212674u) {
        ctx->pc = 0x212674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212670u;
        // 0x212674: 0xfc800020  sd          $zero, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212678u;
        goto label_212678;
    }
    ctx->pc = 0x212670u;
    {
        const bool branch_taken_0x212670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x212670) {
            ctx->pc = 0x212674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212670u;
            // 0x212674: 0xfc800020  sd          $zero, 0x20($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212680u;
            goto label_212680;
        }
    }
    ctx->pc = 0x212678u;
label_212678:
    // 0x212678: 0x10000016  b           . + 4 + (0x16 << 2)
label_21267c:
    if (ctx->pc == 0x21267Cu) {
        ctx->pc = 0x21267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212678u;
        // 0x21267c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212680u;
        goto label_212680;
    }
    ctx->pc = 0x212678u;
    {
        const bool branch_taken_0x212678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212678u;
        // 0x21267c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212678) {
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x212680u;
label_212680:
    // 0x212680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212684:
    // 0x212684: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x212684u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
label_212688:
    // 0x212688: 0x2483053c  addiu       $v1, $a0, 0x53C
    ctx->pc = 0x212688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1340));
label_21268c:
    // 0x21268c: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x21268cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
label_212690:
    // 0x212690: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x212690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_212694:
    // 0x212694: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x212694u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
label_212698:
    // 0x212698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21269c:
    // 0x21269c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x21269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2126a0:
    // 0x2126a0: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2126a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
label_2126a4:
    // 0x2126a4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2126a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2126a8:
    // 0x2126a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2126a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2126ac:
    // 0x2126ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2126acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2126b0:
    // 0x2126b0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2126b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2126b4:
    // 0x2126b4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2126b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_2126b8:
    // 0x2126b8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2126b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_2126bc:
    // 0x2126bc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2126bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2126c0:
    // 0x2126c0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2126c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_2126c4:
    // 0x2126c4: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x2126c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_2126c8:
    // 0x2126c8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2126c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2126cc:
    // 0x2126cc: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x2126ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_2126d0:
    // 0x2126d0: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x2126d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
label_2126d4:
    // 0x2126d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2126d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2126d8:
    // 0x2126d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2126d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2126dc:
    // 0x2126dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2126dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2126e0:
    // 0x2126e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2126e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2126e4:
    // 0x2126e4: 0x3e00008  jr          $ra
label_2126e8:
    if (ctx->pc == 0x2126E8u) {
        ctx->pc = 0x2126E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126E4u;
        // 0x2126e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2126ECu;
        goto label_2126ec;
    }
    ctx->pc = 0x2126E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126E4u;
        // 0x2126e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126ECu;
label_2126ec:
    // 0x2126ec: 0x0  nop
    ctx->pc = 0x2126ecu;
    // NOP
    ctx->pc = 0x2126f0u;
}
