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

// Function: sub_00189F30
// Address: 0x189f30 - 0x18a0a0
void sub_00189F30_0x189f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189F30_0x189f30");
#endif

    switch (ctx->pc) {
        case 0x189f6cu: goto label_189f6c;
        case 0x189f7cu: goto label_189f7c;
        case 0x189f8cu: goto label_189f8c;
        case 0x189fa8u: goto label_189fa8;
        case 0x189fe8u: goto label_189fe8;
        case 0x18a020u: goto label_18a020;
        case 0x18a060u: goto label_18a060;
        case 0x18a084u: goto label_18a084;
        default: break;
    }

    ctx->pc = 0x189f30u;

    // 0x189f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189f34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189f38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x189f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x189f3c: 0x24428e58  addiu       $v0, $v0, -0x71A8
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938200));
    // 0x189f40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x189f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x189f44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x189f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x189f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x189f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x189f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189f54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x189f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f5c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x189f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x189f60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x189f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x189f64: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x189F64u;
    SET_GPR_U32(ctx, 31, 0x189F6Cu);
    ctx->pc = 0x189F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F64u;
    // 0x189f68: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x189F64u, 0x189F6Cu)) {
        return;
    }
    ctx->pc = 0x189F6Cu;
label_189f6c:
    // 0x189f6c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x189f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f74: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x189F74u;
    SET_GPR_U32(ctx, 31, 0x189F7Cu);
    ctx->pc = 0x189F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F74u;
    // 0x189f78: 0x24a586d0  addiu       $a1, $a1, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x189F74u, 0x189F7Cu)) {
        return;
    }
    ctx->pc = 0x189F7Cu;
label_189f7c:
    // 0x189f7c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x189f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x189F84u;
    SET_GPR_U32(ctx, 31, 0x189F8Cu);
    ctx->pc = 0x189F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F84u;
    // 0x189f88: 0x24a586c8  addiu       $a1, $a1, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x189F84u, 0x189F8Cu)) {
        return;
    }
    ctx->pc = 0x189F8Cu;
label_189f8c:
    // 0x189f8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189f90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x189f94: 0x24428e78  addiu       $v0, $v0, -0x7188
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938232));
    // 0x189f98: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x189F98u;
    {
        const bool branch_taken_0x189f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F98u;
        // 0x189f9c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f98) {
            ctx->pc = 0x18A000u;
            goto label_18a000;
        }
    }
    ctx->pc = 0x189FA0u;
    // 0x189fa0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x189fa4: 0x0  nop
    ctx->pc = 0x189fa4u;
    // NOP
label_189fa8:
    // 0x189fa8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x189FA8u;
    {
        const bool branch_taken_0x189fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x189fa8) {
            ctx->pc = 0x189FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FA8u;
            // 0x189fac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FF8u;
            goto label_189ff8;
        }
    }
    ctx->pc = 0x189FB0u;
    // 0x189fb0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x189fb4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189FB4u;
    {
        const bool branch_taken_0x189fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FB4u;
        // 0x189fb8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fb4) {
            ctx->pc = 0x189FC4u;
            goto label_189fc4;
        }
    }
    ctx->pc = 0x189FBCu;
    // 0x189fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189FBCu;
    {
        const bool branch_taken_0x189fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FBCu;
        // 0x189fc0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fbc) {
            ctx->pc = 0x189FC8u;
            goto label_189fc8;
        }
    }
    ctx->pc = 0x189FC4u;
label_189fc4:
    // 0x189fc4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x189fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_189fc8:
    // 0x189fc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189fcc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189FCCu;
    {
        const bool branch_taken_0x189fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FCCu;
        // 0x189fd0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fcc) {
            ctx->pc = 0x189FDCu;
            goto label_189fdc;
        }
    }
    ctx->pc = 0x189FD4u;
    // 0x189fd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189FD4u;
    {
        const bool branch_taken_0x189fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FD4u;
        // 0x189fd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fd4) {
            ctx->pc = 0x189FE0u;
            goto label_189fe0;
        }
    }
    ctx->pc = 0x189FDCu;
label_189fdc:
    // 0x189fdc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x189fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_189fe0:
    // 0x189fe0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x189FE0u;
    SET_GPR_U32(ctx, 31, 0x189FE8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x189FE0u, 0x189FE8u)) {
        return;
    }
    ctx->pc = 0x189FE8u;
label_189fe8:
    // 0x189fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x189ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x189ff4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x189ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_189ff8:
    // 0x189ff8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x189FF8u;
    {
        const bool branch_taken_0x189ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189ff8) {
            ctx->pc = 0x189FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FF8u;
            // 0x189ffc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189fa8;
        }
    }
    ctx->pc = 0x18A000u;
label_18a000:
    // 0x18a000: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x18a000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x18a004: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18a008: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x18a00c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a010: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18A010u;
    {
        const bool branch_taken_0x18a010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A010u;
        // 0x18a014: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a010) {
            ctx->pc = 0x18A078u;
            goto label_18a078;
        }
    }
    ctx->pc = 0x18A018u;
    // 0x18a018: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18a018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a01c: 0x0  nop
    ctx->pc = 0x18a01cu;
    // NOP
label_18a020:
    // 0x18a020: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A020u;
    {
        const bool branch_taken_0x18a020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a020) {
            ctx->pc = 0x18A024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A020u;
            // 0x18a024: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x18A028u;
    // 0x18a028: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a02c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A02Cu;
    {
        const bool branch_taken_0x18a02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A02Cu;
        // 0x18a030: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a02c) {
            ctx->pc = 0x18A03Cu;
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A034u;
    // 0x18a034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A034u;
    {
        const bool branch_taken_0x18a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A034u;
        // 0x18a038: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a034) {
            ctx->pc = 0x18A040u;
            goto label_18a040;
        }
    }
    ctx->pc = 0x18A03Cu;
label_18a03c:
    // 0x18a03c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18a040:
    // 0x18a040: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a044: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A044u;
    {
        const bool branch_taken_0x18a044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A044u;
        // 0x18a048: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a044) {
            ctx->pc = 0x18A054u;
            goto label_18a054;
        }
    }
    ctx->pc = 0x18A04Cu;
    // 0x18a04c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A04Cu;
    {
        const bool branch_taken_0x18a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A04Cu;
        // 0x18a050: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a04c) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x18A054u;
label_18a054:
    // 0x18a054: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18a054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18a058:
    // 0x18a058: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A058u;
    SET_GPR_U32(ctx, 31, 0x18A060u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A058u, 0x18A060u)) {
        return;
    }
    ctx->pc = 0x18A060u;
label_18a060:
    // 0x18a060: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a068: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18a068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18a06c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a070:
    // 0x18a070: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18A070u;
    {
        const bool branch_taken_0x18a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a070) {
            ctx->pc = 0x18A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A070u;
            // 0x18a074: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a020;
        }
    }
    ctx->pc = 0x18A078u;
label_18a078:
    // 0x18a078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a07c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x18A07Cu;
    SET_GPR_U32(ctx, 31, 0x18A084u);
    ctx->pc = 0x18A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A07Cu;
    // 0x18a080: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x18A07Cu, 0x18A084u)) {
        return;
    }
    ctx->pc = 0x18A084u;
label_18a084:
    // 0x18a084: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18a084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a088: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a08c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18a08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a094: 0x3e00008  jr          $ra
    ctx->pc = 0x18A094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A094u;
        // 0x18a098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A09Cu;
    // 0x18a09c: 0x0  nop
    ctx->pc = 0x18a09cu;
    // NOP
    ctx->pc = 0x18a0a0u;
}
