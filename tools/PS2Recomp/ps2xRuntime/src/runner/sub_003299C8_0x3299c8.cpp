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

// Function: sub_003299C8
// Address: 0x3299c8 - 0x329f08
void sub_003299C8_0x3299c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003299C8_0x3299c8");
#endif

    ctx->pc = 0x3299c8u;

    // 0x3299c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3299c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3299cc: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x3299ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3299d0: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x3299d0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3299d4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x3299d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3299d8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3299d8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3299dc: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x3299dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3299e0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3299e0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3299e4: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3299E4u;
    {
        const bool branch_taken_0x3299e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3299E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E4u;
        // 0x3299e8: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299e4) {
            ctx->pc = 0x329CB4u;
            goto label_329cb4;
        }
    }
    ctx->pc = 0x3299ECu;
    // 0x3299ec: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3299ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3299f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3299F0u;
    {
        const bool branch_taken_0x3299f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299F0u;
        // 0x3299f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299f0) {
            ctx->pc = 0x329A80u;
            goto label_329a80;
        }
    }
    ctx->pc = 0x3299F8u;
    // 0x3299f8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3299f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3299fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3299FCu;
    {
        const bool branch_taken_0x3299fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299FCu;
        // 0x329a00: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299fc) {
            ctx->pc = 0x329A18u;
            goto label_329a18;
        }
    }
    ctx->pc = 0x329A04u;
    // 0x329a04: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x329a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329a08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x329a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329A0Cu;
    {
        const bool branch_taken_0x329a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A0Cu;
        // 0x329a10: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a0c) {
            ctx->pc = 0x329A30u;
            goto label_329a30;
        }
    }
    ctx->pc = 0x329A14u;
    // 0x329a14: 0x0  nop
    ctx->pc = 0x329a14u;
    // NOP
label_329a18:
    // 0x329a18: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x329a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x329a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x329a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329a20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329a24: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329a28: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x329a28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x329a2c: 0x0  nop
    ctx->pc = 0x329a2cu;
    // NOP
label_329a30:
    // 0x329a30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x329a34: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x329a38: 0x24422d28  addiu       $v0, $v0, 0x2D28
    ctx->pc = 0x329a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11560));
    // 0x329a3c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x329a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329a40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329a44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x329a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329a48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329a4c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x329a4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329a50: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x329A50u;
    {
        const bool branch_taken_0x329a50 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A50u;
        // 0x329a54: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a50) {
            ctx->pc = 0x329A6Cu;
            goto label_329a6c;
        }
    }
    ctx->pc = 0x329A58u;
    // 0x329a58: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329a5c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x329a60: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x329a60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x329a64: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x329a64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329a68: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x329a68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_329a6c:
    // 0x329a6c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x329a70: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x329a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x329a74: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x329A74u;
    {
        const bool branch_taken_0x329a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A74u;
        // 0x329a78: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a74) {
            ctx->pc = 0x329BF8u;
            goto label_329bf8;
        }
    }
    ctx->pc = 0x329A7Cu;
    // 0x329a7c: 0x0  nop
    ctx->pc = 0x329a7cu;
    // NOP
label_329a80:
    // 0x329a80: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329A80u;
    {
        const bool branch_taken_0x329a80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A80u;
        // 0x329a84: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a80) {
            ctx->pc = 0x329AA8u;
            goto label_329aa8;
        }
    }
    ctx->pc = 0x329A88u;
    // 0x329a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a8c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329A8Cu;
    {
        const bool branch_taken_0x329a8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a8c) {
            ctx->pc = 0x329A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A8Cu;
            // 0x329a90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A94u;
            goto label_329a94;
        }
    }
    ctx->pc = 0x329A94u;
label_329a94:
    // 0x329a94: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x329a94u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x329a98: 0x1012  mflo        $v0
    ctx->pc = 0x329a98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329a9c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x329a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329aa0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x329aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329aa4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_329aa8:
    // 0x329aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329AA8u;
    {
        const bool branch_taken_0x329aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AA8u;
        // 0x329aac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329aa8) {
            ctx->pc = 0x329AC0u;
            goto label_329ac0;
        }
    }
    ctx->pc = 0x329AB0u;
    // 0x329ab0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x329ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329ab4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x329ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329ab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x329AB8u;
    {
        const bool branch_taken_0x329ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AB8u;
        // 0x329abc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ab8) {
            ctx->pc = 0x329AD8u;
            goto label_329ad8;
        }
    }
    ctx->pc = 0x329AC0u;
