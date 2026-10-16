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

// Function: sub_0018D538
// Address: 0x18d538 - 0x18d700
void sub_0018D538_0x18d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D538_0x18d538");
#endif

    switch (ctx->pc) {
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        default: break;
    }

    ctx->pc = 0x18d538u;

label_18d538:
    // 0x18d538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18d53c:
    // 0x18d53c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x18d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_18d540:
    // 0x18d540: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_18d544:
    // 0x18d544: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18d544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d548:
    // 0x18d548: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x18d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_18d54c:
    // 0x18d54c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18d54cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d550:
    // 0x18d550: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x18d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_18d554:
    // 0x18d554: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18d554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d558:
    // 0x18d558: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x18d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_18d55c:
    // 0x18d55c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x18d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_18d560:
    // 0x18d560: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x18d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_18d564:
    // 0x18d564: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_18d568:
    if (ctx->pc == 0x18D568u) {
        ctx->pc = 0x18D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D564u;
        // 0x18d568: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D56Cu;
        goto label_18d56c;
    }
    ctx->pc = 0x18D564u;
    {
        const bool branch_taken_0x18d564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D564u;
        // 0x18d568: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d564) {
            ctx->pc = 0x18D580u;
            goto label_18d580;
        }
    }
    ctx->pc = 0x18D56Cu;
label_18d56c:
    // 0x18d56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d570:
    // 0x18d570: 0xc065c40  jal         func_197100
label_18d574:
    if (ctx->pc == 0x18D574u) {
        ctx->pc = 0x18D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D570u;
        // 0x18d574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D578u;
        goto label_18d578;
    }
    ctx->pc = 0x18D570u;
    SET_GPR_U32(ctx, 31, 0x18D578u);
    ctx->pc = 0x18D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D570u;
    // 0x18d574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D570u, 0x18D578u)) {
        return;
    }
    ctx->pc = 0x18D578u;
label_18d578:
    // 0x18d578: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d57c:
    if (ctx->pc == 0x18D57Cu) {
        ctx->pc = 0x18D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D578u;
        // 0x18d57c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D580u;
        goto label_18d580;
    }
    ctx->pc = 0x18D578u;
    {
        const bool branch_taken_0x18d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D578u;
        // 0x18d57c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d578) {
            ctx->pc = 0x18D584u;
            goto label_18d584;
        }
    }
    ctx->pc = 0x18D580u;
label_18d580:
    // 0x18d580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18d580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d584:
    // 0x18d584: 0x26c200b0  addiu       $v0, $s6, 0xB0
    ctx->pc = 0x18d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
label_18d588:
    // 0x18d588: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x18d588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18d58c:
    // 0x18d58c: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d590:
    if (ctx->pc == 0x18D590u) {
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D594u;
        goto label_18d594;
    }
    ctx->pc = 0x18D58Cu;
    {
        const bool branch_taken_0x18d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d58c) {
            ctx->pc = 0x18D59Cu;
            goto label_18d59c;
        }
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0x0  nop
    ctx->pc = 0x18d594u;
    // NOP
label_18d598:
    // 0x18d598: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18d598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18d59c:
    // 0x18d59c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_18d5a0:
    if (ctx->pc == 0x18D5A0u) {
        ctx->pc = 0x18D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D59Cu;
        // 0x18d5a0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5A4u;
        goto label_18d5a4;
    }
    ctx->pc = 0x18D59Cu;
    {
        const bool branch_taken_0x18d59c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D59Cu;
        // 0x18d5a0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d59c) {
            ctx->pc = 0x18D5CCu;
            goto label_18d5cc;
        }
    }
    ctx->pc = 0x18D5A4u;
label_18d5a4:
    // 0x18d5a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18d5a8:
    // 0x18d5a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18d5ac:
    // 0x18d5ac: 0x5662fffb  bnel        $s3, $v0, . + 4 + (-0x5 << 2)
