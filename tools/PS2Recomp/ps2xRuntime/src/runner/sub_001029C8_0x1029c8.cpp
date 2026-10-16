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

// Function: sub_001029C8
// Address: 0x1029c8 - 0x102b50
void sub_001029C8_0x1029c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001029C8_0x1029c8");
#endif

    switch (ctx->pc) {
        case 0x102a08u: goto label_102a08;
        case 0x102a18u: goto label_102a18;
        case 0x102a50u: goto label_102a50;
        case 0x102a5cu: goto label_102a5c;
        case 0x102a6cu: goto label_102a6c;
        case 0x102a80u: goto label_102a80;
        case 0x102ab0u: goto label_102ab0;
        case 0x102ac0u: goto label_102ac0;
        case 0x102ae8u: goto label_102ae8;
        case 0x102af8u: goto label_102af8;
        case 0x102b10u: goto label_102b10;
        case 0x102b18u: goto label_102b18;
        default: break;
    }

    ctx->pc = 0x1029c8u;

    // 0x1029c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1029c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1029cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1029ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1029d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1029d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1029d4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1029d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1029d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1029d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029dc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1029dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1029e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1029e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1029e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1029e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1029e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1029e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1029ec: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x1029f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1029F0u;
    {
        const bool branch_taken_0x1029f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029F0u;
        // 0x1029f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029f0) {
            ctx->pc = 0x102A28u;
            goto label_102a28;
        }
    }
    ctx->pc = 0x1029F8u;
    // 0x1029f8: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1029f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1029fc: 0x26500274  addiu       $s0, $s2, 0x274
    ctx->pc = 0x1029fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 628));
    // 0x102a00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x102a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102a04: 0x0  nop
    ctx->pc = 0x102a04u;
    // NOP
label_102a08:
    // 0x102a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102a0c: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x102a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x102a10: 0xc059092  jal         func_164248
    ctx->pc = 0x102A10u;
    SET_GPR_U32(ctx, 31, 0x102A18u);
    ctx->pc = 0x102A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A10u;
    // 0x102a14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x102A10u, 0x102A18u)) {
        return;
    }
    ctx->pc = 0x102A18u;
label_102a18:
    // 0x102a18: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x102a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x102a1c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x102a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102a20: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x102A20u;
    {
        const bool branch_taken_0x102a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102a20) {
            ctx->pc = 0x102A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A20u;
            // 0x102a24: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a08;
        }
    }
    ctx->pc = 0x102A28u;
label_102a28:
    // 0x102a28: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x102a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x102a2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x102a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a30: 0xae40028c  sw          $zero, 0x28C($s2)
    ctx->pc = 0x102a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 0));
    // 0x102a34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a38: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x102A38u;
    {
        const bool branch_taken_0x102a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A38u;
        // 0x102a3c: 0xae400290  sw          $zero, 0x290($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a38) {
            ctx->pc = 0x102AA0u;
            goto label_102aa0;
        }
    }
    ctx->pc = 0x102A40u;
    // 0x102a40: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x102a44: 0x2650021c  addiu       $s0, $s2, 0x21C
    ctx->pc = 0x102a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
    // 0x102a48: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x102a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a4c: 0x0  nop
    ctx->pc = 0x102a4cu;
    // NOP
label_102a50:
    // 0x102a50: 0x8e848668  lw          $a0, -0x7998($s4)
    ctx->pc = 0x102a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936168)));
    // 0x102a54: 0xc0595fa  jal         func_1657E8
    ctx->pc = 0x102A54u;
    SET_GPR_U32(ctx, 31, 0x102A5Cu);
    ctx->pc = 0x102A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A54u;
    // 0x102a58: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657E8u, 0x102A54u, 0x102A5Cu)) {
        return;
    }
    ctx->pc = 0x102A5Cu;
label_102a5c:
    // 0x102a5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102A5Cu;
    {
        const bool branch_taken_0x102a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0x8e848668  lw          $a0, -0x7998($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a5c) {
            ctx->pc = 0x102A74u;
            goto label_102a74;
        }
    }
    ctx->pc = 0x102A64u;
    // 0x102a64: 0xc05960a  jal         func_165828
    ctx->pc = 0x102A64u;
    SET_GPR_U32(ctx, 31, 0x102A6Cu);
    ctx->pc = 0x102A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A64u;
    // 0x102a68: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165828u, 0x102A64u, 0x102A6Cu)) {
        return;
    }
    ctx->pc = 0x102A6Cu;
label_102a6c:
    // 0x102a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102A6Cu;
    {
        const bool branch_taken_0x102a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A6Cu;
        // 0x102a70: 0x8e848668  lw          $a0, -0x7998($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a6c) {
            ctx->pc = 0x102A8Cu;
            goto label_102a8c;
        }
    }
    ctx->pc = 0x102A74u;
