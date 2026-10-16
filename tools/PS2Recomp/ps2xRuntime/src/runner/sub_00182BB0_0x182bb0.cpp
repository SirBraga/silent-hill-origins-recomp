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

// Function: sub_00182BB0
// Address: 0x182bb0 - 0x182e80
void sub_00182BB0_0x182bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182BB0_0x182bb0");
#endif

    switch (ctx->pc) {
        case 0x182be0u: goto label_182be0;
        case 0x182c04u: goto label_182c04;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c60u: goto label_182c60;
        case 0x182ca0u: goto label_182ca0;
        case 0x182cccu: goto label_182ccc;
        case 0x182cf4u: goto label_182cf4;
        case 0x182d34u: goto label_182d34;
        case 0x182d50u: goto label_182d50;
        case 0x182d6cu: goto label_182d6c;
        case 0x182d74u: goto label_182d74;
        case 0x182d80u: goto label_182d80;
        case 0x182d90u: goto label_182d90;
        case 0x182dccu: goto label_182dcc;
        case 0x182de0u: goto label_182de0;
        case 0x182e00u: goto label_182e00;
        case 0x182e0cu: goto label_182e0c;
        case 0x182e24u: goto label_182e24;
        case 0x182e48u: goto label_182e48;
        default: break;
    }

    ctx->pc = 0x182bb0u;

    // 0x182bb0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x182bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x182bb4: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x182bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x182bb8: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x182bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
    // 0x182bbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x182bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bc4: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x182bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x182bc8: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x182bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x182bcc: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x182bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x182bd0: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x182bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
    // 0x182bd4: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x182bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x182bd8: 0xc0c5c8e  jal         func_317238
    ctx->pc = 0x182BD8u;
    SET_GPR_U32(ctx, 31, 0x182BE0u);
    ctx->pc = 0x182BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BD8u;
    // 0x182bdc: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317238u, 0x182BD8u, 0x182BE0u)) {
        return;
    }
    ctx->pc = 0x182BE0u;
label_182be0:
    // 0x182be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x182be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182be4: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x182BE4u;
    {
        const bool branch_taken_0x182be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BE4u;
        // 0x182be8: 0x27b10100  addiu       $s1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182be4) {
            ctx->pc = 0x182CFCu;
            goto label_182cfc;
        }
    }
    ctx->pc = 0x182BECu;
    // 0x182bec: 0x2538023  subu        $s0, $s2, $s3
    ctx->pc = 0x182becu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x182bf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x182bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x182bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bfc: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x182BFCu;
    SET_GPR_U32(ctx, 31, 0x182C04u);
    ctx->pc = 0x182C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BFCu;
    // 0x182c00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x182BFCu, 0x182C04u)) {
        return;
    }
    ctx->pc = 0x182C04u;
label_182c04:
    // 0x182c04: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x182c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x182c08: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x182c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x182c0c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x182c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x182c10: 0x24a57e78  addiu       $a1, $a1, 0x7E78
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32376));
    // 0x182c14: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x182C14u;
    SET_GPR_U32(ctx, 31, 0x182C1Cu);
    ctx->pc = 0x182C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C14u;
    // 0x182c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x182C14u, 0x182C1Cu)) {
        return;
    }
    ctx->pc = 0x182C1Cu;
label_182c1c:
    // 0x182c1c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x182C1Cu;
    {
        const bool branch_taken_0x182c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C1Cu;
        // 0x182c20: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c1c) {
            ctx->pc = 0x182CD4u;
            goto label_182cd4;
        }
    }
    ctx->pc = 0x182C24u;
    // 0x182c24: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x182C24u;
    SET_GPR_U32(ctx, 31, 0x182C2Cu);
    ctx->pc = 0x182C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C24u;
    // 0x182c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x182C24u, 0x182C2Cu)) {
        return;
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182c34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x182c38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c3c: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x182C3Cu;
    {
        const bool branch_taken_0x182c3c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x182C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C3Cu;
        // 0x182c40: 0xac433bc0  sw          $v1, 0x3BC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c3c) {
            ctx->pc = 0x182C94u;
            goto label_182c94;
        }
    }
    ctx->pc = 0x182C44u;
    // 0x182c44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x182c48: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c4c: 0x244a11d1  addiu       $t2, $v0, 0x11D1
    ctx->pc = 0x182c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x182c50: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x182c54: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x182c58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x182c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c5c: 0x0  nop
    ctx->pc = 0x182c5cu;
    // NOP