label_329ac0:
    // 0x329ac0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x329ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x329ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x329ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329ac8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329acc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329ad0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x329ad0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x329ad4: 0x0  nop
    ctx->pc = 0x329ad4u;
    // NOP
label_329ad8:
    // 0x329ad8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x329adc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x329adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x329ae0: 0x24422d28  addiu       $v0, $v0, 0x2D28
    ctx->pc = 0x329ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11560));
    // 0x329ae4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x329ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329ae8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329aec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x329aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329af0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x329af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329af4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x329af4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329af8: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x329AF8u;
    {
        const bool branch_taken_0x329af8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x329AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF8u;
        // 0x329afc: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329af8) {
            ctx->pc = 0x329B10u;
            goto label_329b10;
        }
    }
    ctx->pc = 0x329B00u;
    // 0x329b00: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x329b00u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x329b04: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x329b08: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x329B08u;
    {
        const bool branch_taken_0x329b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B08u;
        // 0x329b0c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b08) {
            ctx->pc = 0x329BECu;
            goto label_329bec;
        }
    }
    ctx->pc = 0x329B10u;
label_329b10:
    // 0x329b10: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329b14: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x329b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x329b18: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x329b18u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x329b1c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x329b1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329b20: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x329b20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x329b24: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x329b24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x329b28: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x329b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x329b2c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x329b2cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x329b30: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x329b30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x329b34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x329b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b38: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x329b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x329b3c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329B3Cu;
    {
        const bool branch_taken_0x329b3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b3c) {
            ctx->pc = 0x329B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B3Cu;
            // 0x329b40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329B44u;
label_329b44:
    // 0x329b44: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x329b44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b48: 0x1012  mflo        $v0
    ctx->pc = 0x329b48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329b4c: 0x1810  mfhi        $v1
    ctx->pc = 0x329b4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329b50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329b54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329b58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329b58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329b5c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x329b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x329b60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329b64: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329b68: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x329B68u;
    {
        const bool branch_taken_0x329b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b68) {
            ctx->pc = 0x329B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B68u;
            // 0x329b6c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B94u;
            goto label_329b94;
        }
    }
    ctx->pc = 0x329B70u;
    // 0x329b70: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x329b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329b74: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329b78: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x329B78u;
    {
        const bool branch_taken_0x329b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b78) {
            ctx->pc = 0x329B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B78u;
            // 0x329b7c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B94u;
            goto label_329b94;
        }
    }
    ctx->pc = 0x329B80u;
    // 0x329b80: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329b84: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x329B84u;
    {
        const bool branch_taken_0x329b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b84) {
            ctx->pc = 0x329B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B84u;
            // 0x329b88: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B90u;
            goto label_329b90;
        }
    }
    ctx->pc = 0x329B8Cu;
    // 0x329b8c: 0x0  nop
    ctx->pc = 0x329b8cu;
    // NOP
label_329b90:
    // 0x329b90: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x329b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_329b94:
    // 0x329b94: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x329b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x329b98: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x329b98u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x329b9c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329B9Cu;
    {
        const bool branch_taken_0x329b9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b9c) {
            ctx->pc = 0x329BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B9Cu;
            // 0x329ba0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329BA4u;
            goto label_329ba4;
        }
    }
    ctx->pc = 0x329BA4u;
label_329ba4:
    // 0x329ba4: 0x1012  mflo        $v0
    ctx->pc = 0x329ba4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329ba8: 0x1810  mfhi        $v1
    ctx->pc = 0x329ba8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329bac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329bb0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329bb4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329bb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329bb8: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x329bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x329bbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329bc0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329bc4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x329BC4u;
    {
        const bool branch_taken_0x329bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329bc4) {
            ctx->pc = 0x329BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329BC4u;
            // 0x329bc8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329BECu;
            goto label_329bec;
        }
    }
    ctx->pc = 0x329BCCu;
    // 0x329bcc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x329bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329bd0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329bd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329BD4u;
    {
        const bool branch_taken_0x329bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BD4u;
        // 0x329bd8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bd4) {
            ctx->pc = 0x329BECu;
            goto label_329bec;
        }
    }
    ctx->pc = 0x329BDCu;
    // 0x329bdc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329be0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329BE0u;
    {
        const bool branch_taken_0x329be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329be0) {
            ctx->pc = 0x329BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329BE0u;
            // 0x329be4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329BE8u;
            goto label_329be8;
        }
    }
    ctx->pc = 0x329BE8u;
