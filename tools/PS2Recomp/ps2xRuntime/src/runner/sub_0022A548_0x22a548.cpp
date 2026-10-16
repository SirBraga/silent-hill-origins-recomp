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

// Function: sub_0022A548
// Address: 0x22a548 - 0x22a820
void sub_0022A548_0x22a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A548_0x22a548");
#endif

    switch (ctx->pc) {
        case 0x22a584u: goto label_22a584;
        case 0x22a594u: goto label_22a594;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a630u: goto label_22a630;
        case 0x22a644u: goto label_22a644;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a668u: goto label_22a668;
        case 0x22a688u: goto label_22a688;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a760u: goto label_22a760;
        case 0x22a778u: goto label_22a778;
        case 0x22a784u: goto label_22a784;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7e0u: goto label_22a7e0;
        default: break;
    }

    ctx->pc = 0x22a548u;

    // 0x22a548: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x22a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x22a54c: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x22a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
    // 0x22a550: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x22a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
    // 0x22a554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a558: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x22a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
    // 0x22a55c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22a55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a560: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x22a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
    // 0x22a564: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x22a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
    // 0x22a568: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x22a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
    // 0x22a56c: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x22a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x22a570: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22a574: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x22A574u;
    {
        const bool branch_taken_0x22a574 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A574u;
        // 0x22a578: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a574) {
            ctx->pc = 0x22A5ACu;
            goto label_22a5ac;
        }
    }
    ctx->pc = 0x22A57Cu;
    // 0x22a57c: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x22A57Cu;
    SET_GPR_U32(ctx, 31, 0x22A584u);
    ctx->pc = 0x22A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A57Cu;
    // 0x22a580: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x22A57Cu, 0x22A584u)) {
        return;
    }
    ctx->pc = 0x22A584u;
label_22a584:
    // 0x22a584: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22A584u;
    {
        const bool branch_taken_0x22a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A584u;
        // 0x22a588: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a584) {
            ctx->pc = 0x22A5F8u;
            goto label_22a5f8;
        }
    }
    ctx->pc = 0x22A58Cu;
    // 0x22a58c: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x22A58Cu;
    SET_GPR_U32(ctx, 31, 0x22A594u);
    ctx->pc = 0x22A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A58Cu;
    // 0x22a590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x22A58Cu, 0x22A594u)) {
        return;
    }
    ctx->pc = 0x22A594u;
label_22a594:
    // 0x22a594: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A594u;
    {
        const bool branch_taken_0x22a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A594u;
        // 0x22a598: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a594) {
            ctx->pc = 0x22A5F8u;
            goto label_22a5f8;
        }
    }
    ctx->pc = 0x22A59Cu;
    // 0x22a59c: 0xc08a04c  jal         func_228130
    ctx->pc = 0x22A59Cu;
    SET_GPR_U32(ctx, 31, 0x22A5A4u);
    ctx->pc = 0x22A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A59Cu;
    // 0x22a5a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228130u, 0x22A59Cu, 0x22A5A4u)) {
        return;
    }
    ctx->pc = 0x22A5A4u;
label_22a5a4:
    // 0x22a5a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22A5A4u;
    {
        const bool branch_taken_0x22a5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5A4u;
        // 0x22a5a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5a4) {
            ctx->pc = 0x22A5F0u;
            goto label_22a5f0;
        }
    }
    ctx->pc = 0x22A5ACu;
label_22a5ac:
    // 0x22a5ac: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x22a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x22a5b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22a5b4: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A5B4u;
    {
        const bool branch_taken_0x22a5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a5b4) {
            ctx->pc = 0x22A5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A5B4u;
            // 0x22a5b8: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5ECu;
            goto label_22a5ec;
        }
    }
    ctx->pc = 0x22A5BCu;
    // 0x22a5bc: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x22A5BCu;
    SET_GPR_U32(ctx, 31, 0x22A5C4u);
    ctx->pc = 0x22A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5BCu;
    // 0x22a5c0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x22A5BCu, 0x22A5C4u)) {
        return;
    }
    ctx->pc = 0x22A5C4u;
