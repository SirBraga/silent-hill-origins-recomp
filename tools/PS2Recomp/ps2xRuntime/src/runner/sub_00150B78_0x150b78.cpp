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

// Function: sub_00150B78
// Address: 0x150b78 - 0x150d68
void sub_00150B78_0x150b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B78_0x150b78");
#endif

    switch (ctx->pc) {
        case 0x150bb8u: goto label_150bb8;
        case 0x150bc8u: goto label_150bc8;
        case 0x150bd8u: goto label_150bd8;
        case 0x150be8u: goto label_150be8;
        case 0x150c38u: goto label_150c38;
        case 0x150c58u: goto label_150c58;
        case 0x150ca8u: goto label_150ca8;
        case 0x150cc8u: goto label_150cc8;
        case 0x150cd8u: goto label_150cd8;
        case 0x150cf0u: goto label_150cf0;
        case 0x150d00u: goto label_150d00;
        case 0x150d20u: goto label_150d20;
        case 0x150d44u: goto label_150d44;
        default: break;
    }

    ctx->pc = 0x150b78u;

    // 0x150b78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150b7c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x150b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x150b80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x150b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x150b84: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x150b88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x150b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x150b8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x150b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x150b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x150b98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x150b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x150b9c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x150b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x150ba0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x150ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x150ba4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x150ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x150ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150bac: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x150bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x150bb0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x150BB0u;
    SET_GPR_U32(ctx, 31, 0x150BB8u);
    ctx->pc = 0x150BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BB0u;
    // 0x150bb4: 0x2651288c  addiu       $s1, $s2, 0x288C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 10380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x150BB0u, 0x150BB8u)) {
        return;
    }
    ctx->pc = 0x150BB8u;
label_150bb8:
    // 0x150bb8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x150bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bc0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x150BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BC0u;
    // 0x150bc4: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x150BC0u, 0x150BC8u)) {
        return;
    }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x150bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bd0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x150BD0u;
    SET_GPR_U32(ctx, 31, 0x150BD8u);
    ctx->pc = 0x150BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BD0u;
    // 0x150bd4: 0x24a5f8e8  addiu       $a1, $a1, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x150BD0u, 0x150BD8u)) {
        return;
    }
    ctx->pc = 0x150BD8u;
label_150bd8:
    // 0x150bd8: 0x8e44288c  lw          $a0, 0x288C($s2)
    ctx->pc = 0x150bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10380)));
    // 0x150bdc: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x150BDCu;
    {
        const bool branch_taken_0x150bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bdc) {
            ctx->pc = 0x150BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150BDCu;
            // 0x150be0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150BE4u;
    // 0x150be4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_150be8:
    // 0x150be8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BE8u;
    {
        const bool branch_taken_0x150be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150be8) {
            ctx->pc = 0x150BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150BE8u;
            // 0x150bec: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150BFCu;
            goto label_150bfc;
        }
    }
    ctx->pc = 0x150BF0u;
    // 0x150bf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150bf4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x150bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x150bf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_150bfc:
    // 0x150bfc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BFCu;
    {
        const bool branch_taken_0x150bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bfc) {
            ctx->pc = 0x150C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150BFCu;
            // 0x150c00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C10u;
            goto label_150c10;
        }
    }
    ctx->pc = 0x150C04u;
    // 0x150c04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x150c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150c08: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x150c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x150c0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_150c10:
    // 0x150c10: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C10u;
    {
        const bool branch_taken_0x150c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x150c10) {
            ctx->pc = 0x150C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C10u;
            // 0x150c14: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C24u;
            goto label_150c24;
        }
    }
    ctx->pc = 0x150C18u;
    // 0x150c18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150c1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x150c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x150c20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_150c24:
    // 0x150c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x150c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x150c28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150C28u;
    {
        const bool branch_taken_0x150c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C28u;
        // 0x150c2c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c28) {
            ctx->pc = 0x150C38u;
            goto label_150c38;
        }
    }
    ctx->pc = 0x150C30u;
    // 0x150c30: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x150C30u;
    SET_GPR_U32(ctx, 31, 0x150C38u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x150C30u, 0x150C38u)) {
        return;
    }
    ctx->pc = 0x150C38u;
label_150c38:
    // 0x150c38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150c3c: 0x5480ffea  bnel        $a0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x150C3Cu;
    {
        const bool branch_taken_0x150c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x150c3c) {
            ctx->pc = 0x150C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C3Cu;
            // 0x150c40: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150be8;
        }
    }
    ctx->pc = 0x150C44u;
    // 0x150c44: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_150c48:
    // 0x150c48: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x150C48u;
    {
        const bool branch_taken_0x150c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C48u;
        // 0x150c4c: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c48) {
            ctx->pc = 0x150CB4u;
            goto label_150cb4;
        }
    }
    ctx->pc = 0x150C50u;
    // 0x150c50: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x150c54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_150c58:
    // 0x150c58: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C58u;
            // 0x150c5c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C6Cu;
            goto label_150c6c;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150c64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x150c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x150c68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_150c6c:
    // 0x150c6c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C6Cu;
    {
        const bool branch_taken_0x150c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c6c) {
            ctx->pc = 0x150C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C6Cu;
            // 0x150c70: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C80u;
            goto label_150c80;
        }
    }
    ctx->pc = 0x150C74u;
    // 0x150c74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150c78: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x150c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x150c7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x150c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_150c80:
    // 0x150c80: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C80u;
    {
        const bool branch_taken_0x150c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x150c80) {
            ctx->pc = 0x150C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C80u;
            // 0x150c84: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C94u;
            goto label_150c94;
        }
    }
    ctx->pc = 0x150C88u;
    // 0x150c88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150c8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x150c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x150c90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_150c94:
    // 0x150c94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x150c98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150C98u;
    {
        const bool branch_taken_0x150c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C98u;
        // 0x150c9c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c98) {
            ctx->pc = 0x150CA8u;
            goto label_150ca8;
        }
    }
    ctx->pc = 0x150CA0u;
    // 0x150ca0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x150CA0u;
    SET_GPR_U32(ctx, 31, 0x150CA8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x150CA0u, 0x150CA8u)) {
        return;
    }
    ctx->pc = 0x150CA8u;