label_329be8:
    // 0x329be8: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x329be8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_329bec:
    // 0x329bec: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x329becu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x329bf0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x329bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329bf4: 0x0  nop
    ctx->pc = 0x329bf4u;
    // NOP
label_329bf8:
    // 0x329bf8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x329bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x329bfc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329BFCu;
    {
        const bool branch_taken_0x329bfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x329bfc) {
            ctx->pc = 0x329C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329BFCu;
            // 0x329c00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C04u;
            goto label_329c04;
        }
    }
    ctx->pc = 0x329C04u;
label_329c04:
    // 0x329c04: 0x1012  mflo        $v0
    ctx->pc = 0x329c04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329c08: 0x1810  mfhi        $v1
    ctx->pc = 0x329c08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329c0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329c10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329c14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329c14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329c18: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x329c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x329c1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329c20: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329c24: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x329C24u;
    {
        const bool branch_taken_0x329c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c24) {
            ctx->pc = 0x329C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C24u;
            // 0x329c28: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C4Cu;
            goto label_329c4c;
        }
    }
    ctx->pc = 0x329C2Cu;
    // 0x329c2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x329c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329c30: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329c34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x329C34u;
    {
        const bool branch_taken_0x329c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c34) {
            ctx->pc = 0x329C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C34u;
            // 0x329c38: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C4Cu;
            goto label_329c4c;
        }
    }
    ctx->pc = 0x329C3Cu;
    // 0x329c3c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329c40: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329C40u;
    {
        const bool branch_taken_0x329c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c40) {
            ctx->pc = 0x329C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C40u;
            // 0x329c44: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C48u;
            goto label_329c48;
        }
    }
    ctx->pc = 0x329C48u;
label_329c48:
    // 0x329c48: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x329c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_329c4c:
    // 0x329c4c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x329c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x329c50: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x329c50u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x329c54: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329C54u;
    {
        const bool branch_taken_0x329c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c54) {
            ctx->pc = 0x329C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C54u;
            // 0x329c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C5Cu;
            goto label_329c5c;
        }
    }
    ctx->pc = 0x329C5Cu;
label_329c5c:
    // 0x329c5c: 0x1012  mflo        $v0
    ctx->pc = 0x329c5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329c60: 0x1810  mfhi        $v1
    ctx->pc = 0x329c60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329c64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329c68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329c6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329c6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329c70: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x329c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x329c74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329c78: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329C7Cu;
    {
        const bool branch_taken_0x329c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c7c) {
            ctx->pc = 0x329C9Cu;
            goto label_329c9c;
        }
    }
    ctx->pc = 0x329C84u;
    // 0x329c84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x329c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329c88: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329c8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329C8Cu;
    {
        const bool branch_taken_0x329c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C8Cu;
        // 0x329c90: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c8c) {
            ctx->pc = 0x329C9Cu;
            goto label_329c9c;
        }
    }
    ctx->pc = 0x329C94u;
    // 0x329c94: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329C94u;
    {
        const bool branch_taken_0x329c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c94) {
            ctx->pc = 0x329C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C94u;
            // 0x329c98: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C9Cu;
            goto label_329c9c;
        }
    }
    ctx->pc = 0x329C9Cu;
label_329c9c:
    // 0x329c9c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x329C9Cu;
    {
        const bool branch_taken_0x329c9c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C9Cu;
        // 0x329ca0: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c9c) {
            ctx->pc = 0x329EFCu;
            goto label_329efc;
        }
    }
    ctx->pc = 0x329CA4u;
    // 0x329ca4: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x329ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x329ca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329cac: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x329CACu;
    {
        const bool branch_taken_0x329cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CACu;
        // 0x329cb0: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cac) {
            ctx->pc = 0x329EF8u;
            goto label_329ef8;
        }
    }
    ctx->pc = 0x329CB4u;
label_329cb4:
    // 0x329cb4: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x329cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329cb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329CB8u;
    {
        const bool branch_taken_0x329cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cb8) {
            ctx->pc = 0x329CD4u;
            goto label_329cd4;
        }
    }
    ctx->pc = 0x329CC0u;
    // 0x329cc0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x329cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x329cc4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x329cc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x329cc8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x329cc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x329ccc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x329CCCu;
    {
        const bool branch_taken_0x329ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CCCu;
        // 0x329cd0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ccc) {
            ctx->pc = 0x329EFCu;
            goto label_329efc;
        }
    }
    ctx->pc = 0x329CD4u;