label_18d5b0:
    if (ctx->pc == 0x18D5B0u) {
        ctx->pc = 0x18D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ACu;
        // 0x18d5b0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5B4u;
        goto label_18d5b4;
    }
    ctx->pc = 0x18D5ACu;
    {
        const bool branch_taken_0x18d5ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d5ac) {
            ctx->pc = 0x18D5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D5ACu;
            // 0x18d5b0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d59c;
        }
    }
    ctx->pc = 0x18D5B4u;
label_18d5b4:
    // 0x18d5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d5b8:
    // 0x18d5b8: 0xc065c68  jal         func_1971A0
label_18d5bc:
    if (ctx->pc == 0x18D5BCu) {
        ctx->pc = 0x18D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5B8u;
        // 0x18d5bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5C0u;
        goto label_18d5c0;
    }
    ctx->pc = 0x18D5B8u;
    SET_GPR_U32(ctx, 31, 0x18D5C0u);
    ctx->pc = 0x18D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5B8u;
    // 0x18d5bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18D5B8u, 0x18D5C0u)) {
        return;
    }
    ctx->pc = 0x18D5C0u;
label_18d5c0:
    // 0x18d5c0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_18d5c4:
    if (ctx->pc == 0x18D5C4u) {
        ctx->pc = 0x18D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C0u;
        // 0x18d5c4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5C8u;
        goto label_18d5c8;
    }
    ctx->pc = 0x18D5C0u;
    {
        const bool branch_taken_0x18d5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C0u;
        // 0x18d5c4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5c0) {
            ctx->pc = 0x18D598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d598;
        }
    }
    ctx->pc = 0x18D5C8u;
label_18d5c8:
    // 0x18d5c8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x18d5c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d5cc:
    // 0x18d5cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_18d5d0:
    if (ctx->pc == 0x18D5D0u) {
        ctx->pc = 0x18D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5CCu;
        // 0x18d5d0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5D4u;
        goto label_18d5d4;
    }
    ctx->pc = 0x18D5CCu;
    {
        const bool branch_taken_0x18d5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5CCu;
        // 0x18d5d0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5cc) {
            ctx->pc = 0x18D5E8u;
            goto label_18d5e8;
        }
    }
    ctx->pc = 0x18D5D4u;
label_18d5d4:
    // 0x18d5d4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18d5d8:
    // 0x18d5d8: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18d5dc:
    // 0x18d5dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18d5e0:
    // 0x18d5e0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_18d5e4:
    if (ctx->pc == 0x18D5E4u) {
        ctx->pc = 0x18D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E0u;
        // 0x18d5e4: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E8u;
        goto label_18d5e8;
    }
    ctx->pc = 0x18D5E0u;
    {
        const bool branch_taken_0x18d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E0u;
        // 0x18d5e4: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5e0) {
            ctx->pc = 0x18D6D0u;
            goto label_18d6d0;
        }
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0xc0808f0  jal         func_2023C0
label_18d5ec:
    if (ctx->pc == 0x18D5ECu) {
        ctx->pc = 0x18D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E8u;
        // 0x18d5ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5F0u;
        goto label_18d5f0;
    }
    ctx->pc = 0x18D5E8u;
    SET_GPR_U32(ctx, 31, 0x18D5F0u);
    ctx->pc = 0x18D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E8u;
    // 0x18d5ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18D5E8u, 0x18D5F0u)) {
        return;
    }
    ctx->pc = 0x18D5F0u;
