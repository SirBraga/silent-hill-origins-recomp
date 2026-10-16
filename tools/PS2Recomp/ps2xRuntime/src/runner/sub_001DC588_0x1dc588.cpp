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

// Function: sub_001DC588
// Address: 0x1dc588 - 0x1dc6e8
void sub_001DC588_0x1dc588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC588_0x1dc588");
#endif

    switch (ctx->pc) {
        case 0x1dc588u: goto label_1dc588;
        case 0x1dc58cu: goto label_1dc58c;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc598u: goto label_1dc598;
        case 0x1dc59cu: goto label_1dc59c;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc64cu: goto label_1dc64c;
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        default: break;
    }

    ctx->pc = 0x1dc588u;

label_1dc588:
    // 0x1dc588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dc58c:
    // 0x1dc58c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1dc590:
    // 0x1dc590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dc590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dc594:
    // 0x1dc594: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dc598:
    // 0x1dc598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc59c:
    // 0x1dc59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dc5a0:
    // 0x1dc5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dc5a4:
    // 0x1dc5a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1dc5a8:
    // 0x1dc5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dc5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5ac:
    // 0x1dc5ac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1dc5b0:
    // 0x1dc5b0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1dc5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1dc5b4:
    // 0x1dc5b4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1dc5b8:
    if (ctx->pc == 0x1DC5B8u) {
        ctx->pc = 0x1DC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5B4u;
        // 0x1dc5b8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5BCu;
        goto label_1dc5bc;
    }
    ctx->pc = 0x1DC5B4u;
    {
        const bool branch_taken_0x1dc5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5B4u;
        // 0x1dc5b8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5b4) {
            ctx->pc = 0x1DC6D0u;
            goto label_1dc6d0;
        }
    }
    ctx->pc = 0x1DC5BCu;
label_1dc5bc:
    // 0x1dc5bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc5c0:
    // 0x1dc5c0: 0x24421be0  addiu       $v0, $v0, 0x1BE0
    ctx->pc = 0x1dc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7136));
label_1dc5c4:
    // 0x1dc5c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dc5c8:
    // 0x1dc5c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dc5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dc5cc:
    // 0x1dc5cc: 0x800008  jr          $a0
label_1dc5d0:
    if (ctx->pc == 0x1DC5D0u) {
        ctx->pc = 0x1DC5D4u;
        goto label_1dc5d4;
    }
    ctx->pc = 0x1DC5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC5D4u: goto label_1dc5d4;
            case 0x1DC664u: goto label_1dc664;
            case 0x1DC674u: goto label_1dc674;
            case 0x1DC68Cu: goto label_1dc68c;
            case 0x1DC6A4u: goto label_1dc6a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DC5D4u;
label_1dc5d4:
    // 0x1dc5d4: 0x8e22e664  lw          $v0, -0x199C($s1)
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc5d8:
    // 0x1dc5d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc5dc:
    // 0x1dc5dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dc5e0:
    // 0x1dc5e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1dc5e4:
    if (ctx->pc == 0x1DC5E4u) {
        ctx->pc = 0x1DC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5E0u;
        // 0x1dc5e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5E8u;
        goto label_1dc5e8;
    }
    ctx->pc = 0x1DC5E0u;
    {
        const bool branch_taken_0x1dc5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5E0u;
        // 0x1dc5e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5e0) {
            ctx->pc = 0x1DC600u;
            goto label_1dc600;
        }
    }
    ctx->pc = 0x1DC5E8u;
label_1dc5e8:
    // 0x1dc5e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dc5ec:
    // 0x1dc5ec: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_1dc5f0:
    // 0x1dc5f0: 0x40f809  jalr        $v0
label_1dc5f4:
    if (ctx->pc == 0x1DC5F4u) {
        ctx->pc = 0x1DC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F0u;
        // 0x1dc5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5F8u;
        goto label_1dc5f8;
    }
    ctx->pc = 0x1DC5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC5F8u);
        ctx->pc = 0x1DC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F0u;
        // 0x1dc5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5F0u, 0x1DC5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC5F8u;
label_1dc5f8:
    // 0x1dc5f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1dc5fc:
    if (ctx->pc == 0x1DC5FCu) {
        ctx->pc = 0x1DC600u;
        goto label_1dc600;
    }
    ctx->pc = 0x1DC5F8u;
    {
        const bool branch_taken_0x1dc5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5f8) {
            ctx->pc = 0x1DC614u;
            goto label_1dc614;
        }
    }
    ctx->pc = 0x1DC600u;
label_1dc600:
    // 0x1dc600: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1dc604:
    // 0x1dc604: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_1dc608:
    // 0x1dc608: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dc60c:
    // 0x1dc60c: 0x40f809  jalr        $v0
