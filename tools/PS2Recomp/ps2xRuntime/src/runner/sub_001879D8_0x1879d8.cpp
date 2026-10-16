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

// Function: sub_001879D8
// Address: 0x1879d8 - 0x187bd0
void sub_001879D8_0x1879d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001879D8_0x1879d8");
#endif

    switch (ctx->pc) {
        case 0x1879f4u: goto label_1879f4;
        case 0x187a08u: goto label_187a08;
        case 0x187a20u: goto label_187a20;
        case 0x187adcu: goto label_187adc;
        case 0x187af4u: goto label_187af4;
        case 0x187ba8u: goto label_187ba8;
        default: break;
    }

    ctx->pc = 0x1879d8u;

    // 0x1879d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1879dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1879dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1879e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1879e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1879e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1879e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1879e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1879ec: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1879ECu;
    SET_GPR_U32(ctx, 31, 0x1879F4u);
    ctx->pc = 0x1879F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879ECu;
    // 0x1879f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1879ECu, 0x1879F4u)) {
        return;
    }
    ctx->pc = 0x1879F4u;
label_1879f4:
    // 0x1879f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1879f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1879f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879fc: 0x8c46bce0  lw          $a2, -0x4320($v0)
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBCE0u));
    // 0x187a00: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x187A00u;
    SET_GPR_U32(ctx, 31, 0x187A08u);
    ctx->pc = 0x187A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A00u;
    // 0x187a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x187A00u, 0x187A08u)) {
        return;
    }
    ctx->pc = 0x187A08u;
label_187a08:
    // 0x187a08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187a10: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x187A10u;
    {
        const bool branch_taken_0x187a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A10u;
        // 0x187a14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a10) {
            ctx->pc = 0x187BB8u;
            goto label_187bb8;
        }
    }
    ctx->pc = 0x187A18u;
    // 0x187a18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x187a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a1c: 0x0  nop
    ctx->pc = 0x187a1cu;
    // NOP
label_187a20:
    // 0x187a20: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187a24: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x187a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x187a28: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x187A28u;
    {
        const bool branch_taken_0x187a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A28u;
        // 0x187a2c: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a28) {
            ctx->pc = 0x187B30u;
            goto label_187b30;
        }
    }
    ctx->pc = 0x187A30u;
    // 0x187a30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x187A30u;
    {
        const bool branch_taken_0x187a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A30u;
        // 0x187a34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a30) {
            ctx->pc = 0x187A78u;
            goto label_187a78;
        }
    }
    ctx->pc = 0x187A38u;
    // 0x187a38: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x187A38u;
    {
        const bool branch_taken_0x187a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A38u;
        // 0x187a3c: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a38) {
            ctx->pc = 0x187AFCu;
            goto label_187afc;
        }
    }
    ctx->pc = 0x187A40u;
    // 0x187a40: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x187A40u;
    {
        const bool branch_taken_0x187a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a40) {
            ctx->pc = 0x187A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187A40u;
            // 0x187a44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187A60u;
            goto label_187a60;
        }
    }
    ctx->pc = 0x187A48u;
    // 0x187a48: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x187A48u;
    {
        const bool branch_taken_0x187a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A48u;
        // 0x187a4c: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a48) {
            ctx->pc = 0x187ACCu;
            goto label_187acc;
        }
    }
    ctx->pc = 0x187A50u;
    // 0x187a50: 0x10700024  beq         $v1, $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x187A50u;
    {
        const bool branch_taken_0x187a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x187A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A50u;
        // 0x187a54: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a50) {
            ctx->pc = 0x187AE4u;
            goto label_187ae4;
        }
    }
    ctx->pc = 0x187A58u;
    // 0x187a58: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x187A58u;
    {
        const bool branch_taken_0x187a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A58u;
        // 0x187a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a58) {
            ctx->pc = 0x187B94u;
            goto label_187b94;
        }
    }
    ctx->pc = 0x187A60u;
