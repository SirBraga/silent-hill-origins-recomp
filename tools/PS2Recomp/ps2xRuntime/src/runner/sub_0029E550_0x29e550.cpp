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

// Function: sub_0029E550
// Address: 0x29e550 - 0x29e670
void sub_0029E550_0x29e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E550_0x29e550");
#endif

    switch (ctx->pc) {
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        default: break;
    }

    ctx->pc = 0x29e550u;

label_29e550:
    // 0x29e550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29e554:
    // 0x29e554: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29e558:
    // 0x29e558: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_29e55c:
    // 0x29e55c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_29e560:
    // 0x29e560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29e560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e564:
    // 0x29e564: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_29e568:
    // 0x29e568: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e56c:
    // 0x29e56c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_29e570:
    // 0x29e570: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_29e574:
    // 0x29e574: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_29e578:
    if (ctx->pc == 0x29E578u) {
        ctx->pc = 0x29E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E574u;
        // 0x29e578: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E57Cu;
        goto label_29e57c;
    }
    ctx->pc = 0x29E574u;
    {
        const bool branch_taken_0x29e574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E574u;
        // 0x29e578: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e574) {
            ctx->pc = 0x29E590u;
            goto label_29e590;
        }
    }
    ctx->pc = 0x29E57Cu;
label_29e57c:
    // 0x29e57c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29e580:
    // 0x29e580: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29e580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_29e584:
    // 0x29e584: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29e584u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29e588:
    // 0x29e588: 0x10000013  b           . + 4 + (0x13 << 2)
label_29e58c:
    if (ctx->pc == 0x29E58Cu) {
        ctx->pc = 0x29E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E588u;
        // 0x29e58c: 0x2453dee0  addiu       $s3, $v0, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E590u;
        goto label_29e590;
    }
    ctx->pc = 0x29E588u;
    {
        const bool branch_taken_0x29e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E588u;
        // 0x29e58c: 0x2453dee0  addiu       $s3, $v0, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e588) {
            ctx->pc = 0x29E5D8u;
            goto label_29e5d8;
        }
    }
    ctx->pc = 0x29E590u;
label_29e590:
    // 0x29e590: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_29e594:
    // 0x29e594: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_29e598:
    if (ctx->pc == 0x29E598u) {
        ctx->pc = 0x29E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E594u;
        // 0x29e598: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E59Cu;
        goto label_29e59c;
    }
    ctx->pc = 0x29E594u;
    {
        const bool branch_taken_0x29e594 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E594u;
        // 0x29e598: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e594) {
            ctx->pc = 0x29E5B0u;
            goto label_29e5b0;
        }
    }
    ctx->pc = 0x29E59Cu;
label_29e59c:
    // 0x29e59c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29e5a0:
    // 0x29e5a0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29e5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_29e5a4:
    // 0x29e5a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29e5a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29e5a8:
    // 0x29e5a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_29e5ac:
    if (ctx->pc == 0x29E5ACu) {
        ctx->pc = 0x29E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A8u;
        // 0x29e5ac: 0x2453def0  addiu       $s3, $v0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5B0u;
        goto label_29e5b0;
    }
    ctx->pc = 0x29E5A8u;
    {
        const bool branch_taken_0x29e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A8u;
        // 0x29e5ac: 0x2453def0  addiu       $s3, $v0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5a8) {
            ctx->pc = 0x29E5D8u;
            goto label_29e5d8;
        }
    }
    ctx->pc = 0x29E5B0u;
label_29e5b0:
    // 0x29e5b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29e5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_29e5b4:
    // 0x29e5b4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29e5b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29e5b8:
    // 0x29e5b8: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x29e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_29e5bc:
    // 0x29e5bc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x29e5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_29e5c0:
    // 0x29e5c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29e5c4:
    // 0x29e5c4: 0x0  nop
    ctx->pc = 0x29e5c4u;
    // NOP
label_29e5c8:
    // 0x29e5c8: 0x0  nop
    ctx->pc = 0x29e5c8u;
    // NOP
label_29e5cc:
    // 0x29e5cc: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_29e5d0:
    if (ctx->pc == 0x29E5D0u) {
        ctx->pc = 0x29E5D4u;
        goto label_29e5d4;
    }
    ctx->pc = 0x29E5CCu;
    {
        const bool branch_taken_0x29e5cc = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x29e5cc) {
            ctx->pc = 0x29E5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e5b8;
        }
    }
    ctx->pc = 0x29E5D4u;