label_182c60:
    // 0x182c60: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182c64: 0x50490001  beql        $v0, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x182C64u;
    {
        const bool branch_taken_0x182c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x182c64) {
            ctx->pc = 0x182C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182C64u;
            // 0x182c68: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182C6Cu;
            goto label_182c6c;
        }
    }
    ctx->pc = 0x182C6Cu;
label_182c6c:
    // 0x182c6c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182c70: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x182c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x182c74: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x182c78: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x182c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x182c7c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x182c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182c80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x182c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x182c84: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x182c84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x182c88: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x182c88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x182c8c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x182C8Cu;
    {
        const bool branch_taken_0x182c8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C8Cu;
        // 0x182c90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c8c) {
            ctx->pc = 0x182C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182c60;
        }
    }
    ctx->pc = 0x182C94u;
label_182c94:
    // 0x182c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x182c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c98: 0xc0c5c8e  jal         func_317238
    ctx->pc = 0x182C98u;
    SET_GPR_U32(ctx, 31, 0x182CA0u);
    ctx->pc = 0x182C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C98u;
    // 0x182c9c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317238u, 0x182C98u, 0x182CA0u)) {
        return;
    }
    ctx->pc = 0x182CA0u;
label_182ca0:
    // 0x182ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182CA0u;
    {
        const bool branch_taken_0x182ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CA0u;
        // 0x182ca4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ca0) {
            ctx->pc = 0x182CB0u;
            goto label_182cb0;
        }
    }
    ctx->pc = 0x182CA8u;
    // 0x182ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182CA8u;
    {
        const bool branch_taken_0x182ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CA8u;
        // 0x182cac: 0x24477e80  addiu       $a3, $v0, 0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ca8) {
            ctx->pc = 0x182CB8u;
            goto label_182cb8;
        }
    }
    ctx->pc = 0x182CB0u;
label_182cb0:
    // 0x182cb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x182cb4: 0x24477e88  addiu       $a3, $v0, 0x7E88
    ctx->pc = 0x182cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32392));
label_182cb8:
    // 0x182cb8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x182cbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x182cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cc0: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
    // 0x182cc4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x182CC4u;
    SET_GPR_U32(ctx, 31, 0x182CCCu);
    ctx->pc = 0x182CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CC4u;
    // 0x182cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x182CC4u, 0x182CCCu)) {
        return;
    }
    ctx->pc = 0x182CCCu;
label_182ccc:
    // 0x182ccc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x182CCCu;
    {
        const bool branch_taken_0x182ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CCCu;
        // 0x182cd0: 0x8ea23bc0  lw          $v0, 0x3BC0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ccc) {
            ctx->pc = 0x182D3Cu;
            goto label_182d3c;
        }
    }
    ctx->pc = 0x182CD4u;
label_182cd4:
    // 0x182cd4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x182cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x182cd8: 0x24a57e98  addiu       $a1, $a1, 0x7E98
    ctx->pc = 0x182cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32408));
    // 0x182cdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x182cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ce0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x182ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ce4: 0xac403bc0  sw          $zero, 0x3BC0($v0)
    ctx->pc = 0x182ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15296), GPR_U32(ctx, 0));
    // 0x182ce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cec: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x182CECu;
    SET_GPR_U32(ctx, 31, 0x182CF4u);
    ctx->pc = 0x182CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CECu;
    // 0x182cf0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x182CECu, 0x182CF4u)) {
        return;
    }
    ctx->pc = 0x182CF4u;
label_182cf4:
    // 0x182cf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182CF4u;
    {
        const bool branch_taken_0x182cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CF4u;
        // 0x182cf8: 0x8ea23bc0  lw          $v0, 0x3BC0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cf4) {
            ctx->pc = 0x182D3Cu;
            goto label_182d3c;
        }
    }
    ctx->pc = 0x182CFCu;
