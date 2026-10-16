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

// Function: sub_00189990
// Address: 0x189990 - 0x189af0
void sub_00189990_0x189990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189990_0x189990");
#endif

    switch (ctx->pc) {
        case 0x189990u: goto label_189990;
        case 0x189994u: goto label_189994;
        case 0x189998u: goto label_189998;
        case 0x18999cu: goto label_18999c;
        case 0x1899a0u: goto label_1899a0;
        case 0x1899a4u: goto label_1899a4;
        case 0x1899a8u: goto label_1899a8;
        case 0x1899acu: goto label_1899ac;
        case 0x1899b0u: goto label_1899b0;
        case 0x1899b4u: goto label_1899b4;
        case 0x1899b8u: goto label_1899b8;
        case 0x1899bcu: goto label_1899bc;
        case 0x1899c0u: goto label_1899c0;
        case 0x1899c4u: goto label_1899c4;
        case 0x1899c8u: goto label_1899c8;
        case 0x1899ccu: goto label_1899cc;
        case 0x1899d0u: goto label_1899d0;
        case 0x1899d4u: goto label_1899d4;
        case 0x1899d8u: goto label_1899d8;
        case 0x1899dcu: goto label_1899dc;
        case 0x1899e0u: goto label_1899e0;
        case 0x1899e4u: goto label_1899e4;
        case 0x1899e8u: goto label_1899e8;
        case 0x1899ecu: goto label_1899ec;
        case 0x1899f0u: goto label_1899f0;
        case 0x1899f4u: goto label_1899f4;
        case 0x1899f8u: goto label_1899f8;
        case 0x1899fcu: goto label_1899fc;
        case 0x189a00u: goto label_189a00;
        case 0x189a04u: goto label_189a04;
        case 0x189a08u: goto label_189a08;
        case 0x189a0cu: goto label_189a0c;
        case 0x189a10u: goto label_189a10;
        case 0x189a14u: goto label_189a14;
        case 0x189a18u: goto label_189a18;
        case 0x189a1cu: goto label_189a1c;
        case 0x189a20u: goto label_189a20;
        case 0x189a24u: goto label_189a24;
        case 0x189a28u: goto label_189a28;
        case 0x189a2cu: goto label_189a2c;
        case 0x189a30u: goto label_189a30;
        case 0x189a34u: goto label_189a34;
        case 0x189a38u: goto label_189a38;
        case 0x189a3cu: goto label_189a3c;
        case 0x189a40u: goto label_189a40;
        case 0x189a44u: goto label_189a44;
        case 0x189a48u: goto label_189a48;
        case 0x189a4cu: goto label_189a4c;
        case 0x189a50u: goto label_189a50;
        case 0x189a54u: goto label_189a54;
        case 0x189a58u: goto label_189a58;
        case 0x189a5cu: goto label_189a5c;
        case 0x189a60u: goto label_189a60;
        case 0x189a64u: goto label_189a64;
        case 0x189a68u: goto label_189a68;
        case 0x189a6cu: goto label_189a6c;
        case 0x189a70u: goto label_189a70;
        case 0x189a74u: goto label_189a74;
        case 0x189a78u: goto label_189a78;
        case 0x189a7cu: goto label_189a7c;
        case 0x189a80u: goto label_189a80;
        case 0x189a84u: goto label_189a84;
        case 0x189a88u: goto label_189a88;
        case 0x189a8cu: goto label_189a8c;
        case 0x189a90u: goto label_189a90;
        case 0x189a94u: goto label_189a94;
        case 0x189a98u: goto label_189a98;
        case 0x189a9cu: goto label_189a9c;
        case 0x189aa0u: goto label_189aa0;
        case 0x189aa4u: goto label_189aa4;
        case 0x189aa8u: goto label_189aa8;
        case 0x189aacu: goto label_189aac;
        case 0x189ab0u: goto label_189ab0;
        case 0x189ab4u: goto label_189ab4;
        case 0x189ab8u: goto label_189ab8;
        case 0x189abcu: goto label_189abc;
        case 0x189ac0u: goto label_189ac0;
        case 0x189ac4u: goto label_189ac4;
        case 0x189ac8u: goto label_189ac8;
        case 0x189accu: goto label_189acc;
        case 0x189ad0u: goto label_189ad0;
        case 0x189ad4u: goto label_189ad4;
        case 0x189ad8u: goto label_189ad8;
        case 0x189adcu: goto label_189adc;
        case 0x189ae0u: goto label_189ae0;
        case 0x189ae4u: goto label_189ae4;
        case 0x189ae8u: goto label_189ae8;
        case 0x189aecu: goto label_189aec;
        default: break;
    }

    ctx->pc = 0x189990u;