label_1dc610:
    if (ctx->pc == 0x1DC610u) {
        ctx->pc = 0x1DC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC60Cu;
        // 0x1dc610: 0x8cc5e640  lw          $a1, -0x19C0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC614u;
        goto label_1dc614;
    }
    ctx->pc = 0x1DC60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC614u);
        ctx->pc = 0x1DC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC60Cu;
        // 0x1dc610: 0x8cc5e640  lw          $a1, -0x19C0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960704)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC60Cu, 0x1DC614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC614u;
label_1dc614:
    // 0x1dc614: 0xc076d8e  jal         func_1DB638
label_1dc618:
    if (ctx->pc == 0x1DC618u) {
        ctx->pc = 0x1DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC614u;
        // 0x1dc618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC61Cu;
        goto label_1dc61c;
    }
    ctx->pc = 0x1DC614u;
    SET_GPR_U32(ctx, 31, 0x1DC61Cu);
    ctx->pc = 0x1DC618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC614u;
    // 0x1dc618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB638u, 0x1DC614u, 0x1DC61Cu)) {
        return;
    }
    ctx->pc = 0x1DC61Cu;
label_1dc61c:
    // 0x1dc61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc620:
    if (ctx->pc == 0x1DC620u) {
        ctx->pc = 0x1DC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC61Cu;
        // 0x1dc620: 0x8e25e664  lw          $a1, -0x199C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC624u;
        goto label_1dc624;
    }
    ctx->pc = 0x1DC61Cu;
    {
        const bool branch_taken_0x1dc61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC61Cu;
        // 0x1dc620: 0x8e25e664  lw          $a1, -0x199C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc61c) {
            ctx->pc = 0x1DC630u;
            goto label_1dc630;
        }
    }
    ctx->pc = 0x1DC624u;
label_1dc624:
    // 0x1dc624: 0xc077e8c  jal         func_1DFA30
label_1dc628:
    if (ctx->pc == 0x1DC628u) {
        ctx->pc = 0x1DC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC624u;
        // 0x1dc628: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC62Cu;
        goto label_1dc62c;
    }
    ctx->pc = 0x1DC624u;
    SET_GPR_U32(ctx, 31, 0x1DC62Cu);
    ctx->pc = 0x1DC628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC624u;
    // 0x1dc628: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA30u, 0x1DC624u, 0x1DC62Cu)) {
        return;
    }
    ctx->pc = 0x1DC62Cu;
label_1dc62c:
    // 0x1dc62c: 0x8e25e664  lw          $a1, -0x199C($s1)
    ctx->pc = 0x1dc62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc630:
    // 0x1dc630: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1dc634:
    // 0x1dc634: 0x24c6e648  addiu       $a2, $a2, -0x19B8
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960712));
label_1dc638:
    // 0x1dc638: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dc638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1dc63c:
    // 0x1dc63c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1dc640:
    // 0x1dc640: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x1dc640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1dc644:
    // 0x1dc644: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1dc644u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_1dc648:
    // 0x1dc648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dc64c:
    // 0x1dc64c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1dc650:
    // 0x1dc650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc654:
    // 0x1dc654: 0x60f809  jalr        $v1
label_1dc658:
    if (ctx->pc == 0x1DC658u) {
        ctx->pc = 0x1DC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC654u;
        // 0x1dc658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC65Cu;
        goto label_1dc65c;
    }
    ctx->pc = 0x1DC654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC65Cu);
        ctx->pc = 0x1DC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC654u;
        // 0x1dc658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC654u, 0x1DC65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC65Cu;
label_1dc65c:
    // 0x1dc65c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1dc660:
    if (ctx->pc == 0x1DC660u) {
        ctx->pc = 0x1DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC65Cu;
        // 0x1dc660: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC664u;
        goto label_1dc664;
    }
    ctx->pc = 0x1DC65Cu;
    {
        const bool branch_taken_0x1dc65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC65Cu;
        // 0x1dc660: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc65c) {
            ctx->pc = 0x1DC6D4u;
            goto label_1dc6d4;
        }
    }
    ctx->pc = 0x1DC664u;
label_1dc664:
    // 0x1dc664: 0xc07ba5e  jal         func_1EE978
label_1dc668:
    if (ctx->pc == 0x1DC668u) {
        ctx->pc = 0x1DC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC664u;
        // 0x1dc668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC66Cu;
        goto label_1dc66c;
    }
    ctx->pc = 0x1DC664u;
    SET_GPR_U32(ctx, 31, 0x1DC66Cu);
    ctx->pc = 0x1DC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC664u;
    // 0x1dc668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE978u, 0x1DC664u, 0x1DC66Cu)) {
        return;
    }
    ctx->pc = 0x1DC66Cu;
label_1dc66c:
    // 0x1dc66c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1dc670:
    if (ctx->pc == 0x1DC670u) {
        ctx->pc = 0x1DC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC66Cu;
        // 0x1dc670: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC674u;
        goto label_1dc674;
    }
    ctx->pc = 0x1DC66Cu;
    {
        const bool branch_taken_0x1dc66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC66Cu;
        // 0x1dc670: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc66c) {
            ctx->pc = 0x1DC6D4u;
            goto label_1dc6d4;
        }
    }
    ctx->pc = 0x1DC674u;