label_18d5f0:
    // 0x18d5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d5f4:
    // 0x18d5f4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x18d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_18d5f8:
    // 0x18d5f8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x18d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_18d5fc:
    // 0x18d5fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x18d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_18d600:
    // 0x18d600: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_18d604:
    if (ctx->pc == 0x18D604u) {
        ctx->pc = 0x18D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D600u;
        // 0x18d604: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D608u;
        goto label_18d608;
    }
    ctx->pc = 0x18D600u;
    {
        const bool branch_taken_0x18d600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D600u;
        // 0x18d604: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d600) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D608u;
label_18d608:
    // 0x18d608: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_18d60c:
    // 0x18d60c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d610:
    if (ctx->pc == 0x18D610u) {
        ctx->pc = 0x18D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D60Cu;
        // 0x18d610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D614u;
        goto label_18d614;
    }
    ctx->pc = 0x18D60Cu;
    {
        const bool branch_taken_0x18d60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D60Cu;
        // 0x18d610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d60c) {
            ctx->pc = 0x18D630u;
            goto label_18d630;
        }
    }
    ctx->pc = 0x18D614u;
label_18d614:
    // 0x18d614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d618:
    // 0x18d618: 0xc081b9a  jal         func_206E68
label_18d61c:
    if (ctx->pc == 0x18D61Cu) {
        ctx->pc = 0x18D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D618u;
        // 0x18d61c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D620u;
        goto label_18d620;
    }
    ctx->pc = 0x18D618u;
    SET_GPR_U32(ctx, 31, 0x18D620u);
    ctx->pc = 0x18D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D618u;
    // 0x18d61c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18D618u, 0x18D620u)) {
        return;
    }
    ctx->pc = 0x18D620u;
label_18d620:
    // 0x18d620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d624:
    // 0x18d624: 0xc065c40  jal         func_197100
label_18d628:
    if (ctx->pc == 0x18D628u) {
        ctx->pc = 0x18D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D624u;
        // 0x18d628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D62Cu;
        goto label_18d62c;
    }
    ctx->pc = 0x18D624u;
    SET_GPR_U32(ctx, 31, 0x18D62Cu);
    ctx->pc = 0x18D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D624u;
    // 0x18d628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D624u, 0x18D62Cu)) {
        return;
    }
    ctx->pc = 0x18D62Cu;
label_18d62c:
    // 0x18d62c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_18d630:
    // 0x18d630: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_18d634:
    // 0x18d634: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_18d638:
    // 0x18d638: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_18d63c:
    // 0x18d63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d640:
    // 0x18d640: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d644:
    // 0x18d644: 0x40f809  jalr        $v0
label_18d648:
    if (ctx->pc == 0x18D648u) {
        ctx->pc = 0x18D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D644u;
        // 0x18d648: 0x24a59448  addiu       $a1, $a1, -0x6BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D64Cu;
        goto label_18d64c;
    }
    ctx->pc = 0x18D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D64Cu);
        ctx->pc = 0x18D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D644u;
        // 0x18d648: 0x24a59448  addiu       $a1, $a1, -0x6BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D644u, 0x18D64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D64Cu;
label_18d64c:
    // 0x18d64c: 0xaed000c0  sw          $s0, 0xC0($s6)
    ctx->pc = 0x18d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 16));
label_18d650:
    // 0x18d650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d654:
    // 0x18d654: 0xc07f822  jal         func_1FE088
label_18d658:
    if (ctx->pc == 0x18D658u) {
        ctx->pc = 0x18D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D654u;
        // 0x18d658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D65Cu;
        goto label_18d65c;
    }
    ctx->pc = 0x18D654u;
    SET_GPR_U32(ctx, 31, 0x18D65Cu);
    ctx->pc = 0x18D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D654u;
    // 0x18d658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE088u, 0x18D654u, 0x18D65Cu)) {
        return;
    }
    ctx->pc = 0x18D65Cu;
label_18d65c:
    // 0x18d65c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d660:
    // 0x18d660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18d660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d664:
    // 0x18d664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18d664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d668:
    // 0x18d668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18d668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d66c:
    // 0x18d66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d670:
    // 0x18d670: 0xc07f7f0  jal         func_1FDFC0