label_189990:
    // 0x189990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_189994:
    // 0x189994: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x189994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_189998:
    // 0x189998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x189998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18999c:
    // 0x18999c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18999cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1899a0:
    // 0x1899a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1899a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1899a4:
    // 0x1899a4: 0xc06233e  jal         func_188CF8
label_1899a8:
    if (ctx->pc == 0x1899A8u) {
        ctx->pc = 0x1899A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899A4u;
        // 0x1899a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899ACu;
        goto label_1899ac;
    }
    ctx->pc = 0x1899A4u;
    SET_GPR_U32(ctx, 31, 0x1899ACu);
    ctx->pc = 0x1899A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899A4u;
    // 0x1899a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188CF8u, 0x1899A4u, 0x1899ACu)) {
        return;
    }
    ctx->pc = 0x1899ACu;
label_1899ac:
    // 0x1899ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1899b0:
    // 0x1899b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1899b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1899b4:
    // 0x1899b4: 0x8c46bd40  lw          $a2, -0x42C0($v0)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950208)));
label_1899b8:
    // 0x1899b8: 0xc07f1c0  jal         func_1FC700
label_1899bc:
    if (ctx->pc == 0x1899BCu) {
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899C0u;
        goto label_1899c0;
    }
    ctx->pc = 0x1899B8u;
    SET_GPR_U32(ctx, 31, 0x1899C0u);
    ctx->pc = 0x1899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899B8u;
    // 0x1899bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1899B8u, 0x1899C0u)) {
        return;
    }
    ctx->pc = 0x1899C0u;
label_1899c0:
    // 0x1899c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1899c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1899c4:
    // 0x1899c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1899c8:
    // 0x1899c8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1899cc:
    if (ctx->pc == 0x1899CCu) {
        ctx->pc = 0x1899CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899C8u;
        // 0x1899cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899D0u;
        goto label_1899d0;
    }
    ctx->pc = 0x1899C8u;
    {
        const bool branch_taken_0x1899c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899C8u;
        // 0x1899cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899c8) {
            ctx->pc = 0x189AE0u;
            goto label_189ae0;
        }
    }
    ctx->pc = 0x1899D0u;
label_1899d0:
    // 0x1899d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1899d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1899d4:
    // 0x1899d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1899d8:
    // 0x1899d8: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x1899d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1899dc:
    // 0x1899dc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1899e0:
    if (ctx->pc == 0x1899E0u) {
        ctx->pc = 0x1899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899DCu;
        // 0x1899e0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899E4u;
        goto label_1899e4;
    }
    ctx->pc = 0x1899DCu;
    {
        const bool branch_taken_0x1899dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899DCu;
        // 0x1899e0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899dc) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x1899E4u;
label_1899e4:
    // 0x1899e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1899e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1899e8:
    // 0x1899e8: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_1899ec:
    // 0x1899ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1899f0:
    // 0x1899f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1899f4:
    // 0x1899f4: 0x800008  jr          $a0
label_1899f8:
    if (ctx->pc == 0x1899F8u) {
        ctx->pc = 0x1899FCu;
        goto label_1899fc;
    }
    ctx->pc = 0x1899F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1899FCu: goto label_1899fc;
            case 0x189A28u: goto label_189a28;
            case 0x189A50u: goto label_189a50;
            case 0x189A70u: goto label_189a70;
            case 0x189A98u: goto label_189a98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1899F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1899FCu;
label_1899fc:
    // 0x1899fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1899fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189a00:
    // 0x189a00: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x189a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_189a04:
    // 0x189a04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x189a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_189a08:
    // 0x189a08: 0xae2400d8  sw          $a0, 0xD8($s1)
    ctx->pc = 0x189a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 4));
label_189a0c:
    // 0x189a0c: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_189a10:
    // 0x189a10: 0x40f809  jalr        $v0