label_22a5c4:
    // 0x22a5c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A5C4u;
    {
        const bool branch_taken_0x22a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C4u;
        // 0x22a5c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5c4) {
            ctx->pc = 0x22A5F8u;
            goto label_22a5f8;
        }
    }
    ctx->pc = 0x22A5CCu;
    // 0x22a5cc: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x22A5CCu;
    SET_GPR_U32(ctx, 31, 0x22A5D4u);
    ctx->pc = 0x22A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5CCu;
    // 0x22a5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x22A5CCu, 0x22A5D4u)) {
        return;
    }
    ctx->pc = 0x22A5D4u;
label_22a5d4:
    // 0x22a5d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A5D4u;
    {
        const bool branch_taken_0x22a5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5D4u;
        // 0x22a5d8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5d4) {
            ctx->pc = 0x22A5F8u;
            goto label_22a5f8;
        }
    }
    ctx->pc = 0x22A5DCu;
    // 0x22a5dc: 0xc089f7e  jal         func_227DF8
    ctx->pc = 0x22A5DCu;
    SET_GPR_U32(ctx, 31, 0x22A5E4u);
    ctx->pc = 0x22A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5DCu;
    // 0x22a5e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227DF8u, 0x22A5DCu, 0x22A5E4u)) {
        return;
    }
    ctx->pc = 0x22A5E4u;
label_22a5e4:
    // 0x22a5e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22A5E4u;
    {
        const bool branch_taken_0x22a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5E4u;
        // 0x22a5e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5e4) {
            ctx->pc = 0x22A5F0u;
            goto label_22a5f0;
        }
    }
    ctx->pc = 0x22A5ECu;
label_22a5ec:
    // 0x22a5ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22a5f0:
    // 0x22a5f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A5F0u;
    {
        const bool branch_taken_0x22a5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a5f0) {
            ctx->pc = 0x22A5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A5F0u;
            // 0x22a5f4: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A600u;
            goto label_22a600;
        }
    }
    ctx->pc = 0x22A5F8u;
label_22a5f8:
    // 0x22a5f8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x22A5F8u;
    {
        const bool branch_taken_0x22a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5F8u;
        // 0x22a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5f8) {
            ctx->pc = 0x22A7FCu;
            goto label_22a7fc;
        }
    }
    ctx->pc = 0x22A600u;
label_22a600:
    // 0x22a600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a604: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22a604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a608: 0x30550010  andi        $s5, $v0, 0x10
    ctx->pc = 0x22a608u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22a60c: 0x151827  nor         $v1, $zero, $s5
    ctx->pc = 0x22a60cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
    // 0x22a610: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22a614: 0xc08a15a  jal         func_228568
    ctx->pc = 0x22A614u;
    SET_GPR_U32(ctx, 31, 0x22A61Cu);
    ctx->pc = 0x22A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A614u;
    // 0x22a618: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228568u, 0x22A614u, 0x22A61Cu)) {
        return;
    }
    ctx->pc = 0x22A61Cu;
label_22a61c:
    // 0x22a61c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22a61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a620: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x22a620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22a624: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x22A624u;
    {
        const bool branch_taken_0x22a624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a624) {
            ctx->pc = 0x22A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A624u;
            // 0x22a628: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A6C0u;
            goto label_22a6c0;
        }
    }
    ctx->pc = 0x22A62Cu;
    // 0x22a62c: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_22a630:
    // 0x22a630: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x22a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22a634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a638: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x22a638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22a63c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x22A63Cu;
    SET_GPR_U32(ctx, 31, 0x22A644u);
    ctx->pc = 0x22A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A63Cu;
    // 0x22a640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x22A63Cu, 0x22A644u)) {
        return;
    }
    ctx->pc = 0x22A644u;
