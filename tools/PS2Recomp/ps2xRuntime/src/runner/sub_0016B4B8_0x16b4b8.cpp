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

// Function: sub_0016B4B8
// Address: 0x16b4b8 - 0x16b658
void sub_0016B4B8_0x16b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B4B8_0x16b4b8");
#endif

    switch (ctx->pc) {
        case 0x16b4d4u: goto label_16b4d4;
        case 0x16b500u: goto label_16b500;
        case 0x16b518u: goto label_16b518;
        case 0x16b52cu: goto label_16b52c;
        case 0x16b560u: goto label_16b560;
        case 0x16b570u: goto label_16b570;
        case 0x16b5a0u: goto label_16b5a0;
        case 0x16b5b8u: goto label_16b5b8;
        case 0x16b5ccu: goto label_16b5cc;
        case 0x16b5e0u: goto label_16b5e0;
        case 0x16b5fcu: goto label_16b5fc;
        case 0x16b60cu: goto label_16b60c;
        case 0x16b614u: goto label_16b614;
        case 0x16b624u: goto label_16b624;
        case 0x16b640u: goto label_16b640;
        default: break;
    }

    ctx->pc = 0x16b4b8u;

    // 0x16b4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b4bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16b4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b4c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16b4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b4cc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16B4CCu;
    SET_GPR_U32(ctx, 31, 0x16B4D4u);
    ctx->pc = 0x16B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4CCu;
    // 0x16b4d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16B4CCu, 0x16B4D4u)) {
        return;
    }
    ctx->pc = 0x16B4D4u;
label_16b4d4:
    // 0x16b4d4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x16b4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b4d8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x16b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16b4dc: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B4DCu;
    {
        const bool branch_taken_0x16b4dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4DCu;
        // 0x16b4e0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4dc) {
            ctx->pc = 0x16B534u;
            goto label_16b534;
        }
    }
    ctx->pc = 0x16B4E4u;
    // 0x16b4e4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16b4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16b4e8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b4ec: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16b4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16B4F8u;
    SET_GPR_U32(ctx, 31, 0x16B500u);
    ctx->pc = 0x16B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4F8u;
    // 0x16b4fc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16B4F8u, 0x16B500u)) {
        return;
    }
    ctx->pc = 0x16B500u;
label_16b500:
    // 0x16b500: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b508: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16b508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16b50c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b510: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16B510u;
    SET_GPR_U32(ctx, 31, 0x16B518u);
    ctx->pc = 0x16B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B510u;
    // 0x16b514: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16B510u, 0x16B518u)) {
        return;
    }
    ctx->pc = 0x16B518u;
label_16b518:
    // 0x16b518: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x16b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x16b51c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16B51Cu;
    {
        const bool branch_taken_0x16b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B51Cu;
        // 0x16b520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b51c) {
            ctx->pc = 0x16B5B0u;
            goto label_16b5b0;
        }
    }
    ctx->pc = 0x16B524u;
    // 0x16b524: 0xc05aedc  jal         func_16BB70
    ctx->pc = 0x16B524u;
    SET_GPR_U32(ctx, 31, 0x16B52Cu);
    ctx->pc = 0x16B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B524u;
    // 0x16b528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16BB70u, 0x16B524u, 0x16B52Cu)) {
        return;
    }
    ctx->pc = 0x16B52Cu;
label_16b52c:
    // 0x16b52c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16B52Cu;
    {
        const bool branch_taken_0x16b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B52Cu;
        // 0x16b530: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b52c) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B534u;
label_16b534:
    // 0x16b534: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x16b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x16b538: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B538u;
    {
        const bool branch_taken_0x16b538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B538u;
        // 0x16b53c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b538) {
            ctx->pc = 0x16B54Cu;
            goto label_16b54c;
        }
    }
    ctx->pc = 0x16B540u;
    // 0x16b540: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x16b544: 0x1603003f  bne         $s0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x16B544u;
    {
        const bool branch_taken_0x16b544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x16B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B544u;
        // 0x16b548: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b544) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B54Cu;
label_16b54c:
    // 0x16b54c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x16b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x16b550: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16B550u;
    {
        const bool branch_taken_0x16b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b550) {
            ctx->pc = 0x16B5D8u;
            goto label_16b5d8;
        }
    }
    ctx->pc = 0x16B558u;
    // 0x16b558: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x16B558u;
    SET_GPR_U32(ctx, 31, 0x16B560u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x16B558u, 0x16B560u)) {
        return;
    }
    ctx->pc = 0x16B560u;
label_16b560:
    // 0x16b560: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16B560u;
    {
        const bool branch_taken_0x16b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B560u;
        // 0x16b564: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b560) {
            ctx->pc = 0x16B5D8u;
            goto label_16b5d8;
        }
    }
    ctx->pc = 0x16B568u;
    // 0x16b568: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x16B568u;
    SET_GPR_U32(ctx, 31, 0x16B570u);
    ctx->pc = 0x16B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B568u;
    // 0x16b56c: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x16B568u, 0x16B570u)) {
        return;
    }
    ctx->pc = 0x16B570u;
label_16b570:
    // 0x16b570: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x16b574: 0x8c649168  lw          $a0, -0x6E98($v1)
    ctx->pc = 0x16b574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x16b578: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x16b57c: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x16b57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x16b580: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16B580u;
    {
        const bool branch_taken_0x16b580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B580u;
        // 0x16b584: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b580) {
            ctx->pc = 0x16B5C0u;
            goto label_16b5c0;
        }
    }
    ctx->pc = 0x16B588u;
    // 0x16b588: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x16b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x16b58c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B58Cu;
    {
        const bool branch_taken_0x16b58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b58c) {
            ctx->pc = 0x16B5A4u;
            goto label_16b5a4;
        }
    }
    ctx->pc = 0x16B594u;
    // 0x16b594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b598: 0xc05eee2  jal         func_17BB88
    ctx->pc = 0x16B598u;
    SET_GPR_U32(ctx, 31, 0x16B5A0u);
    ctx->pc = 0x16B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B598u;
    // 0x16b59c: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x16B598u, 0x16B5A0u)) {
        return;
    }
    ctx->pc = 0x16B5A0u;