label_189a14:
    if (ctx->pc == 0x189A14u) {
        ctx->pc = 0x189A18u;
        goto label_189a18;
    }
    ctx->pc = 0x189A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189A18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189A10u, 0x189A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189A18u;
label_189a18:
    // 0x189a18: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_189a1c:
    if (ctx->pc == 0x189A1Cu) {
        ctx->pc = 0x189A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A18u;
        // 0x189a1c: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A20u;
        goto label_189a20;
    }
    ctx->pc = 0x189A18u;
    {
        const bool branch_taken_0x189a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a18) {
            ctx->pc = 0x189A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A18u;
            // 0x189a1c: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A20u;
label_189a20:
    // 0x189a20: 0x10000024  b           . + 4 + (0x24 << 2)
label_189a24:
    if (ctx->pc == 0x189A24u) {
        ctx->pc = 0x189A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A20u;
        // 0x189a24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A28u;
        goto label_189a28;
    }
    ctx->pc = 0x189A20u;
    {
        const bool branch_taken_0x189a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A20u;
        // 0x189a24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a20) {
            ctx->pc = 0x189AB4u;
            goto label_189ab4;
        }
    }
    ctx->pc = 0x189A28u;
label_189a28:
    // 0x189a28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189a2c:
    // 0x189a2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189a30:
    // 0x189a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_189a34:
    // 0x189a34: 0x2c620026  sltiu       $v0, $v1, 0x26
    ctx->pc = 0x189a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
label_189a38:
    // 0x189a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189a3c:
    if (ctx->pc == 0x189A3Cu) {
        ctx->pc = 0x189A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A38u;
        // 0x189a3c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A40u;
        goto label_189a40;
    }
    ctx->pc = 0x189A38u;
    {
        const bool branch_taken_0x189a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A38u;
        // 0x189a3c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a38) {
            ctx->pc = 0x189A48u;
            goto label_189a48;
        }
    }
    ctx->pc = 0x189A40u;
label_189a40:
    // 0x189a40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_189a44:
    if (ctx->pc == 0x189A44u) {
        ctx->pc = 0x189A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A40u;
        // 0x189a44: 0xae2300c0  sw          $v1, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A48u;
        goto label_189a48;
    }
    ctx->pc = 0x189A40u;
    {
        const bool branch_taken_0x189a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A40u;
        // 0x189a44: 0xae2300c0  sw          $v1, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a40) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A48u;
label_189a48:
    // 0x189a48: 0x10000019  b           . + 4 + (0x19 << 2)
label_189a4c:
    if (ctx->pc == 0x189A4Cu) {
        ctx->pc = 0x189A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A48u;
        // 0x189a4c: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A50u;
        goto label_189a50;
    }
    ctx->pc = 0x189A48u;
    {
        const bool branch_taken_0x189a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A48u;
        // 0x189a4c: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a48) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A50u;
label_189a50:
    // 0x189a50: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x189a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189a54:
    // 0x189a54: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x189a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_189a58:
    // 0x189a58: 0x262500c4  addiu       $a1, $s1, 0xC4
    ctx->pc = 0x189a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_189a5c:
    // 0x189a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189a60:
    // 0x189a60: 0xc07fcf4  jal         func_1FF3D0
label_189a64:
    if (ctx->pc == 0x189A64u) {
        ctx->pc = 0x189A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A60u;
        // 0x189a64: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A68u;
        goto label_189a68;
    }
    ctx->pc = 0x189A60u;
    SET_GPR_U32(ctx, 31, 0x189A68u);
    ctx->pc = 0x189A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A60u;
    // 0x189a64: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x189A60u, 0x189A68u)) {
        return;
    }
    ctx->pc = 0x189A68u;
label_189a68:
    // 0x189a68: 0x10000012  b           . + 4 + (0x12 << 2)
label_189a6c:
    if (ctx->pc == 0x189A6Cu) {
        ctx->pc = 0x189A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A68u;
        // 0x189a6c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A70u;
        goto label_189a70;
    }
    ctx->pc = 0x189A68u;
    {
        const bool branch_taken_0x189a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A68u;
        // 0x189a6c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a68) {
            ctx->pc = 0x189AB4u;
            goto label_189ab4;
        }
    }
    ctx->pc = 0x189A70u;