label_187a60:
    // 0x187a60: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x187A60u;
    {
        const bool branch_taken_0x187a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A60u;
        // 0x187a64: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a60) {
            ctx->pc = 0x187B08u;
            goto label_187b08;
        }
    }
    ctx->pc = 0x187A68u;
    // 0x187a68: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x187A68u;
    {
        const bool branch_taken_0x187a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A68u;
        // 0x187a6c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a68) {
            ctx->pc = 0x187B1Cu;
            goto label_187b1c;
        }
    }
    ctx->pc = 0x187A70u;
    // 0x187a70: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x187A70u;
    {
        const bool branch_taken_0x187a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A70u;
        // 0x187a74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a70) {
            ctx->pc = 0x187B94u;
            goto label_187b94;
        }
    }
    ctx->pc = 0x187A78u;
label_187a78:
    // 0x187a78: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x187a7c: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x187A7Cu;
    {
        const bool branch_taken_0x187a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A7Cu;
        // 0x187a80: 0x2c6203ea  sltiu       $v0, $v1, 0x3EA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1002) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a7c) {
            ctx->pc = 0x187B64u;
            goto label_187b64;
        }
    }
    ctx->pc = 0x187A84u;
    // 0x187a84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187A84u;
    {
        const bool branch_taken_0x187a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A84u;
        // 0x187a88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a84) {
            ctx->pc = 0x187AA4u;
            goto label_187aa4;
        }
    }
    ctx->pc = 0x187A8Cu;
    // 0x187a8c: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x187A8Cu;
    {
        const bool branch_taken_0x187a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A8Cu;
        // 0x187a90: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a8c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187A94u;
    // 0x187a94: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x187A94u;
    {
        const bool branch_taken_0x187a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A94u;
        // 0x187a98: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a94) {
            ctx->pc = 0x187B58u;
            goto label_187b58;
        }
    }
    ctx->pc = 0x187A9Cu;
    // 0x187a9c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x187A9Cu;
    {
        const bool branch_taken_0x187a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A9Cu;
        // 0x187aa0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a9c) {
            ctx->pc = 0x187B94u;
            goto label_187b94;
        }
    }
    ctx->pc = 0x187AA4u;
label_187aa4:
    // 0x187aa4: 0x240203eb  addiu       $v0, $zero, 0x3EB
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x187aa8: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x187AA8u;
    {
        const bool branch_taken_0x187aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AA8u;
        // 0x187aac: 0x2c6203eb  sltiu       $v0, $v1, 0x3EB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1003) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187aa8) {
            ctx->pc = 0x187B78u;
            goto label_187b78;
        }
    }
    ctx->pc = 0x187AB0u;
    // 0x187ab0: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x187AB0u;
    {
        const bool branch_taken_0x187ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ab0) {
            ctx->pc = 0x187AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187AB0u;
            // 0x187ab4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187B70u;
            goto label_187b70;
        }
    }
    ctx->pc = 0x187AB8u;
    // 0x187ab8: 0x240203ec  addiu       $v0, $zero, 0x3EC
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x187abc: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x187ABCu;
    {
        const bool branch_taken_0x187abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187ABCu;
        // 0x187ac0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187abc) {
            ctx->pc = 0x187B84u;
            goto label_187b84;
        }
    }
    ctx->pc = 0x187AC4u;
    // 0x187ac4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x187AC4u;
    {
        const bool branch_taken_0x187ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC4u;
        // 0x187ac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ac4) {
            ctx->pc = 0x187B94u;
            goto label_187b94;
        }
    }
    ctx->pc = 0x187ACCu;
label_187acc:
    // 0x187acc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x187ad0: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x187ad4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x187AD4u;
    SET_GPR_U32(ctx, 31, 0x187ADCu);
    ctx->pc = 0x187AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AD4u;
    // 0x187ad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x187AD4u, 0x187ADCu)) {
        return;
    }
    ctx->pc = 0x187ADCu;
label_187adc:
    // 0x187adc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x187ADCu;
    {
        const bool branch_taken_0x187adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187ADCu;
        // 0x187ae0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187adc) {
            ctx->pc = 0x187B90u;
            goto label_187b90;
        }
    }
    ctx->pc = 0x187AE4u;