label_22a644:
    // 0x22a644: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A644u;
    {
        const bool branch_taken_0x22a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a644) {
            ctx->pc = 0x22A648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A644u;
            // 0x22a648: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A66Cu;
            goto label_22a66c;
        }
    }
    ctx->pc = 0x22A64Cu;
    // 0x22a64c: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x22a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x22a650: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22a654: 0xc08a458  jal         func_229160
    ctx->pc = 0x22A654u;
    SET_GPR_U32(ctx, 31, 0x22A65Cu);
    ctx->pc = 0x22A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A654u;
    // 0x22a658: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229160u, 0x22A654u, 0x22A65Cu)) {
        return;
    }
    ctx->pc = 0x22A65Cu;
label_22a65c:
    // 0x22a65c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22a660: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x22A660u;
    SET_GPR_U32(ctx, 31, 0x22A668u);
    ctx->pc = 0x22A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A660u;
    // 0x22a664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x22A660u, 0x22A668u)) {
        return;
    }
    ctx->pc = 0x22A668u;
label_22a668:
    // 0x22a668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a66c:
    // 0x22a66c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22A66Cu;
    {
        const bool branch_taken_0x22a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a66c) {
            ctx->pc = 0x22A670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A66Cu;
            // 0x22a670: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A6B0u;
            goto label_22a6b0;
        }
    }
    ctx->pc = 0x22A674u;
    // 0x22a674: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22a678: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22A678u;
    {
        const bool branch_taken_0x22a678 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x22A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A678u;
        // 0x22a67c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a678) {
            ctx->pc = 0x22A6A4u;
            goto label_22a6a4;
        }
    }
    ctx->pc = 0x22A680u;
    // 0x22a680: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x22a680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x22a684: 0x0  nop
    ctx->pc = 0x22a684u;
    // NOP
label_22a688:
    // 0x22a688: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a68c: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A68Cu;
    {
        const bool branch_taken_0x22a68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x22A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A68Cu;
        // 0x22a690: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a68c) {
            ctx->pc = 0x22A69Cu;
            goto label_22a69c;
        }
    }
    ctx->pc = 0x22A694u;
    // 0x22a694: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22A694u;
    SET_GPR_U32(ctx, 31, 0x22A69Cu);
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A694u, 0x22A69Cu)) {
        return;
    }
    ctx->pc = 0x22A69Cu;
label_22a69c:
    // 0x22a69c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A69Cu;
    {
        const bool branch_taken_0x22a69c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x22A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A69Cu;
        // 0x22a6a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a69c) {
            ctx->pc = 0x22A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a688;
        }
    }
    ctx->pc = 0x22A6A4u;
label_22a6a4:
    // 0x22a6a4: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x22a6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x22a6a8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x22A6A8u;
    {
        const bool branch_taken_0x22a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6A8u;
        // 0x22a6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6a8) {
            ctx->pc = 0x22A7F4u;
            goto label_22a7f4;
        }
    }
    ctx->pc = 0x22A6B0u;
label_22a6b0:
    // 0x22a6b0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x22a6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22a6b4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x22A6B4u;
    {
        const bool branch_taken_0x22a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6B4u;
        // 0x22a6b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6b4) {
            ctx->pc = 0x22A630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a630;
        }
    }
    ctx->pc = 0x22A6BCu;
    // 0x22a6bc: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x22a6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_22a6c0:
    // 0x22a6c0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22a6c4: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x22a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x22a6c8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22A6C8u;
    {
        const bool branch_taken_0x22a6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6C8u;
        // 0x22a6cc: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6c8) {
            ctx->pc = 0x22A768u;
            goto label_22a768;
        }
    }
    ctx->pc = 0x22A6D0u;
    // 0x22a6d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22A6D0u;
    {
        const bool branch_taken_0x22a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6D0u;
        // 0x22a6d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6d0) {
            ctx->pc = 0x22A718u;
            goto label_22a718;
        }
    }
    ctx->pc = 0x22A6D8u;
    // 0x22a6d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22a6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6e4: 0xc08a5f4  jal         func_2297D0
    ctx->pc = 0x22A6E4u;
    SET_GPR_U32(ctx, 31, 0x22A6ECu);
    ctx->pc = 0x22A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6E4u;
    // 0x22a6e8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x22A6E4u, 0x22A6ECu)) {
        return;
    }
    ctx->pc = 0x22A6ECu;