label_182cfc:
    // 0x182cfc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x182cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x182d00: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x182d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x182d04: 0x24437ea0  addiu       $v1, $v0, 0x7EA0
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32416));
    // 0x182d08: 0x8c447ea0  lw          $a0, 0x7EA0($v0)
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x697EA0u));
    // 0x182d0c: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x182d0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x697EA4u));
    // 0x182d10: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x182d14: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x182d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x182d18: 0x24a57e98  addiu       $a1, $a1, 0x7E98
    ctx->pc = 0x182d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32408));
    // 0x182d1c: 0xa7a60104  sh          $a2, 0x104($sp)
    ctx->pc = 0x182d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 6));
    // 0x182d20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x182d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d24: 0xae003bc0  sw          $zero, 0x3BC0($s0)
    ctx->pc = 0x182d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C3BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3BC0u, _value); } while (0);
    // 0x182d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d2c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x182D2Cu;
    SET_GPR_U32(ctx, 31, 0x182D34u);
    ctx->pc = 0x182D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D2Cu;
    // 0x182d30: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x182D2Cu, 0x182D34u)) {
        return;
    }
    ctx->pc = 0x182D34u;
label_182d34:
    // 0x182d34: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x182d34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d38: 0x8ea23bc0  lw          $v0, 0x3BC0($s5)
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15296)));
label_182d3c:
    // 0x182d3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x182D3Cu;
    {
        const bool branch_taken_0x182d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D3Cu;
        // 0x182d40: 0x26b13bc0  addiu       $s1, $s5, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 15296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d3c) {
            ctx->pc = 0x182DD4u;
            goto label_182dd4;
        }
    }
    ctx->pc = 0x182D44u;
    // 0x182d44: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x182d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x182d48: 0xc0c99ac  jal         func_3266B0
    ctx->pc = 0x182D48u;
    SET_GPR_U32(ctx, 31, 0x182D50u);
    ctx->pc = 0x182D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D48u;
    // 0x182d4c: 0x34848010  ori         $a0, $a0, 0x8010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32784);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3266B0u, 0x182D48u, 0x182D50u)) {
        return;
    }
    ctx->pc = 0x182D50u;
label_182d50:
    // 0x182d50: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x182d54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x182d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x182d58: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x182d5c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x182d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182d60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182d64: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x182D64u;
    SET_GPR_U32(ctx, 31, 0x182D6Cu);
    ctx->pc = 0x182D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D64u;
    // 0x182d68: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296E88u, 0x182D64u, 0x182D6Cu)) {
        return;
    }
    ctx->pc = 0x182D6Cu;
label_182d6c:
    // 0x182d6c: 0xc0a5ab6  jal         func_296AD8
    ctx->pc = 0x182D6Cu;
    SET_GPR_U32(ctx, 31, 0x182D74u);
    ctx->pc = 0x182D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D6Cu;
    // 0x182d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296AD8u, 0x182D6Cu, 0x182D74u)) {
        return;
    }
    ctx->pc = 0x182D74u;
label_182d74:
    // 0x182d74: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x182d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x182d78: 0xc0a587e  jal         func_2961F8
    ctx->pc = 0x182D78u;
    SET_GPR_U32(ctx, 31, 0x182D80u);
    ctx->pc = 0x182D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D78u;
    // 0x182d7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2961F8u, 0x182D78u, 0x182D80u)) {
        return;
    }
    ctx->pc = 0x182D80u;
label_182d80:
    // 0x182d80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182D80u;
    {
        const bool branch_taken_0x182d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d80) {
            ctx->pc = 0x182D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182D80u;
            // 0x182d84: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182D98u;
            goto label_182d98;
        }
    }
    ctx->pc = 0x182D88u;
    // 0x182d88: 0xc0c99e6  jal         func_326798
    ctx->pc = 0x182D88u;
    SET_GPR_U32(ctx, 31, 0x182D90u);
    ctx->pc = 0x182D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D88u;
    // 0x182d8c: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x182D88u, 0x182D90u)) {
        return;
    }
    ctx->pc = 0x182D90u;
label_182d90:
    // 0x182d90: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x182D90u;
    {
        const bool branch_taken_0x182d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D90u;
        // 0x182d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d90) {
            ctx->pc = 0x182E54u;
            goto label_182e54;
        }
    }
    ctx->pc = 0x182D98u;
label_182d98:
    // 0x182d98: 0xa3a00140  sb          $zero, 0x140($sp)
    ctx->pc = 0x182d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x182d9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x182d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x182da0: 0xa3a00141  sb          $zero, 0x141($sp)
    ctx->pc = 0x182da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 321), (uint8_t)GPR_U32(ctx, 0));
    // 0x182da4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x182DA4u;
    {
        const bool branch_taken_0x182da4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DA4u;
        // 0x182da8: 0xa3a00142  sb          $zero, 0x142($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182da4) {
            ctx->pc = 0x182DC0u;
            goto label_182dc0;
        }
    }
    ctx->pc = 0x182DACu;
    // 0x182dac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x182dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x182db0: 0x141d78  dsll        $v1, $s4, 21
    ctx->pc = 0x182db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 21);
    // 0x182db4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x182db4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x182db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182dbc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x182dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_182dc0:
    // 0x182dc0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x182dc4: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x182DC4u;
    SET_GPR_U32(ctx, 31, 0x182DCCu);
    ctx->pc = 0x182DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182DC4u;
    // 0x182dc8: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296EB8u, 0x182DC4u, 0x182DCCu)) {
        return;
    }
    ctx->pc = 0x182DCCu;