label_187ae4:
    // 0x187ae4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x187ae8: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x187ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x187aec: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x187AECu;
    SET_GPR_U32(ctx, 31, 0x187AF4u);
    ctx->pc = 0x187AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AECu;
    // 0x187af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x187AECu, 0x187AF4u)) {
        return;
    }
    ctx->pc = 0x187AF4u;
label_187af4:
    // 0x187af4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x187AF4u;
    {
        const bool branch_taken_0x187af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AF4u;
        // 0x187af8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187af4) {
            ctx->pc = 0x187B90u;
            goto label_187b90;
        }
    }
    ctx->pc = 0x187AFCu;
label_187afc:
    // 0x187afc: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x187b00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x187B00u;
    {
        const bool branch_taken_0x187b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B00u;
        // 0x187b04: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b00) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B08u;
label_187b08:
    // 0x187b08: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b0c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x187B0Cu;
    {
        const bool branch_taken_0x187b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b0c) {
            ctx->pc = 0x187B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187B0Cu;
            // 0x187b10: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B14u;
    // 0x187b14: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x187B14u;
    {
        const bool branch_taken_0x187b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B14u;
        // 0x187b18: 0xae300058  sw          $s0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b14) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B1Cu;
label_187b1c:
    // 0x187b1c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b20: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x187B20u;
    {
        const bool branch_taken_0x187b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b20) {
            ctx->pc = 0x187B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187B20u;
            // 0x187b24: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B28u;
    // 0x187b28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187B28u;
    {
        const bool branch_taken_0x187b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B28u;
        // 0x187b2c: 0xae30005c  sw          $s0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b28) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B30u;
label_187b30:
    // 0x187b30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b34: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x187B34u;
    {
        const bool branch_taken_0x187b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b34) {
            ctx->pc = 0x187B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187B34u;
            // 0x187b38: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B3Cu;
    // 0x187b3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187B3Cu;
    {
        const bool branch_taken_0x187b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B3Cu;
        // 0x187b40: 0xae300060  sw          $s0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b3c) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B44u;
label_187b44:
    // 0x187b44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b48: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x187B48u;
    {
        const bool branch_taken_0x187b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b48) {
            ctx->pc = 0x187B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187B48u;
            // 0x187b4c: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B50u;
    // 0x187b50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x187B50u;
    {
        const bool branch_taken_0x187b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B50u;
        // 0x187b54: 0xae300074  sw          $s0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b50) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B58u;
label_187b58:
    // 0x187b58: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x187b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B5Cu;
        // 0x187b60: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B64u;
label_187b64:
    // 0x187b64: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x187b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187B68u;
    {
        const bool branch_taken_0x187b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B68u;
        // 0x187b6c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b68) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187B70u;
    {
        const bool branch_taken_0x187b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B70u;
        // 0x187b74: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b70) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B78u;
label_187b78:
    // 0x187b78: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187B7Cu;
    {
        const bool branch_taken_0x187b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B7Cu;
        // 0x187b80: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b7c) {
            ctx->pc = 0x187B8Cu;
            goto label_187b8c;
        }
    }
    ctx->pc = 0x187B84u;
label_187b84:
    // 0x187b84: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187b88: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x187b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_187b8c:
    // 0x187b8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187b90:
    // 0x187b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187b94:
    // 0x187b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187ba0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x187BA0u;
    SET_GPR_U32(ctx, 31, 0x187BA8u);
    ctx->pc = 0x187BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BA0u;
    // 0x187ba4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x187BA0u, 0x187BA8u)) {
        return;
    }
    ctx->pc = 0x187BA8u;
label_187ba8:
    // 0x187ba8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187bac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187bb0: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x187BB0u;
    {
        const bool branch_taken_0x187bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BB0u;
        // 0x187bb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bb0) {
            ctx->pc = 0x187A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187a20;
        }
    }
    ctx->pc = 0x187BB8u;
label_187bb8:
    // 0x187bb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x187bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187bbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x187bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x187BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC4u;
        // 0x187bc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187BCCu;
    // 0x187bcc: 0x0  nop
    ctx->pc = 0x187bccu;
    // NOP
    ctx->pc = 0x187bd0u;
}