label_102a74:
    // 0x102a74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x102a78: 0xc059092  jal         func_164248
    ctx->pc = 0x102A78u;
    SET_GPR_U32(ctx, 31, 0x102A80u);
    ctx->pc = 0x102A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A78u;
    // 0x102a7c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x102A78u, 0x102A80u)) {
        return;
    }
    ctx->pc = 0x102A80u;
label_102a80:
    // 0x102a80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102a84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x102a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x102a88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_102a8c:
    // 0x102a8c: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x102a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x102a90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x102a90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x102a94: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x102a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102a98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x102A98u;
    {
        const bool branch_taken_0x102a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A98u;
        // 0x102a9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a98) {
            ctx->pc = 0x102A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a50;
        }
    }
    ctx->pc = 0x102AA0u;
label_102aa0:
    // 0x102aa0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x102AA0u;
    {
        const bool branch_taken_0x102aa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AA0u;
        // 0x102aa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102aa0) {
            ctx->pc = 0x102ACCu;
            goto label_102acc;
        }
    }
    ctx->pc = 0x102AA8u;
    // 0x102aa8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x102aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x102aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102ab0:
    // 0x102ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102ab8: 0xc040e20  jal         func_103880
    ctx->pc = 0x102AB8u;
    SET_GPR_U32(ctx, 31, 0x102AC0u);
    ctx->pc = 0x102ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AB8u;
    // 0x102abc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x102AB8u, 0x102AC0u)) {
        return;
    }
    ctx->pc = 0x102AC0u;
label_102ac0:
    // 0x102ac0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x102ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x102ac4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102AC4u;
    {
        const bool branch_taken_0x102ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102ac4) {
            ctx->pc = 0x102AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102AC4u;
            // 0x102ac8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ab0;
        }
    }
    ctx->pc = 0x102ACCu;
label_102acc:
    // 0x102acc: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x102ad0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102AD0u;
    {
        const bool branch_taken_0x102ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AD0u;
        // 0x102ad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ad0) {
            ctx->pc = 0x102B1Cu;
            goto label_102b1c;
        }
    }
    ctx->pc = 0x102AD8u;
    // 0x102ad8: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x102ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x102adc: 0x2650021c  addiu       $s0, $s2, 0x21C
    ctx->pc = 0x102adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
    // 0x102ae0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x102ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102ae4: 0x0  nop
    ctx->pc = 0x102ae4u;
    // NOP
label_102ae8:
    // 0x102ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102aec: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x102af0: 0xc0596be  jal         func_165AF8
    ctx->pc = 0x102AF0u;
    SET_GPR_U32(ctx, 31, 0x102AF8u);
    ctx->pc = 0x102AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AF0u;
    // 0x102af4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x102AF0u, 0x102AF8u)) {
        return;
    }
    ctx->pc = 0x102AF8u;
label_102af8:
    // 0x102af8: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x102af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x102afc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x102afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102b00: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x102B00u;
    {
        const bool branch_taken_0x102b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102b00) {
            ctx->pc = 0x102B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B00u;
            // 0x102b04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ae8;
        }
    }
    ctx->pc = 0x102B08u;
    // 0x102b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102B08u;
    {
        const bool branch_taken_0x102b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B08u;
        // 0x102b0c: 0x8e42025c  lw          $v0, 0x25C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b08) {
            ctx->pc = 0x102B1Cu;
            goto label_102b1c;
        }
    }
    ctx->pc = 0x102B10u;
label_102b10:
    // 0x102b10: 0xc040e20  jal         func_103880
    ctx->pc = 0x102B10u;
    SET_GPR_U32(ctx, 31, 0x102B18u);
    ctx->pc = 0x102B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B10u;
    // 0x102b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x102B10u, 0x102B18u)) {
        return;
    }
    ctx->pc = 0x102B18u;
label_102b18:
    // 0x102b18: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_102b1c:
    // 0x102b1c: 0x0  nop
    ctx->pc = 0x102b1cu;
    // NOP
    // 0x102b20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102B20u;
    {
        const bool branch_taken_0x102b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102b20) {
            ctx->pc = 0x102B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B20u;
            // 0x102b24: 0x8e45021c  lw          $a1, 0x21C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102b10;
        }
    }
    ctx->pc = 0x102B28u;
    // 0x102b28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x102b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x102b2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x102b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x102b30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x102b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102b34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x102b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102b38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x102b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x102b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102b40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x102b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102b44: 0x3e00008  jr          $ra
    ctx->pc = 0x102B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B44u;
        // 0x102b48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B4Cu;
    // 0x102b4c: 0x0  nop
    ctx->pc = 0x102b4cu;
    // NOP
    ctx->pc = 0x102b50u;
}