label_182dcc:
    // 0x182dcc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x182DCCu;
    {
        const bool branch_taken_0x182dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DCCu;
        // 0x182dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dcc) {
            ctx->pc = 0x182E54u;
            goto label_182e54;
        }
    }
    ctx->pc = 0x182DD4u;
label_182dd4:
    // 0x182dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dd8: 0xc0c95f6  jal         func_3257D8
    ctx->pc = 0x182DD8u;
    SET_GPR_U32(ctx, 31, 0x182DE0u);
    ctx->pc = 0x182DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182DD8u;
    // 0x182ddc: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3257D8u, 0x182DD8u, 0x182DE0u)) {
        return;
    }
    ctx->pc = 0x182DE0u;
label_182de0:
    // 0x182de0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x182de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182de4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x182de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x182de8: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x182de8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x182dec: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x182decu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x182df0: 0x27b20190  addiu       $s2, $sp, 0x190
    ctx->pc = 0x182df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x182df4: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x182df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x182df8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182dfc: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x182dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_182e00:
    // 0x182e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182e04: 0xc0c9824  jal         func_326090
    ctx->pc = 0x182E04u;
    SET_GPR_U32(ctx, 31, 0x182E0Cu);
    ctx->pc = 0x182E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E04u;
    // 0x182e08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326090u, 0x182E04u, 0x182E0Cu)) {
        return;
    }
    ctx->pc = 0x182E0Cu;
label_182e0c:
    // 0x182e0c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x182e10: 0x5071fffb  beql        $v1, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x182E10u;
    {
        const bool branch_taken_0x182e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x182e10) {
            ctx->pc = 0x182E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182E10u;
            // 0x182e14: 0x8e640030  lw          $a0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182e00;
        }
    }
    ctx->pc = 0x182E18u;
    // 0x182e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e1c: 0xc0c9912  jal         func_326448
    ctx->pc = 0x182E1Cu;
    SET_GPR_U32(ctx, 31, 0x182E24u);
    ctx->pc = 0x182E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E1Cu;
    // 0x182e20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326448u, 0x182E1Cu, 0x182E24u)) {
        return;
    }
    ctx->pc = 0x182E24u;
label_182e24:
    // 0x182e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182E24u;
    {
        const bool branch_taken_0x182e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E24u;
        // 0x182e28: 0x26a23bc0  addiu       $v0, $s5, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 15296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e24) {
            ctx->pc = 0x182E38u;
            goto label_182e38;
        }
    }
    ctx->pc = 0x182E2Cu;
    // 0x182e2c: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x182e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x182e30: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x182e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x182e34: 0x26a23bc0  addiu       $v0, $s5, 0x3BC0
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 15296));
label_182e38:
    // 0x182e38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x182e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e3c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x182e40: 0xc0c96f8  jal         func_325BE0
    ctx->pc = 0x182E40u;
    SET_GPR_U32(ctx, 31, 0x182E48u);
    ctx->pc = 0x182E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E40u;
    // 0x182e44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325BE0u, 0x182E40u, 0x182E48u)) {
        return;
    }
    ctx->pc = 0x182E48u;
label_182e48:
    // 0x182e48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x182e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x182e4c: 0xac608a18  sw          $zero, -0x75E8($v1)
    ctx->pc = 0x182e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338A18u, _value); } while (0);
    // 0x182e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182e54:
    // 0x182e54: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x182e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x182e58: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x182e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x182e5c: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x182e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x182e60: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x182e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x182e64: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x182e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x182e68: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x182e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x182e6c: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x182e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x182e70: 0x3e00008  jr          $ra
    ctx->pc = 0x182E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E70u;
        // 0x182e74: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182E78u;
    // 0x182e78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x182e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x182e7c: 0x0  nop
    ctx->pc = 0x182e7cu;
    // NOP
    ctx->pc = 0x182e80u;
}
