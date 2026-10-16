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

// Function: sub_001ADDB0
// Address: 0x1addb0 - 0x1adfc8
void sub_001ADDB0_0x1addb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADDB0_0x1addb0");
#endif

    switch (ctx->pc) {
        case 0x1ade00u: goto label_1ade00;
        case 0x1ade14u: goto label_1ade14;
        case 0x1ade2cu: goto label_1ade2c;
        case 0x1ade34u: goto label_1ade34;
        case 0x1ade8cu: goto label_1ade8c;
        case 0x1adec4u: goto label_1adec4;
        case 0x1adf78u: goto label_1adf78;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf9cu: goto label_1adf9c;
        default: break;
    }

    ctx->pc = 0x1addb0u;

    // 0x1addb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1addb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1addb4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1addb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1addb8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1addb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1addbc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1addbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1addc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1addc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addc4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1addc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1addc8: 0x24428610  addiu       $v0, $v0, -0x79F0
    ctx->pc = 0x1addc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936080));
    // 0x1addcc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1addccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1addd0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1addd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1addd4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1addd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1addd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1addd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1adddc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1adddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1adde0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adde4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1adde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1adde8: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1adde8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x6F8614u));
    // 0x1addec: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1ADDECu;
    {
        const bool branch_taken_0x1addec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDECu;
        // 0x1addf0: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addec) {
            ctx->pc = 0x1ADE94u;
            goto label_1ade94;
        }
    }
    ctx->pc = 0x1ADDF4u;
    // 0x1addf4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1addf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addf8: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x1addfc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ade00:
    // 0x1ade00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ade00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ade04: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1ade04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade0c: 0xc06b4ca  jal         func_1AD328
    ctx->pc = 0x1ADE0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE14u);
    ctx->pc = 0x1ADE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE0Cu;
    // 0x1ade10: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD328u, 0x1ADE0Cu, 0x1ADE14u)) {
        return;
    }
    ctx->pc = 0x1ADE14u;
label_1ade14:
    // 0x1ade14: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ADE14u;
    {
        const bool branch_taken_0x1ade14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ade14) {
            ctx->pc = 0x1ADE8Cu;
            goto label_1ade8c;
        }
    }
    ctx->pc = 0x1ADE1Cu;
    // 0x1ade1c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1ADE1Cu;
    {
        const bool branch_taken_0x1ade1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE1Cu;
        // 0x1ade20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade1c) {
            ctx->pc = 0x1ADE8Cu;
            goto label_1ade8c;
        }
    }
    ctx->pc = 0x1ADE24u;
    // 0x1ade24: 0xc06b89a  jal         func_1AE268
    ctx->pc = 0x1ADE24u;
    SET_GPR_U32(ctx, 31, 0x1ADE2Cu);
    ctx->pc = 0x1ADE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE24u;
    // 0x1ade28: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE268u, 0x1ADE24u, 0x1ADE2Cu)) {
        return;
    }
    ctx->pc = 0x1ADE2Cu;
label_1ade2c:
    // 0x1ade2c: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1ADE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE34u);
    ctx->pc = 0x1ADE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE2Cu;
    // 0x1ade30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE2A0u, 0x1ADE2Cu, 0x1ADE34u)) {
        return;
    }
    ctx->pc = 0x1ADE34u;
label_1ade34:
    // 0x1ade34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ade38: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADE38u;
    {
        const bool branch_taken_0x1ade38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE38u;
        // 0x1ade3c: 0x26648610  addiu       $a0, $s3, -0x79F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade38) {
            ctx->pc = 0x1ADE4Cu;
            goto label_1ade4c;
        }
    }
    ctx->pc = 0x1ADE40u;
    // 0x1ade40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ade40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADE44u;
    {
        const bool branch_taken_0x1ade44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE44u;
        // 0x1ade48: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade44) {
            ctx->pc = 0x1ADE54u;
            goto label_1ade54;
        }
    }
    ctx->pc = 0x1ADE4Cu;