label_1dc674:
    // 0x1dc674: 0x8e22e664  lw          $v0, -0x199C($s1)
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc678:
    // 0x1dc678: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc67c:
    // 0x1dc67c: 0xc07bb7c  jal         func_1EEDF0
label_1dc680:
    if (ctx->pc == 0x1DC680u) {
        ctx->pc = 0x1DC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC67Cu;
        // 0x1dc680: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC684u;
        goto label_1dc684;
    }
    ctx->pc = 0x1DC67Cu;
    SET_GPR_U32(ctx, 31, 0x1DC684u);
    ctx->pc = 0x1DC680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC67Cu;
    // 0x1dc680: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EEDF0u, 0x1DC67Cu, 0x1DC684u)) {
        return;
    }
    ctx->pc = 0x1DC684u;
label_1dc684:
    // 0x1dc684: 0x10000013  b           . + 4 + (0x13 << 2)
label_1dc688:
    if (ctx->pc == 0x1DC688u) {
        ctx->pc = 0x1DC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC684u;
        // 0x1dc688: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC68Cu;
        goto label_1dc68c;
    }
    ctx->pc = 0x1DC684u;
    {
        const bool branch_taken_0x1dc684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC684u;
        // 0x1dc688: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc684) {
            ctx->pc = 0x1DC6D4u;
            goto label_1dc6d4;
        }
    }
    ctx->pc = 0x1DC68Cu;
label_1dc68c:
    // 0x1dc68c: 0x8e22e664  lw          $v0, -0x199C($s1)
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc690:
    // 0x1dc690: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc694:
    // 0x1dc694: 0xc0570c0  jal         func_15C300
label_1dc698:
    if (ctx->pc == 0x1DC698u) {
        ctx->pc = 0x1DC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC694u;
        // 0x1dc698: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC69Cu;
        goto label_1dc69c;
    }
    ctx->pc = 0x1DC694u;
    SET_GPR_U32(ctx, 31, 0x1DC69Cu);
    ctx->pc = 0x1DC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC694u;
    // 0x1dc698: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15C300u, 0x1DC694u, 0x1DC69Cu)) {
        return;
    }
    ctx->pc = 0x1DC69Cu;
label_1dc69c:
    // 0x1dc69c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dc6a0:
    if (ctx->pc == 0x1DC6A0u) {
        ctx->pc = 0x1DC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC69Cu;
        // 0x1dc6a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6A4u;
        goto label_1dc6a4;
    }
    ctx->pc = 0x1DC69Cu;
    {
        const bool branch_taken_0x1dc69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC69Cu;
        // 0x1dc6a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc69c) {
            ctx->pc = 0x1DC6D4u;
            goto label_1dc6d4;
        }
    }
    ctx->pc = 0x1DC6A4u;
label_1dc6a4:
    // 0x1dc6a4: 0x8e23e664  lw          $v1, -0x199C($s1)
    ctx->pc = 0x1dc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc6a8:
    // 0x1dc6a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1dc6ac:
    // 0x1dc6ac: 0x8c450fc8  lw          $a1, 0xFC8($v0)
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4040)));
label_1dc6b0:
    // 0x1dc6b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dc6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6b4:
    // 0x1dc6b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1dc6b8:
    // 0x1dc6b8: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x1dc6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1dc6bc:
    // 0x1dc6bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dc6c0:
    // 0x1dc6c0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc6c4:
    // 0x1dc6c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dc6c8:
    // 0x1dc6c8: 0x60f809  jalr        $v1
label_1dc6cc:
    if (ctx->pc == 0x1DC6CCu) {
        ctx->pc = 0x1DC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6C8u;
        // 0x1dc6cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6D0u;
        goto label_1dc6d0;
    }
    ctx->pc = 0x1DC6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC6D0u);
        ctx->pc = 0x1DC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6C8u;
        // 0x1dc6cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC6C8u, 0x1DC6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC6D0u;
label_1dc6d0:
    // 0x1dc6d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dc6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc6d4:
    // 0x1dc6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc6d8:
    // 0x1dc6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc6dc:
    // 0x1dc6dc: 0x3e00008  jr          $ra
label_1dc6e0:
    if (ctx->pc == 0x1DC6E0u) {
        ctx->pc = 0x1DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6DCu;
        // 0x1dc6e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6E4u;
        goto label_1dc6e4;
    }
    ctx->pc = 0x1DC6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6DCu;
        // 0x1dc6e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC6E4u;
label_1dc6e4:
    // 0x1dc6e4: 0x0  nop
    ctx->pc = 0x1dc6e4u;
    // NOP
    ctx->pc = 0x1dc6e8u;
}