label_29e5d4:
    // 0x29e5d4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x29e5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e5d8:
    // 0x29e5d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29e5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e5dc:
    // 0x29e5dc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x29e5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_29e5e0:
    // 0x29e5e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_29e5e4:
    if (ctx->pc == 0x29E5E4u) {
        ctx->pc = 0x29E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5E0u;
        // 0x29e5e4: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5E8u;
        goto label_29e5e8;
    }
    ctx->pc = 0x29E5E0u;
    {
        const bool branch_taken_0x29e5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5E0u;
        // 0x29e5e4: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5e0) {
            ctx->pc = 0x29E61Cu;
            goto label_29e61c;
        }
    }
    ctx->pc = 0x29E5E8u;
label_29e5e8:
    // 0x29e5e8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x29e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29e5ec:
    // 0x29e5ec: 0x0  nop
    ctx->pc = 0x29e5ecu;
    // NOP
label_29e5f0:
    // 0x29e5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e5f4:
    // 0x29e5f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e5f8:
    // 0x29e5f8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29e5fc:
    // 0x29e5fc: 0x40f809  jalr        $v0
label_29e600:
    if (ctx->pc == 0x29E600u) {
        ctx->pc = 0x29E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5FCu;
        // 0x29e600: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E604u;
        goto label_29e604;
    }
    ctx->pc = 0x29E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E604u);
        ctx->pc = 0x29E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5FCu;
        // 0x29e600: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5FCu, 0x29E604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E604u;
label_29e604:
    // 0x29e604: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
label_29e608:
    if (ctx->pc == 0x29E608u) {
        ctx->pc = 0x29E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E604u;
        // 0x29e608: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E60Cu;
        goto label_29e60c;
    }
    ctx->pc = 0x29E604u;
    {
        const bool branch_taken_0x29e604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x29E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E604u;
        // 0x29e608: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e604) {
            ctx->pc = 0x29E63Cu;
            goto label_29e63c;
        }
    }
    ctx->pc = 0x29E60Cu;
label_29e60c:
    // 0x29e60c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x29e60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_29e610:
    // 0x29e610: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x29e610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_29e614:
    // 0x29e614: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_29e618:
    if (ctx->pc == 0x29E618u) {
        ctx->pc = 0x29E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E614u;
        // 0x29e618: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E61Cu;
        goto label_29e61c;
    }
    ctx->pc = 0x29E614u;
    {
        const bool branch_taken_0x29e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e614) {
            ctx->pc = 0x29E618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E614u;
            // 0x29e618: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e5f0;
        }
    }
    ctx->pc = 0x29E61Cu;
label_29e61c:
    // 0x29e61c: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_29e620:
    if (ctx->pc == 0x29E620u) {
        ctx->pc = 0x29E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E61Cu;
        // 0x29e620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E624u;
        goto label_29e624;
    }
    ctx->pc = 0x29E61Cu;
    {
        const bool branch_taken_0x29e61c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x29E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E61Cu;
        // 0x29e620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e61c) {
            ctx->pc = 0x29E63Cu;
            goto label_29e63c;
        }
    }
    ctx->pc = 0x29E624u;
label_29e624:
    // 0x29e624: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x29e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_29e628:
    // 0x29e628: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e62c:
    // 0x29e62c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29e630:
    // 0x29e630: 0x40f809  jalr        $v0
label_29e634:
    if (ctx->pc == 0x29E634u) {
        ctx->pc = 0x29E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E630u;
        // 0x29e634: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E638u;
        goto label_29e638;
    }
    ctx->pc = 0x29E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E638u);
        ctx->pc = 0x29E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E630u;
        // 0x29e634: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E630u, 0x29E638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E638u;
label_29e638:
    // 0x29e638: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x29e638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_29e63c:
    // 0x29e63c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x29e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_29e640:
    // 0x29e640: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29e640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_29e644:
    // 0x29e644: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29e644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29e648:
    // 0x29e648: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29e648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29e64c:
    // 0x29e64c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29e64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e650:
    // 0x29e650: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29e650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e654:
    // 0x29e654: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29e654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e658:
    // 0x29e658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29e658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e65c:
    // 0x29e65c: 0x3e00008  jr          $ra
label_29e660:
    if (ctx->pc == 0x29E660u) {
        ctx->pc = 0x29E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E65Cu;
        // 0x29e660: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E664u;
        goto label_29e664;
    }
    ctx->pc = 0x29E65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E65Cu;
        // 0x29e660: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E664u;
label_29e664:
    // 0x29e664: 0x0  nop
    ctx->pc = 0x29e664u;
    // NOP
label_29e668:
    // 0x29e668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29e66c:
    // 0x29e66c: 0x0  nop
    ctx->pc = 0x29e66cu;
    // NOP
    ctx->pc = 0x29e670u;
}