label_1ade4c:
    // 0x1ade4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ade50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ade54:
    // 0x1ade54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADE58u;
    {
        const bool branch_taken_0x1ade58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE58u;
        // 0x1ade5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade58) {
            ctx->pc = 0x1ADE68u;
            goto label_1ade68;
        }
    }
    ctx->pc = 0x1ADE60u;
    // 0x1ade60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADE60u;
    {
        const bool branch_taken_0x1ade60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE60u;
        // 0x1ade64: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade60) {
            ctx->pc = 0x1ADE6Cu;
            goto label_1ade6c;
        }
    }
    ctx->pc = 0x1ADE68u;
label_1ade68:
    // 0x1ade68: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ade68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ade6c:
    // 0x1ade6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ade6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ade70: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1ade74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ade78: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADE78u;
    {
        const bool branch_taken_0x1ade78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE78u;
        // 0x1ade7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade78) {
            ctx->pc = 0x1ADE84u;
            goto label_1ade84;
        }
    }
    ctx->pc = 0x1ADE80u;
    // 0x1ade80: 0xae8090d8  sw          $zero, -0x6F28($s4)
    ctx->pc = 0x1ade80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294938840), GPR_U32(ctx, 0));
label_1ade84:
    // 0x1ade84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1ADE84u;
    SET_GPR_U32(ctx, 31, 0x1ADE8Cu);
    ctx->pc = 0x1ADE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE84u;
    // 0x1ade88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1ADE84u, 0x1ADE8Cu)) {
        return;
    }
    ctx->pc = 0x1ADE8Cu;
label_1ade8c:
    // 0x1ade8c: 0x5620ffdc  bnel        $s1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1ADE8Cu;
    {
        const bool branch_taken_0x1ade8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ade8c) {
            ctx->pc = 0x1ADE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADE8Cu;
            // 0x1ade90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade00;
        }
    }
    ctx->pc = 0x1ADE94u;
label_1ade94:
    // 0x1ade94: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1ade94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1ade98: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1ade98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1ade9c: 0x8c44bda8  lw          $a0, -0x4258($v0)
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBDA8u));
    // 0x1adea0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1adea4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1adea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1adea8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADEA8u;
    {
        const bool branch_taken_0x1adea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEA8u;
        // 0x1adeac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adea8) {
            ctx->pc = 0x1ADEC4u;
            goto label_1adec4;
        }
    }
    ctx->pc = 0x1ADEB0u;
    // 0x1adeb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1adeb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADEB4u;
    {
        const bool branch_taken_0x1adeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adeb4) {
            ctx->pc = 0x1ADEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADEB4u;
            // 0x1adeb8: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADEC8u;
            goto label_1adec8;
        }
    }
    ctx->pc = 0x1ADEBCu;
    // 0x1adebc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1ADEBCu;
    SET_GPR_U32(ctx, 31, 0x1ADEC4u);
    ctx->pc = 0x1ADEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEBCu;
    // 0x1adec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1ADEBCu, 0x1ADEC4u)) {
        return;
    }
    ctx->pc = 0x1ADEC4u;