label_22a6ec:
    // 0x22a6ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A6ECu;
    {
        const bool branch_taken_0x22a6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a6ec) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A6F4u;
    // 0x22a6f4: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A6F4u;
    {
        const bool branch_taken_0x22a6f4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x22A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6F4u;
        // 0x22a6f8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6f4) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A6FCu;
    // 0x22a6fc: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A6FCu;
    {
        const bool branch_taken_0x22a6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x22a6fc) {
            ctx->pc = 0x22A700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A6FCu;
            // 0x22a700: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A710u;
            goto label_22a710;
        }
    }
    ctx->pc = 0x22A704u;
    // 0x22a704: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22A704u;
    SET_GPR_U32(ctx, 31, 0x22A70Cu);
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A704u, 0x22A70Cu)) {
        return;
    }
    ctx->pc = 0x22A70Cu;
label_22a70c:
    // 0x22a70c: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x22a70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_22a710:
    // 0x22a710: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x22A710u;
    {
        const bool branch_taken_0x22a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A710u;
        // 0x22a714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a710) {
            ctx->pc = 0x22A7F4u;
            goto label_22a7f4;
        }
    }
    ctx->pc = 0x22A718u;
label_22a718:
    // 0x22a718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a71c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22a71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a720: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22a720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a724: 0xc08a5f4  jal         func_2297D0
    ctx->pc = 0x22A724u;
    SET_GPR_U32(ctx, 31, 0x22A72Cu);
    ctx->pc = 0x22A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A724u;
    // 0x22a728: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x22A724u, 0x22A72Cu)) {
        return;
    }
    ctx->pc = 0x22A72Cu;
label_22a72c:
    // 0x22a72c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22A72Cu;
    {
        const bool branch_taken_0x22a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a72c) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A734u;
    // 0x22a734: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A734u;
    {
        const bool branch_taken_0x22a734 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x22A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A734u;
        // 0x22a738: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a734) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A73Cu;
    // 0x22a73c: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A73Cu;
    {
        const bool branch_taken_0x22a73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x22a73c) {
            ctx->pc = 0x22A740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A73Cu;
            // 0x22a740: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A750u;
            goto label_22a750;
        }
    }
    ctx->pc = 0x22A744u;
    // 0x22a744: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22A744u;
    SET_GPR_U32(ctx, 31, 0x22A74Cu);
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A744u, 0x22A74Cu)) {
        return;
    }
    ctx->pc = 0x22A74Cu;
label_22a74c:
    // 0x22a74c: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x22a74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_22a750:
    // 0x22a750: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22A750u;
    {
        const bool branch_taken_0x22a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A750u;
        // 0x22a754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a750) {
            ctx->pc = 0x22A7F4u;
            goto label_22a7f4;
        }
    }
    ctx->pc = 0x22A758u;
label_22a758:
    // 0x22a758: 0xc089fa6  jal         func_227E98
    ctx->pc = 0x22A758u;
    SET_GPR_U32(ctx, 31, 0x22A760u);
    ctx->pc = 0x22A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A758u;
    // 0x22a75c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x22A758u, 0x22A760u)) {
        return;
    }
    ctx->pc = 0x22A760u;
label_22a760:
    // 0x22a760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22A760u;
    {
        const bool branch_taken_0x22a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A760u;
        // 0x22a764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a760) {
            ctx->pc = 0x22A794u;
            goto label_22a794;
        }
    }
    ctx->pc = 0x22A768u;
label_22a768:
    // 0x22a768: 0x1a600009  blez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A768u;
    {
        const bool branch_taken_0x22a768 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x22A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A768u;
        // 0x22a76c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a768) {
            ctx->pc = 0x22A790u;
            goto label_22a790;
        }
    }
    ctx->pc = 0x22A770u;
    // 0x22a770: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x22a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a774: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a778:
    // 0x22a778: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22a77c: 0xc089fa6  jal         func_227E98
    ctx->pc = 0x22A77Cu;
    SET_GPR_U32(ctx, 31, 0x22A784u);
    ctx->pc = 0x22A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A77Cu;
    // 0x22a780: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x22A77Cu, 0x22A784u)) {
        return;
    }
    ctx->pc = 0x22A784u;
