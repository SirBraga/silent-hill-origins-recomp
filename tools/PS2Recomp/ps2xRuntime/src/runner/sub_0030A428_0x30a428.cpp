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

// Function: sub_0030A428
// Address: 0x30a428 - 0x30a620
void sub_0030A428_0x30a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A428_0x30a428");
#endif

    switch (ctx->pc) {
        case 0x30a454u: goto label_30a454;
        case 0x30a484u: goto label_30a484;
        case 0x30a4b0u: goto label_30a4b0;
        case 0x30a4e0u: goto label_30a4e0;
        case 0x30a51cu: goto label_30a51c;
        case 0x30a530u: goto label_30a530;
        case 0x30a544u: goto label_30a544;
        case 0x30a558u: goto label_30a558;
        case 0x30a56cu: goto label_30a56c;
        case 0x30a580u: goto label_30a580;
        case 0x30a594u: goto label_30a594;
        case 0x30a5a8u: goto label_30a5a8;
        case 0x30a5bcu: goto label_30a5bc;
        case 0x30a5d0u: goto label_30a5d0;
        case 0x30a5e4u: goto label_30a5e4;
        default: break;
    }

    ctx->pc = 0x30a428u;

    // 0x30a428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30a42c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30a430: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30a434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30a434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30a440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30a444: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a448: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a44c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A44Cu;
    SET_GPR_U32(ctx, 31, 0x30A454u);
    ctx->pc = 0x30A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A44Cu;
    // 0x30a450: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A44Cu, 0x30A454u)) {
        return;
    }
    ctx->pc = 0x30A454u;
label_30a454:
    // 0x30a454: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30A454u;
    {
        const bool branch_taken_0x30a454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A454u;
        // 0x30a458: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a454) {
            ctx->pc = 0x30A4E0u;
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A45Cu;
    // 0x30a45c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x30a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30a460: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a464: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x30A464u;
    {
        const bool branch_taken_0x30a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A464u;
        // 0x30a468: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a464) {
            ctx->pc = 0x30A4E0u;
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A46Cu;
    // 0x30a46c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30A46Cu;
    {
        const bool branch_taken_0x30a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A46Cu;
        // 0x30a470: 0x27b20004  addiu       $s2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a46c) {
            ctx->pc = 0x30A4E0u;
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A474u;
    // 0x30a474: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a478: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a47c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A47Cu;
    SET_GPR_U32(ctx, 31, 0x30A484u);
    ctx->pc = 0x30A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A47Cu;
    // 0x30a480: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A47Cu, 0x30A484u)) {
        return;
    }
    ctx->pc = 0x30A484u;
label_30a484:
    // 0x30a484: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30A484u;
    {
        const bool branch_taken_0x30a484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A484u;
        // 0x30a488: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a484) {
            ctx->pc = 0x30A4B8u;
            goto label_30a4b8;
        }
    }
    ctx->pc = 0x30A48Cu;
    // 0x30a48c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a490: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a494: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A494u;
    {
        const bool branch_taken_0x30a494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A494u;
        // 0x30a498: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a494) {
            ctx->pc = 0x30A4B8u;
            goto label_30a4b8;
        }
    }
    ctx->pc = 0x30A49Cu;
    // 0x30a49c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A49Cu;
    {
        const bool branch_taken_0x30a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A49Cu;
        // 0x30a4a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a49c) {
            ctx->pc = 0x30A4B8u;
            goto label_30a4b8;
        }
    }
    ctx->pc = 0x30A4A4u;
    // 0x30a4a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a4a8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A4A8u;
    SET_GPR_U32(ctx, 31, 0x30A4B0u);
    ctx->pc = 0x30A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4A8u;
    // 0x30a4ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A4A8u, 0x30A4B0u)) {
        return;
    }
    ctx->pc = 0x30A4B0u;
label_30a4b0:
    // 0x30a4b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A4B0u;
    {
        const bool branch_taken_0x30a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a4b0) {
            ctx->pc = 0x30A4C0u;
            goto label_30a4c0;
        }
    }
    ctx->pc = 0x30A4B8u;
label_30a4b8:
    // 0x30a4b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A4B8u;
    {
        const bool branch_taken_0x30a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4B8u;
        // 0x30a4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4b8) {
            ctx->pc = 0x30A4D8u;
            goto label_30a4d8;
        }
    }
    ctx->pc = 0x30A4C0u;