label_16b5a0:
    // 0x16b5a0: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x16b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_16b5a4:
    // 0x16b5a4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x16b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x16b5a8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16B5A8u;
    {
        const bool branch_taken_0x16b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5A8u;
        // 0x16b5ac: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5a8) {
            ctx->pc = 0x16B640u;
            goto label_16b640;
        }
    }
    ctx->pc = 0x16B5B0u;
label_16b5b0:
    // 0x16b5b0: 0xc05af04  jal         func_16BC10
    ctx->pc = 0x16B5B0u;
    SET_GPR_U32(ctx, 31, 0x16B5B8u);
    ctx->pc = 0x16B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5B0u;
    // 0x16b5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BC10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16BC10u, 0x16B5B0u, 0x16B5B8u)) {
        return;
    }
    ctx->pc = 0x16B5B8u;
label_16b5b8:
    // 0x16b5b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16B5B8u;
    {
        const bool branch_taken_0x16b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5B8u;
        // 0x16b5bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5b8) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B5C0u;
label_16b5c0:
    // 0x16b5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5c4: 0xc05eee2  jal         func_17BB88
    ctx->pc = 0x16B5C4u;
    SET_GPR_U32(ctx, 31, 0x16B5CCu);
    ctx->pc = 0x16B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5C4u;
    // 0x16b5c8: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x16B5C4u, 0x16B5CCu)) {
        return;
    }
    ctx->pc = 0x16B5CCu;
label_16b5cc:
    // 0x16b5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16B5D0u;
    {
        const bool branch_taken_0x16b5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5D0u;
        // 0x16b5d4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5d0) {
            ctx->pc = 0x16B640u;
            goto label_16b640;
        }
    }
    ctx->pc = 0x16B5D8u;
label_16b5d8:
    // 0x16b5d8: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x16B5D8u;
    SET_GPR_U32(ctx, 31, 0x16B5E0u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x16B5D8u, 0x16B5E0u)) {
        return;
    }
    ctx->pc = 0x16B5E0u;
label_16b5e0:
    // 0x16b5e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16B5E0u;
    {
        const bool branch_taken_0x16b5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5e0) {
            ctx->pc = 0x16B61Cu;
            goto label_16b61c;
        }
    }
    ctx->pc = 0x16B5E8u;
    // 0x16b5e8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x16b5ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B5ECu;
    {
        const bool branch_taken_0x16b5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5ECu;
        // 0x16b5f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5ec) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B5F4u;
    // 0x16b5f4: 0xc05af3a  jal         func_16BCE8
    ctx->pc = 0x16B5F4u;
    SET_GPR_U32(ctx, 31, 0x16B5FCu);
    ctx->pc = 0x16B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5F4u;
    // 0x16b5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16BCE8u, 0x16B5F4u, 0x16B5FCu)) {
        return;
    }
    ctx->pc = 0x16B5FCu;
label_16b5fc:
    // 0x16b5fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B5FCu;
    {
        const bool branch_taken_0x16b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5FCu;
        // 0x16b600: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5fc) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B604u;
    // 0x16b604: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x16B604u;
    SET_GPR_U32(ctx, 31, 0x16B60Cu);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x16B604u, 0x16B60Cu)) {
        return;
    }
    ctx->pc = 0x16B60Cu;
label_16b60c:
    // 0x16b60c: 0xc05adfc  jal         func_16B7F0
    ctx->pc = 0x16B60Cu;
    SET_GPR_U32(ctx, 31, 0x16B614u);
    ctx->pc = 0x16B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B60Cu;
    // 0x16b610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16B7F0u, 0x16B60Cu, 0x16B614u)) {
        return;
    }
    ctx->pc = 0x16B614u;
label_16b614:
    // 0x16b614: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16B614u;
    {
        const bool branch_taken_0x16b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B614u;
        // 0x16b618: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b614) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B61Cu;
label_16b61c:
    // 0x16b61c: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x16B61Cu;
    SET_GPR_U32(ctx, 31, 0x16B624u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x16B61Cu, 0x16B624u)) {
        return;
    }
    ctx->pc = 0x16B624u;
label_16b624:
    // 0x16b624: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B624u;
    {
        const bool branch_taken_0x16b624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B624u;
        // 0x16b628: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b624) {
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B62Cu;
    // 0x16b62c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x16b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x16b630: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B630u;
    {
        const bool branch_taken_0x16b630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b630) {
            ctx->pc = 0x16B634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B630u;
            // 0x16b634: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B648u;
            goto label_16b648;
        }
    }
    ctx->pc = 0x16B638u;
    // 0x16b638: 0xc05adfc  jal         func_16B7F0
    ctx->pc = 0x16B638u;
    SET_GPR_U32(ctx, 31, 0x16B640u);
    ctx->pc = 0x16B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B638u;
    // 0x16b63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16B7F0u, 0x16B638u, 0x16B640u)) {
        return;
    }
    ctx->pc = 0x16B640u;
label_16b640:
    // 0x16b640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16b640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b644:
    // 0x16b644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b648:
    // 0x16b648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b64c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B64Cu;
        // 0x16b650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B654u;
    // 0x16b654: 0x0  nop
    ctx->pc = 0x16b654u;
    // NOP
    ctx->pc = 0x16b658u;
}