label_329cd4:
    // 0x329cd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x329cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329cd8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329cdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329CDCu;
    {
        const bool branch_taken_0x329cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CDCu;
        // 0x329ce0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cdc) {
            ctx->pc = 0x329CF8u;
            goto label_329cf8;
        }
    }
    ctx->pc = 0x329CE4u;
    // 0x329ce4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x329ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329ce8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x329ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329cec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329CECu;
    {
        const bool branch_taken_0x329cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CECu;
        // 0x329cf0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cec) {
            ctx->pc = 0x329D10u;
            goto label_329d10;
        }
    }
    ctx->pc = 0x329CF4u;
    // 0x329cf4: 0x0  nop
    ctx->pc = 0x329cf4u;
    // NOP
label_329cf8:
    // 0x329cf8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x329cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x329cfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x329cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329d00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329d04: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x329d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329d08: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x329d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x329d0c: 0x0  nop
    ctx->pc = 0x329d0cu;
    // NOP
label_329d10:
    // 0x329d10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x329d14: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x329d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x329d18: 0x24422d28  addiu       $v0, $v0, 0x2D28
    ctx->pc = 0x329d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11560));
    // 0x329d1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x329d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329d20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329d24: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x329d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329d28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x329d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329d2c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x329d2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329d30: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x329D30u;
    {
        const bool branch_taken_0x329d30 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x329D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D30u;
        // 0x329d34: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d30) {
            ctx->pc = 0x329D78u;
            goto label_329d78;
        }
    }
    ctx->pc = 0x329D38u;
    // 0x329d38: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x329d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x329d3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329D3Cu;
    {
        const bool branch_taken_0x329d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D3Cu;
        // 0x329d40: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d3c) {
            ctx->pc = 0x329D50u;
            goto label_329d50;
        }
    }
    ctx->pc = 0x329D44u;
    // 0x329d44: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x329d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329d48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329D48u;
    {
        const bool branch_taken_0x329d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d48) {
            ctx->pc = 0x329D60u;
            goto label_329d60;
        }
    }
    ctx->pc = 0x329D50u;
label_329d50:
    // 0x329d50: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x329d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x329d54: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x329d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x329d58: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x329d58u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329d5c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x329d5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329d60:
    // 0x329d60: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x329D60u;
    {
        const bool branch_taken_0x329d60 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D60u;
        // 0x329d64: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d60) {
            ctx->pc = 0x329EFCu;
            goto label_329efc;
        }
    }
    ctx->pc = 0x329D68u;
    // 0x329d68: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x329d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x329d6c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x329d6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x329d70: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x329D70u;
    {
        const bool branch_taken_0x329d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D70u;
        // 0x329d74: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d70) {
            ctx->pc = 0x329EF8u;
            goto label_329ef8;
        }
    }
    ctx->pc = 0x329D78u;
label_329d78:
    // 0x329d78: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x329d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x329d7c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x329d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x329d80: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x329d80u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x329d84: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x329d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x329d88: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x329d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329d8c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x329d8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329d90: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x329d90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x329d94: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x329d94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x329d98: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x329d98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x329d9c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x329d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x329da0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x329da0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x329da4: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x329da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x329da8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x329da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x329dac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329DACu;
    {
        const bool branch_taken_0x329dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x329dac) {
            ctx->pc = 0x329DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329DACu;
            // 0x329db0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329DB4u;
            goto label_329db4;
        }
    }
    ctx->pc = 0x329DB4u;
label_329db4:
    // 0x329db4: 0x1012  mflo        $v0
    ctx->pc = 0x329db4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329db8: 0x1810  mfhi        $v1
    ctx->pc = 0x329db8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329dbc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x329dbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329dc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329dc4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329dc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329dcc: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x329dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x329dd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329dd4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x329dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329dd8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x329DD8u;
    {
        const bool branch_taken_0x329dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329dd8) {
            ctx->pc = 0x329DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329DD8u;
            // 0x329ddc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E0Cu;
            goto label_329e0c;
        }
    }
    ctx->pc = 0x329DE0u;
    // 0x329de0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x329de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x329de4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x329de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329de8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329DE8u;
    {
        const bool branch_taken_0x329de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DE8u;
        // 0x329dec: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329de8) {
            ctx->pc = 0x329E08u;
            goto label_329e08;
        }
    }
    ctx->pc = 0x329DF0u;
    // 0x329df0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x329df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329df4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x329DF4u;
    {
        const bool branch_taken_0x329df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329df4) {
            ctx->pc = 0x329DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329DF4u;
            // 0x329df8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E0Cu;
            goto label_329e0c;
        }
    }
    ctx->pc = 0x329DFCu;
    // 0x329dfc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x329dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x329e00: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x329e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x329e04: 0x0  nop
    ctx->pc = 0x329e04u;
    // NOP