label_189a70:
    // 0x189a70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189a74:
    // 0x189a74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189a78:
    // 0x189a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x189a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_189a7c:
    // 0x189a7c: 0x2c620026  sltiu       $v0, $v1, 0x26
    ctx->pc = 0x189a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
label_189a80:
    // 0x189a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189a84:
    if (ctx->pc == 0x189A84u) {
        ctx->pc = 0x189A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A80u;
        // 0x189a84: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A88u;
        goto label_189a88;
    }
    ctx->pc = 0x189A80u;
    {
        const bool branch_taken_0x189a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A80u;
        // 0x189a84: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a80) {
            ctx->pc = 0x189A90u;
            goto label_189a90;
        }
    }
    ctx->pc = 0x189A88u;
label_189a88:
    // 0x189a88: 0x10000009  b           . + 4 + (0x9 << 2)
label_189a8c:
    if (ctx->pc == 0x189A8Cu) {
        ctx->pc = 0x189A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A88u;
        // 0x189a8c: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A90u;
        goto label_189a90;
    }
    ctx->pc = 0x189A88u;
    {
        const bool branch_taken_0x189a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A88u;
        // 0x189a8c: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a88) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A90u;
label_189a90:
    // 0x189a90: 0x10000007  b           . + 4 + (0x7 << 2)
label_189a94:
    if (ctx->pc == 0x189A94u) {
        ctx->pc = 0x189A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A90u;
        // 0x189a94: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A98u;
        goto label_189a98;
    }
    ctx->pc = 0x189A90u;
    {
        const bool branch_taken_0x189a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A90u;
        // 0x189a94: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a90) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A98u;
label_189a98:
    // 0x189a98: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189a9c:
    // 0x189a9c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x189a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_189aa0:
    // 0x189aa0: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_189aa4:
    // 0x189aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189aa8:
    // 0x189aa8: 0xc07fcf4  jal         func_1FF3D0
label_189aac:
    if (ctx->pc == 0x189AACu) {
        ctx->pc = 0x189AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA8u;
        // 0x189aac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AB0u;
        goto label_189ab0;
    }
    ctx->pc = 0x189AA8u;
    SET_GPR_U32(ctx, 31, 0x189AB0u);
    ctx->pc = 0x189AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AA8u;
    // 0x189aac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x189AA8u, 0x189AB0u)) {
        return;
    }
    ctx->pc = 0x189AB0u;
label_189ab0:
    // 0x189ab0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189ab4:
    // 0x189ab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x189ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_189ab8:
    // 0x189ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189abc:
    // 0x189abc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_189ac0:
    // 0x189ac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x189ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_189ac4:
    // 0x189ac4: 0xc07f0c8  jal         func_1FC320
label_189ac8:
    if (ctx->pc == 0x189AC8u) {
        ctx->pc = 0x189AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AC4u;
        // 0x189ac8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ACCu;
        goto label_189acc;
    }
    ctx->pc = 0x189AC4u;
    SET_GPR_U32(ctx, 31, 0x189ACCu);
    ctx->pc = 0x189AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AC4u;
    // 0x189ac8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x189AC4u, 0x189ACCu)) {
        return;
    }
    ctx->pc = 0x189ACCu;
label_189acc:
    // 0x189acc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189ad0:
    // 0x189ad0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189ad4:
    // 0x189ad4: 0x5460ffc0  bnel        $v1, $zero, . + 4 + (-0x40 << 2)
label_189ad8:
    if (ctx->pc == 0x189AD8u) {
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ADCu;
        goto label_189adc;
    }
    ctx->pc = 0x189AD4u;
    {
        const bool branch_taken_0x189ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189ad4) {
            ctx->pc = 0x189AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189AD4u;
            // 0x189ad8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1899D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1899d8;
        }
    }
    ctx->pc = 0x189ADCu;
label_189adc:
    // 0x189adc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x189adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_189ae0:
    // 0x189ae0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189ae4:
    // 0x189ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189ae8:
    // 0x189ae8: 0x3e00008  jr          $ra
label_189aec:
    if (ctx->pc == 0x189AECu) {
        ctx->pc = 0x189AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AE8u;
        // 0x189aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AF0u;
        goto label_fallthrough_0x189ae8;
    }
    ctx->pc = 0x189AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AE8u;
        // 0x189aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x189ae8:
    ctx->pc = 0x189AF0u;
}