label_30a4c0:
    // 0x30a4c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A4C0u;
    {
        const bool branch_taken_0x30a4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4C0u;
        // 0x30a4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4c0) {
            ctx->pc = 0x30A4D8u;
            goto label_30a4d8;
        }
    }
    ctx->pc = 0x30A4C8u;
    // 0x30a4c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a4cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a4d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a4d8:
    // 0x30a4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A4D8u;
    {
        const bool branch_taken_0x30a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4D8u;
        // 0x30a4dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4d8) {
            ctx->pc = 0x30A4E8u;
            goto label_30a4e8;
        }
    }
    ctx->pc = 0x30A4E0u;
label_30a4e0:
    // 0x30a4e0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30A4E0u;
    {
        const bool branch_taken_0x30a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4E0u;
        // 0x30a4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4e0) {
            ctx->pc = 0x30A604u;
            goto label_30a604;
        }
    }
    ctx->pc = 0x30A4E8u;
label_30a4e8:
    // 0x30a4e8: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x30a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x30a4ec: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x30a4ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x30a4f0: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30A4F0u;
    {
        const bool branch_taken_0x30a4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4F0u;
        // 0x30a4f4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4f0) {
            ctx->pc = 0x30A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a4e0;
        }
    }
    ctx->pc = 0x30A4F8u;
    // 0x30a4f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30a4fc: 0x24420ef0  addiu       $v0, $v0, 0xEF0
    ctx->pc = 0x30a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
    // 0x30a500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a504: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a508: 0x800008  jr          $a0
    ctx->pc = 0x30A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30A4E0u: goto label_30a4e0;
            case 0x30A510u: goto label_30a510;
            case 0x30A524u: goto label_30a524;
            case 0x30A538u: goto label_30a538;
            case 0x30A54Cu: goto label_30a54c;
            case 0x30A560u: goto label_30a560;
            case 0x30A574u: goto label_30a574;
            case 0x30A588u: goto label_30a588;
            case 0x30A59Cu: goto label_30a59c;
            case 0x30A5B0u: goto label_30a5b0;
            case 0x30A5C4u: goto label_30a5c4;
            case 0x30A5D8u: goto label_30a5d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A508u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30A510u;
label_30a510:
    // 0x30a510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a514: 0xc0c3666  jal         func_30D998
    ctx->pc = 0x30A514u;
    SET_GPR_U32(ctx, 31, 0x30A51Cu);
    ctx->pc = 0x30A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A514u;
    // 0x30a518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D998u, 0x30A514u, 0x30A51Cu)) {
        return;
    }
    ctx->pc = 0x30A51Cu;
label_30a51c:
    // 0x30a51c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x30A51Cu;
    {
        const bool branch_taken_0x30a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a51c) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A524u;
label_30a524:
    // 0x30a524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a528: 0xc0c3688  jal         func_30DA20
    ctx->pc = 0x30A528u;
    SET_GPR_U32(ctx, 31, 0x30A530u);
    ctx->pc = 0x30A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A528u;
    // 0x30a52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DA20u, 0x30A528u, 0x30A530u)) {
        return;
    }
    ctx->pc = 0x30A530u;
label_30a530:
    // 0x30a530: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x30A530u;
    {
        const bool branch_taken_0x30a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a530) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A538u;
label_30a538:
    // 0x30a538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a53c: 0xc0c36aa  jal         func_30DAA8
    ctx->pc = 0x30A53Cu;
    SET_GPR_U32(ctx, 31, 0x30A544u);
    ctx->pc = 0x30A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A53Cu;
    // 0x30a540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DAA8u, 0x30A53Cu, 0x30A544u)) {
        return;
    }
    ctx->pc = 0x30A544u;
label_30a544:
    // 0x30a544: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30A544u;
    {
        const bool branch_taken_0x30a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a544) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A54Cu;
label_30a54c:
    // 0x30a54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a550: 0xc0c36ce  jal         func_30DB38
    ctx->pc = 0x30A550u;
    SET_GPR_U32(ctx, 31, 0x30A558u);
    ctx->pc = 0x30A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A550u;
    // 0x30a554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DB38u, 0x30A550u, 0x30A558u)) {
        return;
    }
    ctx->pc = 0x30A558u;
label_30a558:
    // 0x30a558: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30A558u;
    {
        const bool branch_taken_0x30a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a558) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A560u;
label_30a560:
    // 0x30a560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a564: 0xc0c2988  jal         func_30A620
    ctx->pc = 0x30A564u;
    SET_GPR_U32(ctx, 31, 0x30A56Cu);
    ctx->pc = 0x30A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A564u;
    // 0x30a568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30A620u, 0x30A564u, 0x30A56Cu)) {
        return;
    }
    ctx->pc = 0x30A56Cu;