label_22a784:
    // 0x22a784: 0x0  nop
    ctx->pc = 0x22a784u;
    // NOP
    // 0x22a788: 0x5620fffb  bnel        $s1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22A788u;
    {
        const bool branch_taken_0x22a788 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a788) {
            ctx->pc = 0x22A78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A788u;
            // 0x22a78c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a778;
        }
    }
    ctx->pc = 0x22A790u;
label_22a790:
    // 0x22a790: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a794:
    // 0x22a794: 0x1a600015  blez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x22A794u;
    {
        const bool branch_taken_0x22a794 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x22A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A794u;
        // 0x22a798: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a794) {
            ctx->pc = 0x22A7ECu;
            goto label_22a7ec;
        }
    }
    ctx->pc = 0x22A79Cu;
    // 0x22a79c: 0x0  nop
    ctx->pc = 0x22a79cu;
    // NOP
label_22a7a0:
    // 0x22a7a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7a4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x22a7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22a7a8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x22A7A8u;
    SET_GPR_U32(ctx, 31, 0x22A7B0u);
    ctx->pc = 0x22A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7A8u;
    // 0x22a7ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x22A7A8u, 0x22A7B0u)) {
        return;
    }
    ctx->pc = 0x22A7B0u;
label_22a7b0:
    // 0x22a7b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A7B0u;
    {
        const bool branch_taken_0x22a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7b0) {
            ctx->pc = 0x22A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7B0u;
            // 0x22a7b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A7D0u;
            goto label_22a7d0;
        }
    }
    ctx->pc = 0x22A7B8u;
    // 0x22a7b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a7bc: 0xc08a066  jal         func_228198
    ctx->pc = 0x22A7BCu;
    SET_GPR_U32(ctx, 31, 0x22A7C4u);
    ctx->pc = 0x22A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7BCu;
    // 0x22a7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x22A7BCu, 0x22A7C4u)) {
        return;
    }
    ctx->pc = 0x22A7C4u;
label_22a7c4:
    // 0x22a7c4: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x22A7C4u;
    SET_GPR_U32(ctx, 31, 0x22A7CCu);
    ctx->pc = 0x22A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7C4u;
    // 0x22a7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x22A7C4u, 0x22A7CCu)) {
        return;
    }
    ctx->pc = 0x22A7CCu;
label_22a7cc:
    // 0x22a7cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a7d0:
    // 0x22a7d0: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A7D0u;
    {
        const bool branch_taken_0x22a7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x22A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7D0u;
        // 0x22a7d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7d0) {
            ctx->pc = 0x22A7E0u;
            goto label_22a7e0;
        }
    }
    ctx->pc = 0x22A7D8u;
    // 0x22a7d8: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22A7D8u;
    SET_GPR_U32(ctx, 31, 0x22A7E0u);
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A7D8u, 0x22A7E0u)) {
        return;
    }
    ctx->pc = 0x22A7E0u;
label_22a7e0:
    // 0x22a7e0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x22a7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22a7e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22A7E4u;
    {
        const bool branch_taken_0x22a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7E4u;
        // 0x22a7e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7e4) {
            ctx->pc = 0x22A7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a7a0;
        }
    }
    ctx->pc = 0x22A7ECu;
label_22a7ec:
    // 0x22a7ec: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x22a7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x22a7f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22a7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a7f4:
    // 0x22a7f4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x22a7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x22a7f8: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x22a7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
label_22a7fc:
    // 0x22a7fc: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x22a7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x22a800: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x22a800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x22a804: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x22a804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x22a808: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x22a808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x22a80c: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x22a80cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x22a810: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x22a810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x22a814: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x22a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x22a818: 0x3e00008  jr          $ra
    ctx->pc = 0x22A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A818u;
        // 0x22a81c: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A820u;
}