label_1adec4:
    // 0x1adec4: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1adec4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1adec8:
    // 0x1adec8: 0x26638610  addiu       $v1, $s3, -0x79F0
    ctx->pc = 0x1adec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936080));
    // 0x1adecc: 0x8ec290dc  lw          $v0, -0x6F24($s6)
    ctx->pc = 0x1adeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938844)));
    // 0x1aded0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1aded0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1aded4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1aded8: 0xaed190dc  sw          $s1, -0x6F24($s6)
    ctx->pc = 0x1aded8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294938844), GPR_U32(ctx, 17));
    // 0x1adedc: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1ADEDCu;
    {
        const bool branch_taken_0x1adedc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEDCu;
        // 0x1adee0: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adedc) {
            ctx->pc = 0x1ADF90u;
            goto label_1adf90;
        }
    }
    ctx->pc = 0x1ADEE4u;
    // 0x1adee4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1adee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1adee8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADEE8u;
    {
        const bool branch_taken_0x1adee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEE8u;
        // 0x1adeec: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adee8) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADEF0u;
    // 0x1adef0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1adef4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1adef8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADEF8u;
    {
        const bool branch_taken_0x1adef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEF8u;
        // 0x1adefc: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adef8) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADF00u;
    // 0x1adf00: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1adf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1adf04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1adf08: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1adf08u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1adf0c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1adf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1adf10: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADF10u;
    {
        const bool branch_taken_0x1adf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf10) {
            ctx->pc = 0x1ADF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF10u;
            // 0x1adf14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF18u;
            goto label_1adf18;
        }
    }
    ctx->pc = 0x1ADF18u;
label_1adf18:
    // 0x1adf18: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1adf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1adf1c: 0x1810  mfhi        $v1
    ctx->pc = 0x1adf1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1adf20: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1adf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1adf24: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1adf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_1adf28:
    // 0x1adf28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADF28u;
    {
        const bool branch_taken_0x1adf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF28u;
        // 0x1adf2c: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf28) {
            ctx->pc = 0x1ADF68u;
            goto label_1adf68;
        }
    }
    ctx->pc = 0x1ADF30u;
    // 0x1adf30: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1adf34: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1adf34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1adf38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADF38u;
    {
        const bool branch_taken_0x1adf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF38u;
        // 0x1adf3c: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf38) {
            ctx->pc = 0x1ADF68u;
            goto label_1adf68;
        }
    }
    ctx->pc = 0x1ADF40u;
    // 0x1adf40: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1adf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1adf44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1adf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adf48: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1adf48u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1adf4c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1adf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1adf50: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADF50u;
    {
        const bool branch_taken_0x1adf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf50) {
            ctx->pc = 0x1ADF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF50u;
            // 0x1adf54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF58u;
            goto label_1adf58;
        }
    }
    ctx->pc = 0x1ADF58u;
label_1adf58:
    // 0x1adf58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1adf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1adf5c: 0x1810  mfhi        $v1
    ctx->pc = 0x1adf5cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1adf60: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1adf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1adf64: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1adf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_1adf68:
    // 0x1adf68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF68u;
    {
        const bool branch_taken_0x1adf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF68u;
        // 0x1adf6c: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf68) {
            ctx->pc = 0x1ADF7Cu;
            goto label_1adf7c;
        }
    }
    ctx->pc = 0x1ADF70u;
    // 0x1adf70: 0xc06b520  jal         func_1AD480
    ctx->pc = 0x1ADF70u;
    SET_GPR_U32(ctx, 31, 0x1ADF78u);
    ctx->pc = 0x1ADF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF70u;
    // 0x1adf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD480u, 0x1ADF70u, 0x1ADF78u)) {
        return;
    }
    ctx->pc = 0x1ADF78u;
label_1adf78:
    // 0x1adf78: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_1adf7c:
    // 0x1adf7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF7Cu;
    {
        const bool branch_taken_0x1adf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF7Cu;
        // 0x1adf80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf7c) {
            ctx->pc = 0x1ADF90u;
            goto label_1adf90;
        }
    }
    ctx->pc = 0x1ADF84u;
    // 0x1adf84: 0xc06b544  jal         func_1AD510
    ctx->pc = 0x1ADF84u;
    SET_GPR_U32(ctx, 31, 0x1ADF8Cu);
    ctx->pc = 0x1ADF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF84u;
    // 0x1adf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD510u, 0x1ADF84u, 0x1ADF8Cu)) {
        return;
    }
    ctx->pc = 0x1ADF8Cu;
label_1adf8c:
    // 0x1adf8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1adf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf90:
    // 0x1adf90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1adf90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1adf94: 0xc074624  jal         func_1D1890
    ctx->pc = 0x1ADF94u;
    SET_GPR_U32(ctx, 31, 0x1ADF9Cu);
    ctx->pc = 0x1ADF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF94u;
    // 0x1adf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1890u, 0x1ADF94u, 0x1ADF9Cu)) {
        return;
    }
    ctx->pc = 0x1ADF9Cu;
label_1adf9c:
    // 0x1adf9c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1adf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1adfa0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1adfa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adfa4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1adfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adfa8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1adfa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adfac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1adfacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adfb0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1adfb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adfb4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1adfb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adfb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adfbc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1adfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1adfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC0u;
        // 0x1adfc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADFC8u;
}