label_30a56c:
    // 0x30a56c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30A56Cu;
    {
        const bool branch_taken_0x30a56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a56c) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A574u;
label_30a574:
    // 0x30a574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a578: 0xc0c2a1e  jal         func_30A878
    ctx->pc = 0x30A578u;
    SET_GPR_U32(ctx, 31, 0x30A580u);
    ctx->pc = 0x30A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A578u;
    // 0x30a57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30A878u, 0x30A578u, 0x30A580u)) {
        return;
    }
    ctx->pc = 0x30A580u;
label_30a580:
    // 0x30a580: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30A580u;
    {
        const bool branch_taken_0x30a580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a580) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A588u;
label_30a588:
    // 0x30a588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a58c: 0xc0c370e  jal         func_30DC38
    ctx->pc = 0x30A58Cu;
    SET_GPR_U32(ctx, 31, 0x30A594u);
    ctx->pc = 0x30A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A58Cu;
    // 0x30a590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DC38u, 0x30A58Cu, 0x30A594u)) {
        return;
    }
    ctx->pc = 0x30A594u;
label_30a594:
    // 0x30a594: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30A594u;
    {
        const bool branch_taken_0x30a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a594) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A59Cu;
label_30a59c:
    // 0x30a59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5a0: 0xc0c3734  jal         func_30DCD0
    ctx->pc = 0x30A5A0u;
    SET_GPR_U32(ctx, 31, 0x30A5A8u);
    ctx->pc = 0x30A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5A0u;
    // 0x30a5a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DCD0u, 0x30A5A0u, 0x30A5A8u)) {
        return;
    }
    ctx->pc = 0x30A5A8u;
label_30a5a8:
    // 0x30a5a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30A5A8u;
    {
        const bool branch_taken_0x30a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5a8) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A5B0u;
label_30a5b0:
    // 0x30a5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5b4: 0xc0c375c  jal         func_30DD70
    ctx->pc = 0x30A5B4u;
    SET_GPR_U32(ctx, 31, 0x30A5BCu);
    ctx->pc = 0x30A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5B4u;
    // 0x30a5b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30DD70u, 0x30A5B4u, 0x30A5BCu)) {
        return;
    }
    ctx->pc = 0x30A5BCu;
label_30a5bc:
    // 0x30a5bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30A5BCu;
    {
        const bool branch_taken_0x30a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5bc) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A5C4u;
label_30a5c4:
    // 0x30a5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5c8: 0xc0c2d22  jal         func_30B488
    ctx->pc = 0x30A5C8u;
    SET_GPR_U32(ctx, 31, 0x30A5D0u);
    ctx->pc = 0x30A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5C8u;
    // 0x30a5cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30B488u, 0x30A5C8u, 0x30A5D0u)) {
        return;
    }
    ctx->pc = 0x30A5D0u;
label_30a5d0:
    // 0x30a5d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30A5D0u;
    {
        const bool branch_taken_0x30a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5d0) {
            ctx->pc = 0x30A5E4u;
            goto label_30a5e4;
        }
    }
    ctx->pc = 0x30A5D8u;
label_30a5d8:
    // 0x30a5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5dc: 0xc0c2e08  jal         func_30B820
    ctx->pc = 0x30A5DCu;
    SET_GPR_U32(ctx, 31, 0x30A5E4u);
    ctx->pc = 0x30A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5DCu;
    // 0x30a5e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30B820u, 0x30A5DCu, 0x30A5E4u)) {
        return;
    }
    ctx->pc = 0x30A5E4u;
label_30a5e4:
    // 0x30a5e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A5E4u;
    {
        const bool branch_taken_0x30a5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5E4u;
        // 0x30a5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5e4) {
            ctx->pc = 0x30A604u;
            goto label_30a604;
        }
    }
    ctx->pc = 0x30A5ECu;
    // 0x30a5ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A5ECu;
    {
        const bool branch_taken_0x30a5ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5ECu;
        // 0x30a5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5ec) {
            ctx->pc = 0x30A604u;
            goto label_30a604;
        }
    }
    ctx->pc = 0x30A5F4u;
    // 0x30a5f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a5f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30a5fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a604:
    // 0x30a604: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30a604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a608: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30a608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a60c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a614: 0x3e00008  jr          $ra
    ctx->pc = 0x30A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A614u;
        // 0x30a618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A61Cu;
    // 0x30a61c: 0x0  nop
    ctx->pc = 0x30a61cu;
    // NOP
    ctx->pc = 0x30a620u;
}