label_18d674:
    if (ctx->pc == 0x18D674u) {
        ctx->pc = 0x18D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D670u;
        // 0x18d674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D678u;
        goto label_18d678;
    }
    ctx->pc = 0x18D670u;
    SET_GPR_U32(ctx, 31, 0x18D678u);
    ctx->pc = 0x18D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D670u;
    // 0x18d674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FDFC0u, 0x18D670u, 0x18D678u)) {
        return;
    }
    ctx->pc = 0x18D678u;
label_18d678:
    // 0x18d678: 0xaec000c0  sw          $zero, 0xC0($s6)
    ctx->pc = 0x18d678u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 0));
label_18d67c:
    // 0x18d67c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_18d680:
    // 0x18d680: 0xc080858  jal         func_202160
label_18d684:
    if (ctx->pc == 0x18D684u) {
        ctx->pc = 0x18D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D680u;
        // 0x18d684: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D688u;
        goto label_18d688;
    }
    ctx->pc = 0x18D680u;
    SET_GPR_U32(ctx, 31, 0x18D688u);
    ctx->pc = 0x18D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D680u;
    // 0x18d684: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18D680u, 0x18D688u)) {
        return;
    }
    ctx->pc = 0x18D688u;
label_18d688:
    // 0x18d688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18d688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d68c:
    // 0x18d68c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x18d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18d690:
    // 0x18d690: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x18d690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_18d694:
    // 0x18d694: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d698:
    // 0x18d698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18d69c:
    if (ctx->pc == 0x18D69Cu) {
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D698u;
        // 0x18d69c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6A0u;
        goto label_18d6a0;
    }
    ctx->pc = 0x18D698u;
    {
        const bool branch_taken_0x18d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D698u;
        // 0x18d69c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d698) {
            ctx->pc = 0x18D6A4u;
            goto label_18d6a4;
        }
    }
    ctx->pc = 0x18D6A0u;
label_18d6a0:
    // 0x18d6a0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_18d6a4:
    // 0x18d6a4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18d6a8:
    // 0x18d6a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_18d6ac:
    if (ctx->pc == 0x18D6ACu) {
        ctx->pc = 0x18D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A8u;
        // 0x18d6ac: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6B0u;
        goto label_18d6b0;
    }
    ctx->pc = 0x18D6A8u;
    {
        const bool branch_taken_0x18d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d6a8) {
            ctx->pc = 0x18D6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D6A8u;
            // 0x18d6ac: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D6B0u;
            goto label_18d6b0;
        }
    }
    ctx->pc = 0x18D6B0u;
label_18d6b0:
    // 0x18d6b0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x18d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_18d6b4:
    // 0x18d6b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d6b8:
    // 0x18d6b8: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_18d6bc:
    // 0x18d6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18d6c0:
    // 0x18d6c0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_18d6c4:
    // 0x18d6c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18d6c8:
    // 0x18d6c8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x18d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_18d6cc:
    // 0x18d6cc: 0xaec300b0  sw          $v1, 0xB0($s6)
    ctx->pc = 0x18d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 3));
label_18d6d0:
    // 0x18d6d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x18d6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18d6d4:
    // 0x18d6d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18d6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d6d8:
    // 0x18d6d8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x18d6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18d6dc:
    // 0x18d6dc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x18d6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18d6e0:
    // 0x18d6e0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x18d6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18d6e4:
    // 0x18d6e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x18d6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18d6e8:
    // 0x18d6e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18d6e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18d6ec:
    // 0x18d6ec: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x18d6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18d6f0:
    // 0x18d6f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18d6f4:
    // 0x18d6f4: 0x3e00008  jr          $ra
label_18d6f8:
    if (ctx->pc == 0x18D6F8u) {
        ctx->pc = 0x18D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6F4u;
        // 0x18d6f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6FCu;
        goto label_18d6fc;
    }
    ctx->pc = 0x18D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6F4u;
        // 0x18d6f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D6FCu;
label_18d6fc:
    // 0x18d6fc: 0x0  nop
    ctx->pc = 0x18d6fcu;
    // NOP
    ctx->pc = 0x18d700u;
}
