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

// Function: sub_0029D580
// Address: 0x29d580 - 0x29d6d0
void sub_0029D580_0x29d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D580_0x29d580");
#endif

    switch (ctx->pc) {
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d614u: goto label_29d614;
        case 0x29d640u: goto label_29d640;
        case 0x29d668u: goto label_29d668;
        case 0x29d670u: goto label_29d670;
        default: break;
    }

    ctx->pc = 0x29d580u;

    // 0x29d580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d584: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29d588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29d58c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29d590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d594: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29d598: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29d59c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29d5a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d5a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d5a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29d5ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x29d5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29d5b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x29D5B0u;
    {
        const bool branch_taken_0x29d5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B0u;
        // 0x29d5b4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5b0) {
            ctx->pc = 0x29D688u;
            goto label_29d688;
        }
    }
    ctx->pc = 0x29D5B8u;
    // 0x29d5b8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x29d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x29d5bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29D5BCu;
    {
        const bool branch_taken_0x29d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5bc) {
            ctx->pc = 0x29D5E8u;
            goto label_29d5e8;
        }
    }
    ctx->pc = 0x29D5C4u;
    // 0x29d5c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29d5c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29d5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29d5cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D5CCu;
    {
        const bool branch_taken_0x29d5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d5cc) {
            ctx->pc = 0x29D5E0u;
            goto label_29d5e0;
        }
    }
    ctx->pc = 0x29D5D4u;
    // 0x29d5d4: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x29D5D4u;
    SET_GPR_U32(ctx, 31, 0x29D5DCu);
    ctx->pc = 0x29D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5D4u;
    // 0x29d5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C6D0u, 0x29D5D4u, 0x29D5DCu)) {
        return;
    }
    ctx->pc = 0x29D5DCu;
label_29d5dc:
    // 0x29d5dc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_29d5e0:
    // 0x29d5e0: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x29D5E0u;
    {
        const bool branch_taken_0x29d5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d5e0) {
            ctx->pc = 0x29D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D5E0u;
            // 0x29d5e4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D61Cu;
            goto label_29d61c;
        }
    }
    ctx->pc = 0x29D5E8u;
label_29d5e8:
    // 0x29d5e8: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x29D5E8u;
    SET_GPR_U32(ctx, 31, 0x29D5F0u);
    ctx->pc = 0x29D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5E8u;
    // 0x29d5ec: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29D5E8u, 0x29D5F0u)) {
        return;
    }
    ctx->pc = 0x29D5F0u;
label_29d5f0:
    // 0x29d5f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29d5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5f4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x29D5F4u;
    {
        const bool branch_taken_0x29d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5F4u;
        // 0x29d5f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5f4) {
            ctx->pc = 0x29D6ACu;
            goto label_29d6ac;
        }
    }
    ctx->pc = 0x29D5FCu;
    // 0x29d5fc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x29d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x29d600: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x29d600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x29d604: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x29d604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x29d608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d60c: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x29D60Cu;
    SET_GPR_U32(ctx, 31, 0x29D614u);
    ctx->pc = 0x29D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D60Cu;
    // 0x29d610: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C6D0u, 0x29D60Cu, 0x29D614u)) {
        return;
    }
    ctx->pc = 0x29D614u;
label_29d614:
    // 0x29d614: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29D614u;
    {
        const bool branch_taken_0x29d614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D614u;
        // 0x29d618: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d614) {
            ctx->pc = 0x29D688u;
            goto label_29d688;
        }
    }
    ctx->pc = 0x29D61Cu;
label_29d61c:
    // 0x29d61c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x29d61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29d620: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29d624: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29D624u;
    {
        const bool branch_taken_0x29d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D624u;
        // 0x29d628: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d624) {
            ctx->pc = 0x29D68Cu;
            goto label_29d68c;
        }
    }
    ctx->pc = 0x29D62Cu;
    // 0x29d62c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d630: 0x469823  subu        $s3, $v0, $a2
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29d634: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x29d634u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29d638: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x29D638u;
    SET_GPR_U32(ctx, 31, 0x29D640u);
    ctx->pc = 0x29D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D638u;
    // 0x29d63c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29D638u, 0x29D640u)) {
        return;
    }
    ctx->pc = 0x29D640u;
label_29d640:
    // 0x29d640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d644: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D644u;
    {
        const bool branch_taken_0x29d644 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D644u;
        // 0x29d648: 0x2938023  subu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d644) {
            ctx->pc = 0x29D654u;
            goto label_29d654;
        }
    }
    ctx->pc = 0x29D64Cu;
    // 0x29d64c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29D64Cu;
    {
        const bool branch_taken_0x29d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D64Cu;
        // 0x29d650: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d64c) {
            ctx->pc = 0x29D6ACu;
            goto label_29d6ac;
        }
    }
    ctx->pc = 0x29D654u;
label_29d654:
    // 0x29d654: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x29d654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29d658: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x29d658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x29d65c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29d65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d660: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29D660u;
    SET_GPR_U32(ctx, 31, 0x29D668u);
    ctx->pc = 0x29D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D660u;
    // 0x29d664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29D660u, 0x29D668u)) {
        return;
    }
    ctx->pc = 0x29D668u;
label_29d668:
    // 0x29d668: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29D668u;
    SET_GPR_U32(ctx, 31, 0x29D670u);
    ctx->pc = 0x29D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D668u;
    // 0x29d66c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29D668u, 0x29D670u)) {
        return;
    }
    ctx->pc = 0x29D670u;
label_29d670:
    // 0x29d670: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x29d674: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x29d674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x29d678: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29d678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29d67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d680: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x29d680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x29d684: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x29d684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_29d688:
    // 0x29d688: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29d68c:
    // 0x29d68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d690: 0x12a30004  beq         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D690u;
    {
        const bool branch_taken_0x29d690 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x29D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D690u;
        // 0x29d694: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d690) {
            ctx->pc = 0x29D6A4u;
            goto label_29d6a4;
        }
    }
    ctx->pc = 0x29D698u;
    // 0x29d698: 0x8082ffff  lb          $v0, -0x1($a0)
    ctx->pc = 0x29d698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x29d69c: 0x54550001  bnel        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x29D69Cu;
    {
        const bool branch_taken_0x29d69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x29d69c) {
            ctx->pc = 0x29D6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D69Cu;
            // 0x29d6a0: 0xa095ffff  sb          $s5, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D6A4u;
            goto label_29d6a4;
        }
    }
    ctx->pc = 0x29D6A4u;
label_29d6a4:
    // 0x29d6a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d6a8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29d6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29d6ac:
    // 0x29d6ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d6b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29d6b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d6b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29d6b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d6b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29d6b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d6bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29d6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d6c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6C8u;
        // 0x29d6cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D6D0u;
}