label_150ca8:
    // 0x150ca8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150cac: 0x5480ffea  bnel        $a0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x150CACu;
    {
        const bool branch_taken_0x150cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x150cac) {
            ctx->pc = 0x150CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150CACu;
            // 0x150cb0: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150c58;
        }
    }
    ctx->pc = 0x150CB4u;
label_150cb4:
    // 0x150cb4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150cb8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x150cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x150cbc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150CBCu;
    {
        const bool branch_taken_0x150cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CBCu;
        // 0x150cc0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cbc) {
            ctx->pc = 0x150CE0u;
            goto label_150ce0;
        }
    }
    ctx->pc = 0x150CC4u;
    // 0x150cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150cc8:
    // 0x150cc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CC8u;
    {
        const bool branch_taken_0x150cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CC8u;
        // 0x150ccc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cc8) {
            ctx->pc = 0x150CD8u;
            goto label_150cd8;
        }
    }
    ctx->pc = 0x150CD0u;
    // 0x150cd0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x150CD0u;
    SET_GPR_U32(ctx, 31, 0x150CD8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x150CD0u, 0x150CD8u)) {
        return;
    }
    ctx->pc = 0x150CD8u;
label_150cd8:
    // 0x150cd8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150CD8u;
    {
        const bool branch_taken_0x150cd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x150CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CD8u;
        // 0x150cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cd8) {
            ctx->pc = 0x150CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150cc8;
        }
    }
    ctx->pc = 0x150CE0u;
label_150ce0:
    // 0x150ce0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150ce4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150CE4u;
    {
        const bool branch_taken_0x150ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CE4u;
        // 0x150ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ce4) {
            ctx->pc = 0x150D08u;
            goto label_150d08;
        }
    }
    ctx->pc = 0x150CECu;
    // 0x150cec: 0x0  nop
    ctx->pc = 0x150cecu;
    // NOP
label_150cf0:
    // 0x150cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CF0u;
    {
        const bool branch_taken_0x150cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CF0u;
        // 0x150cf4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cf0) {
            ctx->pc = 0x150D00u;
            goto label_150d00;
        }
    }
    ctx->pc = 0x150CF8u;
    // 0x150cf8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x150CF8u;
    SET_GPR_U32(ctx, 31, 0x150D00u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x150CF8u, 0x150D00u)) {
        return;
    }
    ctx->pc = 0x150D00u;
label_150d00:
    // 0x150d00: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150D00u;
    {
        const bool branch_taken_0x150d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D00u;
        // 0x150d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d00) {
            ctx->pc = 0x150CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150cf0;
        }
    }
    ctx->pc = 0x150D08u;
label_150d08:
    // 0x150d08: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x150D08u;
    {
        const bool branch_taken_0x150d08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D08u;
        // 0x150d0c: 0x26422888  addiu       $v0, $s2, 0x2888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d08) {
            ctx->pc = 0x150D38u;
            goto label_150d38;
        }
    }
    ctx->pc = 0x150D10u;
    // 0x150d10: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150D10u;
    {
        const bool branch_taken_0x150d10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x150D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D10u;
        // 0x150d14: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d10) {
            ctx->pc = 0x150D38u;
            goto label_150d38;
        }
    }
    ctx->pc = 0x150D18u;
    // 0x150d18: 0x2442ff28  addiu       $v0, $v0, -0xD8
    ctx->pc = 0x150d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x150d1c: 0x0  nop
    ctx->pc = 0x150d1cu;
    // NOP
label_150d20:
    // 0x150d20: 0x0  nop
    ctx->pc = 0x150d20u;
    // NOP
    // 0x150d24: 0x0  nop
    ctx->pc = 0x150d24u;
    // NOP
    // 0x150d28: 0x0  nop
    ctx->pc = 0x150d28u;
    // NOP
    // 0x150d2c: 0x0  nop
    ctx->pc = 0x150d2cu;
    // NOP
    // 0x150d30: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150D30u;
    {
        const bool branch_taken_0x150d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D30u;
        // 0x150d34: 0x2442ff28  addiu       $v0, $v0, -0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d30) {
            ctx->pc = 0x150D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d20;
        }
    }
    ctx->pc = 0x150D38u;
label_150d38:
    // 0x150d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d3c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x150D3Cu;
    SET_GPR_U32(ctx, 31, 0x150D44u);
    ctx->pc = 0x150D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D3Cu;
    // 0x150d40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x150D3Cu, 0x150D44u)) {
        return;
    }
    ctx->pc = 0x150D44u;
label_150d44:
    // 0x150d44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x150d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150d48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x150d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150d4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150d50: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x150d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150d54: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x150d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x150D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D5Cu;
        // 0x150d60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150D64u;
    // 0x150d64: 0x0  nop
    ctx->pc = 0x150d64u;
    // NOP
    ctx->pc = 0x150d68u;
}