label_329e08:
    // 0x329e08: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_329e0c:
    // 0x329e0c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329E0Cu;
    {
        const bool branch_taken_0x329e0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e0c) {
            ctx->pc = 0x329E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E0Cu;
            // 0x329e10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E14u;
            goto label_329e14;
        }
    }
    ctx->pc = 0x329E14u;
label_329e14:
    // 0x329e14: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x329e14u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x329e18: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x329e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x329e1c: 0x1012  mflo        $v0
    ctx->pc = 0x329e1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329e20: 0x1810  mfhi        $v1
    ctx->pc = 0x329e20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329e24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x329e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329e2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329e30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329e30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329e34: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x329e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x329e38: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x329e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329e3c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x329e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329e40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x329E40u;
    {
        const bool branch_taken_0x329e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E40u;
        // 0x329e44: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e40) {
            ctx->pc = 0x329E70u;
            goto label_329e70;
        }
    }
    ctx->pc = 0x329E48u;
    // 0x329e48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x329e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x329e4c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x329e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329E50u;
    {
        const bool branch_taken_0x329e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E50u;
        // 0x329e54: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e50) {
            ctx->pc = 0x329E6Cu;
            goto label_329e6c;
        }
    }
    ctx->pc = 0x329E58u;
    // 0x329e58: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x329e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329E5Cu;
    {
        const bool branch_taken_0x329e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E5Cu;
        // 0x329e60: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e5c) {
            ctx->pc = 0x329E70u;
            goto label_329e70;
        }
    }
    ctx->pc = 0x329E64u;
    // 0x329e64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x329e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x329e68: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x329e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_329e6c:
    // 0x329e6c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x329e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_329e70:
    // 0x329e70: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x329e74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x329e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x329e78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x329e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x329e7c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x329e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x329e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x329e84: 0x480019  multu       $v0, $t0
    ctx->pc = 0x329e84u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329e88: 0x3810  mfhi        $a3
    ctx->pc = 0x329e88u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x329e8c: 0x3012  mflo        $a2
    ctx->pc = 0x329e8cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x329e90: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x329e90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329e94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329E94u;
    {
        const bool branch_taken_0x329e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E94u;
        // 0x329e98: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e94) {
            ctx->pc = 0x329EB0u;
            goto label_329eb0;
        }
    }
    ctx->pc = 0x329E9Cu;
    // 0x329e9c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x329E9Cu;
    {
        const bool branch_taken_0x329e9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x329EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E9Cu;
        // 0x329ea0: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e9c) {
            ctx->pc = 0x329EC0u;
            goto label_329ec0;
        }
    }
    ctx->pc = 0x329EA4u;
    // 0x329ea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329EA4u;
    {
        const bool branch_taken_0x329ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ea4) {
            ctx->pc = 0x329EC0u;
            goto label_329ec0;
        }
    }
    ctx->pc = 0x329EACu;
    // 0x329eac: 0x0  nop
    ctx->pc = 0x329eacu;
    // NOP
label_329eb0:
    // 0x329eb0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x329eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x329eb4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x329eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x329eb8: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x329eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329ebc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x329ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329ec0:
    // 0x329ec0: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x329EC0u;
    {
        const bool branch_taken_0x329ec0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x329EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EC0u;
        // 0x329ec4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ec0) {
            ctx->pc = 0x329EFCu;
            goto label_329efc;
        }
    }
    ctx->pc = 0x329EC8u;
    // 0x329ec8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x329ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x329ecc: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x329eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x329ed0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x329ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329ed4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x329ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x329ed8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x329ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x329edc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x329edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329ee0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x329ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x329ee4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329ee8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x329ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x329eec: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x329eecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x329ef0: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x329ef0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x329ef4: 0x0  nop
    ctx->pc = 0x329ef4u;
    // NOP
label_329ef8:
    // 0x329ef8: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x329ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_329efc:
    // 0x329efc: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x329efcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329f00: 0x3e00008  jr          $ra
    ctx->pc = 0x329F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F00u;
        // 0x329f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329F08u;
}
